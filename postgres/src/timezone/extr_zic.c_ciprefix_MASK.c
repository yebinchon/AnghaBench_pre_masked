
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(char const *VAR_0, char const *VAR_1)
{
 do
  if (!*VAR_0)
   return 1;
 while (FUNC_0(*VAR_0++) == FUNC_0(*VAR_1++));

 return 0;
}
