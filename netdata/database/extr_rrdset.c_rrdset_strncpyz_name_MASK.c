
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

char *FUNC_1(char *VAR_0, const char *VAR_1, size_t VAR_2) {
    char VAR_3, *VAR_4 = VAR_0;

    while (VAR_2-- && (VAR_3 = *VAR_1++)) {
        if(VAR_3 != '.' && !FUNC_0(VAR_3))
            VAR_3 = '_';

        *VAR_4++ = VAR_3;
    }

    *VAR_4 = '\0';

    return VAR_0;
}
