
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0, char *VAR_1[2]) {
    int VAR_2 = 0;

    VAR_1[0] = VAR_0 = FUNC_0(VAR_0);
    while (*VAR_0 != '=' && *VAR_0 != 0) {
        VAR_0++;
    }
    if (*VAR_0 != '=' || VAR_0 == VAR_1[0]) {
        return 0;
    }
    *VAR_0++ = 0;
    if (*VAR_0 == '"' || *VAR_0 == '\'' || *VAR_0 == '`') {
        VAR_2 = *VAR_0++;
    }
    VAR_1[1] = VAR_0;
    if (VAR_2 != 0) {
        while(*VAR_0 != VAR_2 && *VAR_0 != 0) {
            VAR_0++;
        }
        if (*VAR_0 != VAR_2) {
            return 0;
        }
        *VAR_0++ = 0;
        if (*VAR_0 == ';') {
            VAR_0++;
        }
    }
    else {
        while (*VAR_0 != ';' && *VAR_0 != ' ' && *VAR_0 != '\t' &&
            *VAR_0 != '\r' && *VAR_0 != '\n' && *VAR_0 != 0)
        {
            VAR_0++;
        }
        if (*VAR_0 != 0) {
            *VAR_0++ = 0;
        }
    }
    return VAR_0;
}
