
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CGI_varlist ;


 int * FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;

CGI_varlist *
FUNC_5(CGI_varlist *VAR_0, const char *VAR_1) {
    char *VAR_2;
    const char *VAR_3, *VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

    if (VAR_1 == 0) {
        return VAR_0;
    }
    VAR_2 = (char *) FUNC_3(FUNC_4(VAR_1) + 1);
    VAR_3 = VAR_4 = 0;
    for (VAR_5 = VAR_6 = VAR_9 = 0; VAR_9 == 0; VAR_5++) {
        switch (VAR_1[VAR_5]) {

        case '=':
            if (VAR_3 != 0) {
                break;
            }
            if (VAR_3 == 0 && VAR_6 > 0) {
                VAR_3 = VAR_2;
                VAR_2[VAR_6++] = 0;
                VAR_4 = VAR_2 + VAR_6;
            }
            continue;

        case 0:
            VAR_9 = 1;

        case '&':
            VAR_2[VAR_6] = 0;
            if (VAR_3 == 0 && VAR_6 > 0) {
                VAR_3 = VAR_2;
                VAR_4 = VAR_2 + VAR_6;
            }
            if (VAR_3 != 0) {
                VAR_0 = FUNC_0(VAR_0, VAR_3, VAR_4);
            }
            VAR_6 = 0;
            VAR_3 = VAR_4 = 0;
            continue;

        case '+':
            VAR_2[VAR_6++] = ' ';
            continue;

        case '%':
            if ((VAR_7 = FUNC_2(VAR_1[VAR_5 + 1])) >= 0 &&
                (VAR_8 = FUNC_2(VAR_1[VAR_5 + 2])) >= 0)
            {
                VAR_2[VAR_6++] = (VAR_7 << 4) + VAR_8;
                VAR_5 += 2;
                continue;
            }
            break;
        }
        VAR_2[VAR_6++] = VAR_1[VAR_5];
    }
    FUNC_1(VAR_2);
    return VAR_0;
}
