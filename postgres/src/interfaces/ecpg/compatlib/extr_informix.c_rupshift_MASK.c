
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 char FUNC_1 (unsigned char) ;

void
FUNC_2(char *VAR_0)
{
 for (; *VAR_0 != '\0'; VAR_0++)
  if (FUNC_0((unsigned char) *VAR_0))
   *VAR_0 = FUNC_1((unsigned char) *VAR_0);
 return;
}
