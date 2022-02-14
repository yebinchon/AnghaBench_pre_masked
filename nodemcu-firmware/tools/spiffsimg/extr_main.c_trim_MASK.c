
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

char *FUNC_1 (char *VAR_0)
{
  if (!VAR_0)
    return "";

  char *VAR_1 = 0;
  while (*VAR_0)
  {
    if (!VAR_1 && !FUNC_0 (*VAR_0))
      VAR_1 = VAR_0;
    ++VAR_0;
  }
  if (!VAR_1)
    return "";
  while (--VAR_0 > VAR_1 && FUNC_0 (*VAR_0))
    ;
  VAR_0[1] = 0;
  return VAR_1;
}
