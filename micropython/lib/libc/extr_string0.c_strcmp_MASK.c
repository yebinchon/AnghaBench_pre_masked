
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1) {
    while (*VAR_0 && *VAR_1) {
        char VAR_2 = *VAR_0++;
        char VAR_3 = *VAR_1++;
        if (VAR_2 < VAR_3) return -1;
        else if (VAR_2 > VAR_3) return 1;
    }
    if (*VAR_1) return -1;
    else if (*VAR_0) return 1;
    else return 0;
}
