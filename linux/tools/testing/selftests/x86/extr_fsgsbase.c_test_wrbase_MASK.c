
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 () ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int*,int ,int,int *,int *,int ) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(unsigned short VAR_6, unsigned long VAR_7)
{
 unsigned short VAR_8;
 unsigned long VAR_9;

 FUNC_0("[RUN]\tGS = 0x%hx, GSBASE = 0x%lx\n", VAR_6, VAR_7);

 asm volatile ("mov %0, %%gs" : : "rm" (VAR_6));
 FUNC_3(VAR_7);

 VAR_5 = 0;
 VAR_3 = 1;
 FUNC_2(VAR_2, &VAR_3, VAR_1, 0, ((void*)0), ((void*)0), 0);
 while (VAR_3 != 0)
  FUNC_2(VAR_2, &VAR_3, VAR_0, 1, ((void*)0), ((void*)0), 0);

 asm volatile ("mov %%gs, %0" : "=rm" (VAR_8));
 VAR_9 = FUNC_1();

 if (VAR_8 == VAR_6 && VAR_9 == VAR_7) {
  FUNC_0("[OK]\tIndex and base were preserved\n");
 } else {
  FUNC_0("[FAIL]\tAfter switch, GS = 0x%hx and GSBASE = 0x%lx\n",
         VAR_8, VAR_9);
  VAR_4++;
 }
}
