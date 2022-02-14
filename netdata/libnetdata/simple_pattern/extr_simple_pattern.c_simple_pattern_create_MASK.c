
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simple_pattern {char negative; struct simple_pattern* next; } ;
typedef int isseparator ;
typedef int SIMPLE_PREFIX_MODE ;
typedef struct simple_pattern SIMPLE_PATTERN ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int*,int ,int) ;
 struct simple_pattern* FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int) ;

SIMPLE_PATTERN *FUNC_6(const char *VAR_0, const char *VAR_1, SIMPLE_PREFIX_MODE VAR_2) {
    struct simple_pattern *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);

    if(FUNC_5(!VAR_0 || !*VAR_0)) return VAR_3;

    int VAR_5[256] = {
            [' '] = 1
            , ['\t'] = 1
            , ['\r'] = 1
            , ['\n'] = 1
            , ['\f'] = 1
            , ['\v'] = 1
    };

    if (FUNC_5(VAR_1 && *VAR_1)) {
        FUNC_2(&VAR_5[0], 0, sizeof(VAR_5));
        while(*VAR_1) VAR_5[(unsigned char)*VAR_1++] = 1;
    }

    char *VAR_6 = FUNC_1(FUNC_4(VAR_0) + 1);
    const char *VAR_7 = VAR_0;

    while(VAR_7 && *VAR_7) {
        VAR_6[0] = '\0';
        char *VAR_8 = VAR_6;

        char VAR_9 = 0;


        while(VAR_5[(unsigned char)*VAR_7])
            VAR_7++;

        if(*VAR_7 == '!') {
            VAR_9 = 1;
            VAR_7++;
        }


        if(FUNC_5(!*VAR_7))
            break;


        char VAR_10 = 0;
        while(*VAR_7) {
            if(*VAR_7 == '\\' && !VAR_10) {
                VAR_10 = 1;
                VAR_7++;
            }
            else {
                if (VAR_5[(unsigned char)*VAR_7] && !VAR_10) {
                    VAR_7++;
                    break;
                }

                *VAR_8++ = *VAR_7++;
                VAR_10 = 0;
            }
        }


        *VAR_8 = '\0';


        if(FUNC_5(!*VAR_6))
            continue;


        struct simple_pattern *VAR_11 = FUNC_3(VAR_6, VAR_2);
        VAR_11->negative = VAR_9;


        if(FUNC_5(!VAR_3))
            VAR_3 = VAR_4 = VAR_11;
        else {
            VAR_4->next = VAR_11;
            VAR_4 = VAR_11;
        }
    }

    FUNC_0(VAR_6);
    return (SIMPLE_PATTERN *)VAR_3;
}
