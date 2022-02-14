
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* val; size_t len; } ;
struct TYPE_9__ {int real; int integer; TYPE_1__ string; } ;
struct TYPE_10__ {scalar_t__ depth; int token; TYPE_2__ value; } ;
typedef TYPE_3__ lex_t ;
typedef int json_t ;
typedef int json_error_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;







 int FUNC_0 (int *,TYPE_3__*,char*) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int * FUNC_5 () ;
 int * FUNC_6 (char const*,size_t) ;
 int FUNC_7 (char const*,char,size_t) ;
 int * FUNC_8 (TYPE_3__*,size_t,int *) ;
 int * FUNC_9 (TYPE_3__*,size_t,int *) ;

__attribute__((used)) static json_t *FUNC_10(lex_t *VAR_2, size_t VAR_3, json_error_t *VAR_4)
{
    json_t *VAR_5;

    VAR_2->depth++;
    if(VAR_2->depth > VAR_1) {
        FUNC_0(VAR_4, VAR_2, "maximum parsing depth reached");
        return ((void*)0);
    }

    switch(VAR_2->token) {
        case 129: {
            const char *VAR_6 = VAR_2->value.string.val;
            size_t VAR_7 = VAR_2->value.string.len;

            if(!(VAR_3 & VAR_0)) {
                if(FUNC_7(VAR_6, '\0', VAR_7)) {
                    FUNC_0(VAR_4, VAR_2, "\\u0000 is not allowed without JSON_ALLOW_NUL");
                    return ((void*)0);
                }
            }

            VAR_5 = FUNC_6(VAR_6, VAR_7);
            if(VAR_5) {
                VAR_2->value.string.val = ((void*)0);
                VAR_2->value.string.len = 0;
            }
            break;
        }

        case 133: {
            VAR_5 = FUNC_2(VAR_2->value.integer);
            break;
        }

        case 130: {
            VAR_5 = FUNC_4(VAR_2->value.real);
            break;
        }

        case 128:
            VAR_5 = FUNC_5();
            break;

        case 134:
            VAR_5 = FUNC_1();
            break;

        case 131:
            VAR_5 = FUNC_3();
            break;

        case '{':
            VAR_5 = FUNC_9(VAR_2, VAR_3, VAR_4);
            break;

        case '[':
            VAR_5 = FUNC_8(VAR_2, VAR_3, VAR_4);
            break;

        case 132:
            FUNC_0(VAR_4, VAR_2, "invalid token");
            return ((void*)0);

        default:
            FUNC_0(VAR_4, VAR_2, "unexpected token");
            return ((void*)0);
    }

    if(!VAR_5)
        return ((void*)0);

    VAR_2->depth--;
    return VAR_5;
}
