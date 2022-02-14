
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 register u64 VAR_0 asm("11") = 0;

 for (;;) {
  FUNC_0(0);
  asm volatile ("ahi %0,1" : : "r"(VAR_0));
 }
}
