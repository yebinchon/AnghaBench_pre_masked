
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sljit_uw ;
typedef int sljit_s32 ;


 int* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{

 VAR_0 = (sljit_s32*)(((sljit_uw)VAR_1 + 15) & ~0xf);


 VAR_0[0] = 0x80000000;
 VAR_0[4] = 0x7fffffff;

 VAR_0[8] = 0;
 VAR_0[9] = 0x80000000;
 VAR_0[12] = 0xffffffff;
 VAR_0[13] = 0x7fffffff;
}
