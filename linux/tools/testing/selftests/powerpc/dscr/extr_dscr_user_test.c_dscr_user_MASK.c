
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

int FUNC_3(void)
{
 int VAR_1;

 FUNC_0("");

 for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
  FUNC_1(VAR_1);
  if (FUNC_0("kernel"))
   return 1;
 }

 for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
  FUNC_2(VAR_1);
  if (FUNC_0("user"))
   return 1;
 }
 return 0;
}
