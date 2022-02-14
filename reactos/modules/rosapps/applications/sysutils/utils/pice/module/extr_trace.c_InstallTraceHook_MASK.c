
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 () ;

BOOLEAN FUNC_4(void)
{
 ULONG VAR_2;

    FUNC_0((0,"InstallTraceHook(OldInt1Handler=%0.8x)...\n",VAR_0));

 FUNC_1();
 if(!VAR_0)
 {
  __asm__("mov $NewInt1Handler,%0"
   :"=r" (VAR_2)
   :
   :"eax");
  VAR_0=FUNC_2(0x01,(ULONG)VAR_2);
 }
 FUNC_3();
 return VAR_1;
}
