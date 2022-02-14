
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buffer; size_t len; } ;
typedef TYPE_1__ BUFFER ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(BUFFER *VAR_0, char VAR_1, char VAR_2)
{
    char *VAR_3 = VAR_0->buffer, *VAR_4 = &VAR_0->buffer[VAR_0->len];

    while(VAR_3 != VAR_4) {
        if(*VAR_3 == VAR_1) *VAR_3 = VAR_2;
        VAR_3++;
    }

    FUNC_0(VAR_0);
}
