
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* ptr; int last_token; char* last_nl; char* code; } ;
typedef TYPE_1__ parser_ctx_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_3(void *VAR_1, parser_ctx_t *VAR_2)
{
    int VAR_3;

    while(1) {
        VAR_3 = FUNC_1(VAR_1, VAR_2);
        if(VAR_3 == '_') {
            FUNC_2(VAR_2);
            if(*VAR_2->ptr != '\n') {
                FUNC_0("'_' not followed by newline\n");
                return 0;
            }
            VAR_2->ptr++;
            continue;
        }
        if(VAR_3 != VAR_0 || VAR_2->last_token != VAR_0)
            break;

        VAR_2->last_nl = VAR_2->ptr-VAR_2->code;
    }

    return (VAR_2->last_token = VAR_3);
}
