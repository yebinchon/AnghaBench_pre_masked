
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (char*,unsigned long,...) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,...) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned short VAR_7;

 FUNC_1("[RUN]\tARCH_SET_GS to 0x%lx\n", VAR_5);
 if (FUNC_3(VAR_3, VAR_1, VAR_5) != 0)
  FUNC_0(1, "ARCH_SET_GS");

 asm volatile ("mov %%gs, %0" : "=rm" (VAR_7));
 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 == VAR_5) {
  FUNC_1("[OK]\tGSBASE was set as expected (selector 0x%hx)\n",
         VAR_7);
 } else {
  VAR_4++;
  FUNC_1("[FAIL]\tGSBASE was not as expected: got 0x%lx (selector 0x%hx)\n",
         VAR_6, VAR_7);
 }

 if (FUNC_3(VAR_3, VAR_0, &VAR_6) != 0)
  FUNC_0(1, "ARCH_GET_GS");
 if (VAR_6 == VAR_5) {
  FUNC_1("[OK]\tARCH_GET_GS worked as expected (selector 0x%hx)\n",
         VAR_7);
 } else {
  VAR_4++;
  FUNC_1("[FAIL]\tARCH_GET_GS was not as expected: got 0x%lx (selector 0x%hx)\n",
         VAR_6, VAR_7);
 }
}
