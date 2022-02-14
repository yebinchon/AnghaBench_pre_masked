
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

int
FUNC_2(const char *VAR_0, const char *VAR_1)
{
    if (FUNC_0(VAR_0, "\\Device\\NPF_", 12) == 0)
        VAR_0 += 12;
    if (FUNC_0(VAR_1, "\\Device\\NPF_", 12) == 0)
        VAR_1 += 12;
    return FUNC_1(VAR_0, VAR_1) == 0;
}
