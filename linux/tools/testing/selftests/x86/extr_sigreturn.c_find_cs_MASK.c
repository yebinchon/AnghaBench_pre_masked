
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(int VAR_1)
{
 unsigned short VAR_2;

 asm ("mov %%cs,%0" : "=r" (VAR_2));

 if (FUNC_0(VAR_2) == VAR_1)
  return VAR_2;
 if (FUNC_0(VAR_2 + (2 << 3)) == VAR_1)
  return VAR_2 + (2 << 3);
 if (VAR_2 > (2<<3) && FUNC_0(VAR_2 - (2 << 3)) == VAR_1)
     return VAR_2 - (2 << 3);
 if (FUNC_0(VAR_0) == VAR_1)
  return VAR_0;

 FUNC_1("[WARN]\tCould not find %d-bit CS\n", VAR_1);
 return -1;
}
