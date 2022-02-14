
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 int FUNC_5 () ;

void FUNC_6(void)
{
 ULONG VAR_1;

 FUNC_1();

 FUNC_3();
 if(!VAR_0)
 {
  __asm__ __volatile__("mov $NewIntEHandler,%0"
   :"=r" (VAR_1)
   :
   :"eax");
  VAR_0=FUNC_4(0x0E,(ULONG)VAR_1);
 }
 FUNC_5();
 FUNC_0((0,"OldIntE @ %x\n", VAR_0));
    FUNC_2();
}
