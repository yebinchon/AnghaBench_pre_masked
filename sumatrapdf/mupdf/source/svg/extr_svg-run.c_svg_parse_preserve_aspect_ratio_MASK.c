
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, int *VAR_1, int *VAR_2)
{
 *VAR_1 = *VAR_2 = 1;
 if (FUNC_0(VAR_0, "none")) return 0;
 if (FUNC_0(VAR_0, "xMin")) *VAR_1 = 0;
 if (FUNC_0(VAR_0, "xMid")) *VAR_1 = 1;
 if (FUNC_0(VAR_0, "xMax")) *VAR_1 = 2;
 if (FUNC_0(VAR_0, "YMin")) *VAR_2 = 0;
 if (FUNC_0(VAR_0, "YMid")) *VAR_2 = 1;
 if (FUNC_0(VAR_0, "YMax")) *VAR_2 = 2;
 return 1;
}
