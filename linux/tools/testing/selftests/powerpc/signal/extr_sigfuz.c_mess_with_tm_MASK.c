
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(void)
{

 if (FUNC_0(3)) {
  asm ("tbegin.	;"
       "beq 8	;");


  if (FUNC_0(2))
   asm("tsuspend.	;");
 }


 if (FUNC_0(20))
  asm("tend.	;");
}
