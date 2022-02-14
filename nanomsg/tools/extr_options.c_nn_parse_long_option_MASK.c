
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_parse_context {char* data; char** last_option_usage; struct nn_option* options; } ;
struct nn_option {char* longname; } ;


 int FUNC_0 (struct nn_parse_context*) ;
 int FUNC_1 (struct nn_parse_context*) ;
 scalar_t__ FUNC_2 (struct nn_parse_context*) ;
 scalar_t__ FUNC_3 (struct nn_option*) ;
 int FUNC_4 (char*,struct nn_parse_context*,int) ;
 int FUNC_5 (struct nn_parse_context*,int,char*) ;

__attribute__((used)) static void FUNC_6 (struct nn_parse_context *VAR_0)
{
    struct nn_option *VAR_1;
    char *VAR_2, *VAR_3;
    size_t VAR_4;
    size_t VAR_5;
    int VAR_6;
    char *VAR_7;
    int VAR_8;

    VAR_7 = VAR_0->data+2;
    VAR_4 = 0;
    VAR_6 = -1;
    for (VAR_8 = 0;; ++VAR_8) {
        VAR_1 = &VAR_0->options[VAR_8];
        if (!VAR_1->longname)
            break;
        for (VAR_2 = VAR_1->longname, VAR_3 = VAR_7;; ++VAR_2, ++VAR_3) {
            if (*VAR_3 == 0 || *VAR_3 == '=') {
                VAR_5 = VAR_2 - VAR_1->longname;
                if (!*VAR_2) {
                    VAR_6 = VAR_8;
                    VAR_4 = VAR_5;
                    goto finish;
                }
                if (VAR_5 == VAR_4) {
                    VAR_6 = -1;
                } else if (VAR_5 > VAR_4) {
                    VAR_6 = VAR_8;
                    VAR_4 = VAR_5;
                }
                break;
            } else if (*VAR_3 != *VAR_2) {
                break;
            }
        }
    }
finish:
    if (VAR_6 >= 0) {
        VAR_1 = &VAR_0->options[VAR_6];
        VAR_0->last_option_usage[VAR_6] = VAR_0->data;
        if (VAR_7[VAR_4] == '=') {
            if (FUNC_3 (VAR_1)) {
                FUNC_5 (VAR_0, VAR_6, VAR_7 + VAR_4 + 1);
            } else {
                FUNC_4 ("does not accept argument", VAR_0, VAR_6);
            }
        } else {
            if (FUNC_3 (VAR_1)) {
                if (FUNC_2 (VAR_0)) {
                    FUNC_5 (VAR_0, VAR_6, VAR_0->data);
                } else {
                    FUNC_4 ("requires an argument", VAR_0, VAR_6);
                }
            } else {
                FUNC_5 (VAR_0, VAR_6, ((void*)0));
            }
        }
    } else if (VAR_4 > 0) {
        FUNC_0 (VAR_0);
    } else {
        FUNC_1 (VAR_0);
    }
}
