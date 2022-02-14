
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int) ;

void
FUNC_1(char *VAR_0)
{
 while (*VAR_0)
 {
  if ((*VAR_0 >= 'a') && (*VAR_0 <= 'z'))
   *VAR_0 = FUNC_0((int) *VAR_0);
  VAR_0++;
 }
}
