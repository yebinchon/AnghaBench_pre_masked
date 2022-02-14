
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ token; int saved_text; } ;
typedef TYPE_1__ lex_t ;
typedef int json_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char const*,char*) ;

__attribute__((used)) static int FUNC_13(lex_t *VAR_8, json_error_t *VAR_9)
{
    int VAR_10;

    FUNC_10(&VAR_8->saved_text);

    if(VAR_8->token == VAR_6)
        FUNC_2(VAR_8);

    do
        VAR_10 = FUNC_3(VAR_8, VAR_9);
    while(VAR_10 == ' ' || VAR_10 == '\t' || VAR_10 == '\n' || VAR_10 == '\r');

    if(VAR_10 == VAR_0) {
        VAR_8->token = VAR_2;
        goto out;
    }

    if(VAR_10 == VAR_1) {
        VAR_8->token = VAR_4;
        goto out;
    }

    FUNC_5(VAR_8, VAR_10);

    if(VAR_10 == '{' || VAR_10 == '}' || VAR_10 == '[' || VAR_10 == ']' || VAR_10 == ':' || VAR_10 == ',')
        VAR_8->token = VAR_10;

    else if(VAR_10 == '"')
        FUNC_8(VAR_8, VAR_9);

    else if(FUNC_1(VAR_10) || VAR_10 == '-') {
        if(FUNC_7(VAR_8, VAR_10, VAR_9))
            goto out;
    }

    else if(FUNC_0(VAR_10)) {

        const char *VAR_11;

        do
            VAR_10 = FUNC_4(VAR_8, VAR_9);
        while(FUNC_0(VAR_10));
        FUNC_9(VAR_8, VAR_10);

        VAR_11 = FUNC_11(&VAR_8->saved_text);

        if(FUNC_12(VAR_11, "true") == 0)
            VAR_8->token = VAR_7;
        else if(FUNC_12(VAR_11, "false") == 0)
            VAR_8->token = VAR_3;
        else if(FUNC_12(VAR_11, "null") == 0)
            VAR_8->token = VAR_5;
        else
            VAR_8->token = VAR_4;
    }

    else {


        FUNC_6(VAR_8);
        VAR_8->token = VAR_4;
    }

out:
    return VAR_8->token;
}
