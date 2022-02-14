
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {double real; scalar_t__ integer; } ;
struct TYPE_14__ {int length; } ;
struct TYPE_13__ {int flags; TYPE_1__ value; int token; TYPE_3__ saved_text; } ;
typedef TYPE_2__ lex_t ;
typedef scalar_t__ json_int_t ;
typedef int json_error_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *,TYPE_2__*,char*) ;
 scalar_t__ FUNC_2 (char const*,char**,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,double*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 char* FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(lex_t *VAR_6, int VAR_7, json_error_t *VAR_8)
{
    const char *VAR_9;
    char *VAR_10;
    double VAR_11;

    VAR_6->token = VAR_3;

    if(VAR_7 == '-')
        VAR_7 = FUNC_6(VAR_6, VAR_8);

    if(VAR_7 == '0') {
        VAR_7 = FUNC_6(VAR_6, VAR_8);
        if(FUNC_4(VAR_7)) {
            FUNC_9(VAR_6, VAR_7);
            goto out;
        }
    }
    else if(FUNC_4(VAR_7)) {
        do
            VAR_7 = FUNC_6(VAR_6, VAR_8);
        while(FUNC_4(VAR_7));
    }
    else {
        FUNC_9(VAR_6, VAR_7);
        goto out;
    }

    if(!(VAR_6->flags & VAR_1) &&
       VAR_7 != '.' && VAR_7 != 'E' && VAR_7 != 'e')
    {
        json_int_t VAR_12;

        FUNC_9(VAR_6, VAR_7);

        VAR_9 = FUNC_10(&VAR_6->saved_text);

        VAR_5 = 0;
        VAR_12 = FUNC_2(VAR_9, &VAR_10, 10);
        if(VAR_5 == VAR_0) {
            if(VAR_12 < 0)
                FUNC_1(VAR_8, VAR_6, "too big negative integer");
            else
                FUNC_1(VAR_8, VAR_6, "too big integer");
            goto out;
        }

        FUNC_0(VAR_10 == VAR_9 + VAR_6->saved_text.length);

        VAR_6->token = VAR_2;
        VAR_6->value.integer = VAR_12;
        return 0;
    }

    if(VAR_7 == '.') {
        VAR_7 = FUNC_5(VAR_6, VAR_8);
        if(!FUNC_4(VAR_7)) {
            FUNC_8(VAR_6, VAR_7);
            goto out;
        }
        FUNC_7(VAR_6, VAR_7);

        do
            VAR_7 = FUNC_6(VAR_6, VAR_8);
        while(FUNC_4(VAR_7));
    }

    if(VAR_7 == 'E' || VAR_7 == 'e') {
        VAR_7 = FUNC_6(VAR_6, VAR_8);
        if(VAR_7 == '+' || VAR_7 == '-')
            VAR_7 = FUNC_6(VAR_6, VAR_8);

        if(!FUNC_4(VAR_7)) {
            FUNC_9(VAR_6, VAR_7);
            goto out;
        }

        do
            VAR_7 = FUNC_6(VAR_6, VAR_8);
        while(FUNC_4(VAR_7));
    }

    FUNC_9(VAR_6, VAR_7);

    if(FUNC_3(&VAR_6->saved_text, &VAR_11)) {
        FUNC_1(VAR_8, VAR_6, "real number overflow");
        goto out;
    }

    VAR_6->token = VAR_4;
    VAR_6->value.real = VAR_11;
    return 0;

out:
    return -1;
}
