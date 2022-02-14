
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(void)
{
 FUNC_0();
    __asm__ __volatile__
 (
  "wbinvd\n\t 		mov %%cr3,%%ecx\n\t         mov %%ecx,%%cr3"


        :::"ecx"
    );
 FUNC_1();
}
