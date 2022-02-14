
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static bool FUNC_1(bool *VAR_1)
{
 if (VAR_0 != -1) {
  if (VAR_0 == 0)
   *VAR_1 = 1;
  else
   *VAR_1 = 0;

  FUNC_0("Proto override in use\n");
  return 1;
 }

 return 0;
}
