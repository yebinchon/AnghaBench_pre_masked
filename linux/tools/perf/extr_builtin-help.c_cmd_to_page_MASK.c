
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0)
{
 char *VAR_1;

 if (!VAR_0)
  return "perf";
 else if (FUNC_1(VAR_0, "perf"))
  return VAR_0;

 return FUNC_0(&VAR_1, "perf-%s", VAR_0) < 0 ? ((void*)0) : VAR_1;
}
