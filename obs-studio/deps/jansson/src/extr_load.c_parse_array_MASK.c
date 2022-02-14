
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char token; } ;
typedef TYPE_1__ lex_t ;
typedef int json_t ;
typedef int json_error_t ;


 int FUNC_0 (int *,TYPE_1__*,char*) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * FUNC_5 (TYPE_1__*,size_t,int *) ;

__attribute__((used)) static json_t *FUNC_6(lex_t *VAR_0, size_t VAR_1, json_error_t *VAR_2)
{
    json_t *VAR_3 = FUNC_1();
    if(!VAR_3)
        return ((void*)0);

    FUNC_4(VAR_0, VAR_2);
    if(VAR_0->token == ']')
        return VAR_3;

    while(VAR_0->token) {
        json_t *VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2);
        if(!VAR_4)
            goto error;

        if(FUNC_2(VAR_3, VAR_4)) {
            FUNC_3(VAR_4);
            goto error;
        }
        FUNC_3(VAR_4);

        FUNC_4(VAR_0, VAR_2);
        if(VAR_0->token != ',')
            break;

        FUNC_4(VAR_0, VAR_2);
    }

    if(VAR_0->token != ']') {
        FUNC_0(VAR_2, VAR_0, "']' expected");
        goto error;
    }

    return VAR_3;

error:
    FUNC_3(VAR_3);
    return ((void*)0);
}
