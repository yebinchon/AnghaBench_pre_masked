
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *FUNC_0(char *VAR_0) {
    if (VAR_0 != ((void*)0)) {
        char *VAR_1 = VAR_0;
        while (*VAR_1 != 0) {
            if (*VAR_1 == '\\')
                *VAR_1 = '/';
            ++VAR_1;
        }
    }
    return VAR_0;
}
