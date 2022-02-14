
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

char *FUNC_1(char **VAR_0, char VAR_1) {
    if(FUNC_0(!VAR_0 || !*VAR_0))
        return ((void*)0);


    char *VAR_2 = *VAR_0;


    while(*VAR_2 == VAR_1) VAR_2++;
    char *VAR_3 = VAR_2;


    while(*VAR_2++) {
        if(FUNC_0(*VAR_2 == VAR_1)) {
            *VAR_2++ = '\0';
            *VAR_0 = VAR_2;
            return VAR_3;
        }
    }

    *VAR_0 = ((void*)0);
    return VAR_3;
}
