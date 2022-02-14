
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*,int,int *) ;

char *FUNC_1(char *VAR_0, size_t VAR_1, FILE *VAR_2, size_t *VAR_3) {
    char *VAR_4 = FUNC_0(VAR_0, (int)VAR_1, VAR_2);
    if (!VAR_4) return ((void*)0);

    char *VAR_5 = VAR_4;
    if (*VAR_5 != '\0') {

        while (*++VAR_5 != '\0');


        while (--VAR_5 > VAR_4 && *VAR_5 == '\n')
            *VAR_5 = '\0';
    }

    if (VAR_3)
        *VAR_3 = VAR_5 - VAR_4 + 1;

    return VAR_4;
}
