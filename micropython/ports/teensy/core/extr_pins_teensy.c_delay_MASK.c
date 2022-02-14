
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(uint32_t VAR_0)
{
 uint32_t VAR_1 = FUNC_0();

 if (VAR_0 > 0) {
  while (1) {
   if ((FUNC_0() - VAR_1) >= 1000) {
    VAR_0--;
    if (VAR_0 == 0) return;
    VAR_1 += 1000;
   }
   FUNC_1();
  }
 }
}
