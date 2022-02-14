
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0)
{
 char *VAR_1;
 for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++) {
  if (FUNC_0((int) *VAR_1))
   return (0);
 }
 return (1);
}
