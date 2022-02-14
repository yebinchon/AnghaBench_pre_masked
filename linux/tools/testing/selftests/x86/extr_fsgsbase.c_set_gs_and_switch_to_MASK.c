
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long VAR_9 ;
 scalar_t__ FUNC_3 (int ,int*,unsigned long,...) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_10,
     unsigned short VAR_11,
     unsigned long VAR_12)
{
 unsigned long VAR_13;
 unsigned short VAR_14, VAR_15;

 bool VAR_16 = 0;
 if (VAR_10 == VAR_4) {
  VAR_16 = 1;
  VAR_10 = 0;
 }

 FUNC_1("[RUN]\tARCH_SET_GS(0x%lx)%s, then schedule to 0x%lx\n",
        VAR_10, VAR_16 ? " and clear gs" : "", VAR_12);
 if (VAR_11)
  FUNC_1("\tBefore schedule, set selector to 0x%hx\n", VAR_11);
 if (FUNC_3(VAR_5, &VAR_0, VAR_10) != 0)
  FUNC_0(1, "ARCH_SET_GS");
 if (VAR_16)
  asm volatile ("mov %0, %%gs" : : "rm" ((unsigned short)0));

 if (FUNC_2(VAR_3) != VAR_10) {
  VAR_8++;
  FUNC_1("[FAIL]\tGSBASE wasn't set as expected\n");
 }

 if (VAR_11) {
  asm volatile ("mov %0, %%gs" : : "rm" (VAR_11));
  VAR_14 = VAR_11;
  VAR_10 = FUNC_2(VAR_3);





  asm volatile ("mov %0, %%gs" : : "rm" (VAR_11));
 } else {
  asm volatile ("mov %%gs, %0" : "=rm" (VAR_14));
 }

 VAR_9 = VAR_12;
 VAR_7 = 1;
 FUNC_3(VAR_6, &VAR_7, VAR_2, 0, ((void*)0), ((void*)0), 0);
 while (VAR_7 != 0)
  FUNC_3(VAR_6, &VAR_7, VAR_1, 1, ((void*)0), ((void*)0), 0);

 asm volatile ("mov %%gs, %0" : "=rm" (VAR_15));
 VAR_13 = FUNC_2(VAR_3);
 if (VAR_13 == VAR_10 && VAR_14 == VAR_15) {
  FUNC_1("[OK]\tGS/BASE remained 0x%hx/0x%lx\n",
         VAR_14, VAR_10);
 } else {
  VAR_8++;
  FUNC_1("[FAIL]\tGS/BASE changed from 0x%hx/0x%lx to 0x%hx/0x%lx\n",
         VAR_14, VAR_10, VAR_15, VAR_13);
 }
}
