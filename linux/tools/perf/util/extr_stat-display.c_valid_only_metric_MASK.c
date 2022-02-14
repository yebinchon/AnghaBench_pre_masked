
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0)
{
 if (!VAR_0)
  return 0;
 if (FUNC_0(VAR_0, "/sec") ||
     FUNC_0(VAR_0, "hz") ||
     FUNC_0(VAR_0, "Hz") ||
     FUNC_0(VAR_0, "CPUs utilized"))
  return 0;
 return 1;
}
