
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

int
FUNC_1(const char *VAR_0, const char *VAR_1)
{
    while (*VAR_1)
    {
        if (*VAR_0 != *VAR_1) return 0;
        VAR_0++;
        VAR_1++;
    }
    if (FUNC_0(VAR_1[-1])) return 1;
    if (!FUNC_0(*VAR_0)) return 0;
    return 1;
}
