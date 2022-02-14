
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int*,int ,...) ;

__attribute__((used)) static void FUNC_4(void)
{
 unsigned long VAR_8;

 FUNC_1("[RUN]\tARCH_SET_GS(0), clear gs, then manipulate GSBASE in a different thread\n");
 if (FUNC_3(VAR_4, &VAR_0, 0) != 0)
  FUNC_0(1, "ARCH_SET_GS");
 asm volatile ("mov %0, %%gs" : : "rm" ((unsigned short)0));

 VAR_6 = 2;
 FUNC_3(VAR_5, &VAR_6, VAR_2, 0, ((void*)0), ((void*)0), 0);
 while (VAR_6 != 0)
  FUNC_3(VAR_5, &VAR_6, VAR_1, 1, ((void*)0), ((void*)0), 0);

 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8 == 0) {
  FUNC_1("[OK]\tGSBASE remained 0\n");
 } else {
  VAR_7++;
  FUNC_1("[FAIL]\tGSBASE changed to 0x%lx\n", VAR_8);
 }
}
