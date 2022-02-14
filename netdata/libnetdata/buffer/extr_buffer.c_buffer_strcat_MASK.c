
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* buffer; size_t len; size_t size; } ;
typedef TYPE_1__ BUFFER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,size_t,size_t) ;
 size_t FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(BUFFER *VAR_1, const char *VAR_2)
{


    if(FUNC_5(!VAR_2 || !*VAR_2)) return;

    FUNC_1(VAR_1, 1);

    char *VAR_3 = &VAR_1->buffer[VAR_1->len], *VAR_4, *VAR_5 = &VAR_1->buffer[VAR_1->size];
    size_t VAR_6 = VAR_1->len;

    VAR_4 = VAR_3;
    while(*VAR_2 && VAR_3 != VAR_5)
        *VAR_3++ = *VAR_2++;

    VAR_6 += VAR_3 - VAR_4;

    VAR_1->len = VAR_6;
    FUNC_2(VAR_1);

    if(*VAR_2) {
        FUNC_3(VAR_0, "strcat(): increasing web_buffer at position %zu, size = %zu\n", VAR_1->len, VAR_1->size);
        VAR_6 = FUNC_4(VAR_2);
        FUNC_0(VAR_1, VAR_6);
        FUNC_6(VAR_1, VAR_2);
    }
    else {


        FUNC_1(VAR_1, (size_t)1);
        VAR_1->buffer[VAR_1->len] = '\0';
    }
}
