
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
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_5, bool VAR_6)
{
 unsigned long VAR_7, VAR_8;

 FUNC_1("[RUN]\tARCH_SET_GS to 0x%lx then mov 0 to %%gs%s\n", VAR_5, VAR_6 ? " and schedule " : "");
 if (FUNC_3(VAR_3, VAR_1, VAR_5) != 0)
  FUNC_0(1, "ARCH_SET_GS");

 if (VAR_6)
  FUNC_4(10);

 asm volatile ("mov %0, %%gs" : : "rm" (0));
 VAR_7 = FUNC_2(VAR_2);
 if (FUNC_3(VAR_3, VAR_0, &VAR_8) != 0)
  FUNC_0(1, "ARCH_GET_GS");
 if (VAR_7 == VAR_8) {
  FUNC_1("[OK]\tGSBASE is 0x%lx\n", VAR_7);
 } else {
  VAR_4++;
  FUNC_1("[FAIL]\tGSBASE changed to 0x%lx but kernel reports 0x%lx\n", VAR_7, VAR_8);
 }
}
