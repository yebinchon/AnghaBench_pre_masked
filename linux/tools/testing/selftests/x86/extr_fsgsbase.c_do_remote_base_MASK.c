
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,unsigned long,char*,unsigned short) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3()
{
 unsigned long VAR_4 = VAR_3;
 bool VAR_5 = 0;
 if (VAR_4 == VAR_1) {
  VAR_4 = 0;
  VAR_5 = 1;
 }

 if (FUNC_2(VAR_2, VAR_0, VAR_4) != 0)
  FUNC_0(1, "ARCH_SET_GS");

 if (VAR_5)
  asm volatile ("mov %0, %%gs" : : "rm" ((unsigned short)0));

 unsigned short VAR_6;
 asm volatile ("mov %%gs, %0" : "=rm" (VAR_6));
 FUNC_1("\tother thread: ARCH_SET_GS(0x%lx)%s -- sel is 0x%hx\n",
        VAR_4, VAR_5 ? " and clear gs" : "", VAR_6);
}
