
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
 if (FUNC_2(VAR_0, "cop"))
  return 9;
 if (FUNC_2(VAR_0, "app"))
  return 10;
 if (VAR_0[0] == 'a' && VAR_0[1] == 'a' && VAR_0[2] >= '0' && VAR_0[2] <= '9')
  return FUNC_1(FUNC_0(&VAR_0[2]), 0, 8);
 return 8;
}
