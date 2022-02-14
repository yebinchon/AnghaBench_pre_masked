
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char token; } ;
typedef TYPE_1__ lex_t ;
typedef int json_t ;
typedef int json_error_t ;


 size_t VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 char* FUNC_7 (TYPE_1__*,size_t*) ;
 scalar_t__ FUNC_8 (char*,char,size_t) ;
 int * FUNC_9 (TYPE_1__*,size_t,int *) ;

__attribute__((used)) static json_t *FUNC_10(lex_t *VAR_2, size_t VAR_3, json_error_t *VAR_4)
{
    json_t *VAR_5 = FUNC_2();
    if(!VAR_5)
        return ((void*)0);

    FUNC_6(VAR_2, VAR_4);
    if(VAR_2->token == '}')
        return VAR_5;

    while(1) {
        char *VAR_6;
        size_t VAR_7;
        json_t *VAR_8;

        if(VAR_2->token != VAR_1) {
            FUNC_0(VAR_4, VAR_2, "string or '}' expected");
            goto error;
        }

        VAR_6 = FUNC_7(VAR_2, &VAR_7);
        if(!VAR_6)
            return ((void*)0);
        if (FUNC_8(VAR_6, '\0', VAR_7)) {
            FUNC_5(VAR_6);
            FUNC_0(VAR_4, VAR_2, "NUL byte in object key not supported");
            goto error;
        }

        if(VAR_3 & VAR_0) {
            if(FUNC_3(VAR_5, VAR_6)) {
                FUNC_5(VAR_6);
                FUNC_0(VAR_4, VAR_2, "duplicate object key");
                goto error;
            }
        }

        FUNC_6(VAR_2, VAR_4);
        if(VAR_2->token != ':') {
            FUNC_5(VAR_6);
            FUNC_0(VAR_4, VAR_2, "':' expected");
            goto error;
        }

        FUNC_6(VAR_2, VAR_4);
        VAR_8 = FUNC_9(VAR_2, VAR_3, VAR_4);
        if(!VAR_8) {
            FUNC_5(VAR_6);
            goto error;
        }

        if(FUNC_4(VAR_5, VAR_6, VAR_8)) {
            FUNC_5(VAR_6);
            FUNC_1(VAR_8);
            goto error;
        }

        FUNC_1(VAR_8);
        FUNC_5(VAR_6);

        FUNC_6(VAR_2, VAR_4);
        if(VAR_2->token != ',')
            break;

        FUNC_6(VAR_2, VAR_4);
    }

    if(VAR_2->token != '}') {
        FUNC_0(VAR_4, VAR_2, "'}' expected");
        goto error;
    }

    return VAR_5;

error:
    FUNC_1(VAR_5);
    return ((void*)0);
}
