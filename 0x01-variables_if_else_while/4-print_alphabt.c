#include<stdio.h>
#include<conio.h>
int main(void){
char ch;
for(ch='a';ch <= 'z';ch++){
    if( ch !='e' &  ch !='q'){
            putchar(ch);
        } else{
             ch++;
        }

   putchar('\n');
}

return 0;
}

