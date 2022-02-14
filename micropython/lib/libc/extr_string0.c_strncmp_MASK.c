
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1, size_t VAR_2) {
    while (*VAR_0 && *VAR_1 && VAR_2 > 0) {
        char VAR_3 = *VAR_0++;
        char VAR_4 = *VAR_1++;
        VAR_2--;
        if (VAR_3 < VAR_4) return -1;
        else if (VAR_3 > VAR_4) return 1;
    }
    if (VAR_2 == 0) return 0;
    else if (*VAR_1) return -1;
    else if (*VAR_0) return 1;
    else return 0;
}
