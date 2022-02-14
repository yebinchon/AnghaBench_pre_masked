
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

bool
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0);

 if (FUNC_2(VAR_0, VAR_1, VAR_2) == 0 &&
  (FUNC_0(VAR_1[VAR_2]) || VAR_1[VAR_2] == '\0'))
  return 1;
 return 0;
}
