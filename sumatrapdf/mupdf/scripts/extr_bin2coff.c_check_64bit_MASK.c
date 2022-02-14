
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int *VAR_1)
{
 if ((FUNC_0(VAR_0, "64bit") == 0) || (FUNC_0(VAR_0, "x64") == 0))
  *VAR_1 = 0;
 else if ((FUNC_0(VAR_0, "32bit") == 0) || (FUNC_0(VAR_0, "Win32") == 0))
  *VAR_1 = 1;
 else
  return 0;
 return 1;
}
