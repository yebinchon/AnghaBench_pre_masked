
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0)
{
  char *VAR_1;
  if (VAR_0 == 0)
    return 0;
  VAR_1 = (char *)FUNC_0(FUNC_2(VAR_0) + 1);
  if (VAR_1 == 0)
    return 0;
  FUNC_1(VAR_1, VAR_0);
  return VAR_1;
}
