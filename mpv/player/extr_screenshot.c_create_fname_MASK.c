
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct bstr {int dummy; } ;
struct MPContext {char* filename; int global; } ;
typedef int buffer ;
typedef struct bstr bstr ;


 char const* FUNC_0 (struct bstr) ;
 int FUNC_1 (char**,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct bstr,char*) ;
 struct bstr FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct MPContext*) ;
 struct tm* FUNC_6 (int *) ;
 char* FUNC_7 (char*) ;
 struct bstr FUNC_8 (char*) ;
 char* FUNC_9 (int ,int) ;
 char* FUNC_10 (char*,int ) ;
 char* FUNC_11 (int *,int ,char*) ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (struct MPContext*,char*) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (char*,int,char*,struct tm*) ;
 char* FUNC_16 (char*,char*) ;
 char* FUNC_17 (int *,char*,char const*) ;
 char* FUNC_18 (char*,char*,...) ;
 int FUNC_19 (char*) ;
 char* FUNC_20 (int *,char*) ;
 char* FUNC_21 (char*,char*) ;
 char* FUNC_22 (char*,char*,int) ;
 char* FUNC_23 (char*,char*,int) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static char *FUNC_25(struct MPContext *VAR_0, char *VAR_1,
                          const char *VAR_2, int *VAR_3, int *VAR_4)
{
    char *VAR_5 = FUNC_20(((void*)0), "");

    time_t VAR_6 = FUNC_24(((void*)0));
    struct tm *VAR_7 = FUNC_6(&VAR_6);

    if (!VAR_1 || *VAR_1 == '\0')
        return ((void*)0);

    for (;;) {
        char *VAR_8 = FUNC_14(VAR_1, '%');
        if (!VAR_8)
            break;
        VAR_5 = FUNC_23(VAR_5, VAR_1, VAR_8 - VAR_1);
        VAR_1 = VAR_8 + 1;
        char VAR_9 = *VAR_1++;
        switch (VAR_9) {
        case '#':
        case '0':
        case 'n': {
            int VAR_10 = '4';
            if (VAR_9 == '#') {
                if (!*VAR_3) {
                    *VAR_4 = 1;
                }
                VAR_9 = *VAR_1++;
            }
            if (VAR_9 == '0') {
                VAR_10 = *VAR_1++;
                if (VAR_10 < '0' || VAR_10 > '9')
                    goto error_exit;
                VAR_9 = *VAR_1++;
            }
            if (VAR_9 != 'n')
                goto error_exit;
            char VAR_11[] = {'%', '0', VAR_10, 'd', '\0'};
            VAR_5 = FUNC_18(VAR_5, VAR_11, *VAR_4);
            if (*VAR_4 < 100000 - 1) {
                (*VAR_4) += 1;
                (*VAR_3) += 1;
            }
            break;
        }
        case 'f':
        case 'F': {
            char *VAR_12 = ((void*)0);
            if (VAR_0->filename)
                VAR_12 = FUNC_7(VAR_0->filename);

            if (!VAR_12)
                VAR_12 = "NO_FILE";

            char *VAR_13 = VAR_12;
            if (VAR_9 == 'F')
                VAR_13 = FUNC_16(VAR_5, VAR_12);
            FUNC_1(&VAR_5, VAR_13);
            break;
        }
        case 'x':
        case 'X': {
            char *VAR_14 = "";
            if (VAR_9 == 'X') {
                if (VAR_1[0] != '{')
                    goto error_exit;
                char *VAR_15 = FUNC_14(VAR_1, '}');
                if (!VAR_15)
                    goto error_exit;
                VAR_14 = FUNC_22(VAR_5, VAR_1 + 1, VAR_15 - VAR_1 - 1);
                VAR_1 = VAR_15 + 1;
            }
            if (!VAR_0->filename || FUNC_12(FUNC_2(VAR_0->filename))) {
                VAR_5 = FUNC_21(VAR_5, VAR_14);
            } else {
                bstr VAR_16 = FUNC_8(VAR_0->filename);
                if (!FUNC_3(VAR_16, "."))
                    VAR_5 = FUNC_18(VAR_5, "%.*s", FUNC_0(VAR_16));
            }
            break;
        }
        case 'p':
        case 'P': {
            char *VAR_17 = FUNC_9(FUNC_5(VAR_0), VAR_9 == 'P');
            FUNC_1(&VAR_5, VAR_17);
            FUNC_19(VAR_17);
            break;
        }
        case 'w': {
            char VAR_18 = *VAR_1;
            if (!VAR_18)
                goto error_exit;
            VAR_1++;
            char VAR_19[] = {'%', VAR_18, '\0'};
            char *VAR_20 = FUNC_10(VAR_19, FUNC_5(VAR_0));
            if (!VAR_20)
                goto error_exit;
            FUNC_1(&VAR_5, VAR_20);
            FUNC_19(VAR_20);
            break;
        }
        case 't': {
            char VAR_21 = *VAR_1;
            if (!VAR_21)
                goto error_exit;
            VAR_1++;
            char VAR_22[] = {'%', VAR_21, '\0'};
            char VAR_23[80];
            if (FUNC_15(VAR_23, sizeof(VAR_23), VAR_22, VAR_7) == 0)
                VAR_23[0] = '\0';
            FUNC_1(&VAR_5, VAR_23);
            break;
        }
        case '{': {
            char *VAR_24 = FUNC_14(VAR_1, '}');
            if (!VAR_24)
                goto error_exit;
            struct bstr VAR_25 = FUNC_4(FUNC_2(VAR_1), 0, VAR_24 - VAR_1);
            char *VAR_26 = FUNC_17(((void*)0), "${%.*s}", FUNC_0(VAR_25));
            char *VAR_27 = FUNC_13(VAR_0, VAR_26);
            FUNC_19(VAR_26);
            if (VAR_27)
                FUNC_1(&VAR_5, VAR_27);
            FUNC_19(VAR_27);
            VAR_1 = VAR_24 + 1;
            break;
        }
        case '%':
            VAR_5 = FUNC_21(VAR_5, "%");
            break;
        default:
            goto error_exit;
        }
    }

    VAR_5 = FUNC_21(VAR_5, VAR_1);
    VAR_5 = FUNC_18(VAR_5, ".%s", VAR_2);
    char *VAR_28 = FUNC_11(((void*)0), VAR_0->global, VAR_5);
    FUNC_19(VAR_5);
    return VAR_28;

error_exit:
    FUNC_19(VAR_5);
    return ((void*)0);
}
