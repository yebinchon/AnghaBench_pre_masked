
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* val; int len; } ;
struct TYPE_11__ {TYPE_1__ string; } ;
struct TYPE_13__ {scalar_t__ length; } ;
struct TYPE_12__ {int token; TYPE_2__ value; TYPE_4__ saved_text; } ;
typedef TYPE_3__ lex_t ;
typedef int json_error_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int *,TYPE_3__*,char*,...) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_3__*,int) ;
 char* FUNC_8 (TYPE_4__*) ;
 scalar_t__ FUNC_9 (int,char*,size_t*) ;

__attribute__((used)) static void FUNC_10(lex_t *VAR_4, json_error_t *VAR_5)
{
    int VAR_6;
    const char *VAR_7;
    char *VAR_8;
    int VAR_9;

    VAR_4->value.string.val = ((void*)0);
    VAR_4->token = VAR_2;

    VAR_6 = FUNC_6(VAR_4, VAR_5);

    while(VAR_6 != '"') {
        if(VAR_6 == VAR_1)
            goto out;

        else if(VAR_6 == VAR_0) {
            FUNC_2(VAR_5, VAR_4, "premature end of input");
            goto out;
        }

        else if(0 <= VAR_6 && VAR_6 <= 0x1F) {

            FUNC_7(VAR_4, VAR_6);
            if(VAR_6 == '\n')
                FUNC_2(VAR_5, VAR_4, "unexpected newline");
            else
                FUNC_2(VAR_5, VAR_4, "control character 0x%x", VAR_6);
            goto out;
        }

        else if(VAR_6 == '\\') {
            VAR_6 = FUNC_6(VAR_4, VAR_5);
            if(VAR_6 == 'u') {
                VAR_6 = FUNC_6(VAR_4, VAR_5);
                for(VAR_9 = 0; VAR_9 < 4; VAR_9++) {
                    if(!FUNC_4(VAR_6)) {
                        FUNC_2(VAR_5, VAR_4, "invalid escape");
                        goto out;
                    }
                    VAR_6 = FUNC_6(VAR_4, VAR_5);
                }
            }
            else if(VAR_6 == '"' || VAR_6 == '\\' || VAR_6 == '/' || VAR_6 == 'b' ||
                    VAR_6 == 'f' || VAR_6 == 'n' || VAR_6 == 'r' || VAR_6 == 't')
                VAR_6 = FUNC_6(VAR_4, VAR_5);
            else {
                FUNC_2(VAR_5, VAR_4, "invalid escape");
                goto out;
            }
        }
        else
            VAR_6 = FUNC_6(VAR_4, VAR_5);
    }
    VAR_8 = FUNC_3(VAR_4->saved_text.length + 1);
    if(!VAR_8) {

        goto out;
    }
    VAR_4->value.string.val = VAR_8;


    VAR_7 = FUNC_8(&VAR_4->saved_text) + 1;

    while(*VAR_7 != '"') {
        if(*VAR_7 == '\\') {
            VAR_7++;
            if(*VAR_7 == 'u') {
                size_t VAR_10;
                int32_t VAR_11;

                VAR_11 = FUNC_1(VAR_7);
                if(VAR_11 < 0) {
                    FUNC_2(VAR_5, VAR_4, "invalid Unicode escape '%.6s'", VAR_7 - 1);
                    goto out;
                }
                VAR_7 += 5;

                if(0xD800 <= VAR_11 && VAR_11 <= 0xDBFF) {

                    if(*VAR_7 == '\\' && *(VAR_7 + 1) == 'u') {
                        int32_t VAR_12 = FUNC_1(++VAR_7);
                        if(VAR_12 < 0) {
                            FUNC_2(VAR_5, VAR_4, "invalid Unicode escape '%.6s'", VAR_7 - 1);
                            goto out;
                        }
                        VAR_7 += 5;

                        if(0xDC00 <= VAR_12 && VAR_12 <= 0xDFFF) {

                            VAR_11 =
                                ((VAR_11 - 0xD800) << 10) +
                                (VAR_12 - 0xDC00) +
                                0x10000;
                        }
                        else {

                            FUNC_2(VAR_5, VAR_4,
                                      "invalid Unicode '\\u%04X\\u%04X'",
                                      VAR_11, VAR_12);
                            goto out;
                        }
                    }
                    else {

                        FUNC_2(VAR_5, VAR_4, "invalid Unicode '\\u%04X'",
                                  VAR_11);
                        goto out;
                    }
                }
                else if(0xDC00 <= VAR_11 && VAR_11 <= 0xDFFF) {
                    FUNC_2(VAR_5, VAR_4, "invalid Unicode '\\u%04X'", VAR_11);
                    goto out;
                }

                if(FUNC_9(VAR_11, VAR_8, &VAR_10))
                    FUNC_0(0);
                VAR_8 += VAR_10;
            }
            else {
                switch(*VAR_7) {
                    case '"': case '\\': case '/':
                        *VAR_8 = *VAR_7; break;
                    case 'b': *VAR_8 = '\b'; break;
                    case 'f': *VAR_8 = '\f'; break;
                    case 'n': *VAR_8 = '\n'; break;
                    case 'r': *VAR_8 = '\r'; break;
                    case 't': *VAR_8 = '\t'; break;
                    default: FUNC_0(0);
                }
                VAR_8++;
                VAR_7++;
            }
        }
        else
            *(VAR_8++) = *(VAR_7++);
    }
    *VAR_8 = '\0';
    VAR_4->value.string.len = VAR_8 - VAR_4->value.string.val;
    VAR_4->token = VAR_3;
    return;

out:
    FUNC_5(VAR_4);
}
