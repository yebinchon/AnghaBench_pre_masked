
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const) ;
 char* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0)
{
    int VAR_1 = 0;
    char *VAR_2, *VAR_3;

    VAR_2 = VAR_3 = FUNC_2(FUNC_3(VAR_0)+3);
    if (VAR_2 == ((void*)0)) {
        FUNC_0();
        return ((void*)0);
    }

    if (*VAR_0 != '\0' && !FUNC_1(*VAR_0)) {
        *VAR_2 = ' '; VAR_2++;
    }
    while (*VAR_0 != '\0') {
        if (FUNC_1(*VAR_0)) {
            if (VAR_1) {
                VAR_0++;
            }
            else {
                *VAR_2 = ' ';
                VAR_2++;
                VAR_0++;
                VAR_1 = 1;
            }
        }
        else {
            *VAR_2 = *VAR_0;
            VAR_2++;
            VAR_0++;
            VAR_1 = 0;
        }
    }

    if (VAR_2 != VAR_3 && VAR_2[-1] == ' ') {
        *VAR_2 = ' ';
        VAR_2++;
    }
    *VAR_2 = '\0';
    return VAR_3;
}
