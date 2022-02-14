
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

int
FUNC_1(char *VAR_0, char *VAR_1)
{
 while (FUNC_0(*VAR_0) == FUNC_0(*VAR_1))
 {
  if (*VAR_0++ == 0)
   return 0;
  VAR_1++;
 }
 return FUNC_0(*VAR_0) - FUNC_0(*VAR_1);
}
