
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int,scalar_t__) ;
 int FUNC_4 () ;

void FUNC_5(void)
{
 ULONG VAR_1;

 FUNC_0();

 FUNC_2();
 if(!VAR_0)
 {
  __asm__("mov $NewDblFltHandler,%0"
   :"=r" (VAR_1)
   :
   :"eax");
  VAR_0=FUNC_3(0x08,(ULONG)VAR_1);
 }
 FUNC_4();

    FUNC_1();
}
