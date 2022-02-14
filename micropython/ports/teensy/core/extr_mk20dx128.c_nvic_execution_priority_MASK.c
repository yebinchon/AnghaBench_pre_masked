
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int) ;

int FUNC_1(void)
{
 int VAR_0=256;
 uint32_t VAR_1, VAR_2, VAR_3, VAR_4;



 __asm__ volatile("mrs %0, faultmask\n" : "=r" (VAR_2)::);
 if (VAR_2) return -1;
 __asm__ volatile("mrs %0, primask\n" : "=r" (VAR_1)::);
 if (VAR_1) return 0;
 __asm__ volatile("mrs %0, ipsr\n" : "=r" (VAR_4)::);
 if (VAR_4) {
  if (VAR_4 < 16) VAR_0 = 0;
  else VAR_0 = FUNC_0(VAR_4 - 16);
 }
 __asm__ volatile("mrs %0, basepri\n" : "=r" (VAR_3)::);
 if (VAR_3 > 0 && VAR_3 < VAR_0) VAR_0 = VAR_3;
 return VAR_0;
}
