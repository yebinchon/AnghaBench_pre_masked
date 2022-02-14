
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(const char *VAR_0, const char *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return 0;
 return VAR_0[0] == VAR_1[0] && VAR_0[1] == VAR_1[1];
}
