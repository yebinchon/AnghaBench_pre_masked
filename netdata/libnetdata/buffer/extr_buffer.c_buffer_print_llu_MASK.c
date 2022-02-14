
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; size_t len; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*,int) ;
 char* FUNC_1 (char*,unsigned long long) ;
 char* FUNC_2 (char*,unsigned long long) ;

void FUNC_3(BUFFER *VAR_0, unsigned long long VAR_1)
{
    FUNC_0(VAR_0, 50);

    char *VAR_2 = &VAR_0->buffer[VAR_0->len];
    char *VAR_3 = VAR_2;







    do *VAR_3++ = (char)('0' + (VAR_1 % 10)); while(VAR_1 /= 10);



    *VAR_3 = '\0';


    char *VAR_4 = VAR_2, *VAR_5 = VAR_3 - 1, VAR_6;
    while (VAR_5 > VAR_4) VAR_6 = *VAR_5, *VAR_5-- = *VAR_4, *VAR_4++ = VAR_6;


    VAR_0->len += VAR_3 - VAR_2;
}
