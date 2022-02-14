
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1 (int VAR_0,int VAR_1,char **VAR_2,char *VAR_3)
{
  if (VAR_0 == VAR_1)
    return 1;

  while (VAR_0 < VAR_1)
    if (FUNC_0(VAR_3,VAR_2[VAR_0++]))
      return 1;

  return 0;
}
