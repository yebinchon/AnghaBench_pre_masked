
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(char **VAR_1, char **VAR_2, char *VAR_3)
{
 if (VAR_2 - VAR_1 >= VAR_0 - 1)
  return 0;
 if (VAR_1 == VAR_2 || FUNC_1(VAR_3, *(VAR_2 - 1)) != 0)
 {
  *VAR_2 = FUNC_0(VAR_3);
  *(VAR_2 + 1) = ((void*)0);
  return 1;
 }

 return 0;
}
