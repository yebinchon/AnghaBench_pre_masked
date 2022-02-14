
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32_t ;


 int FUNC_0 (int) ;

u8_t
FUNC_1(u32_t VAR_0)
{
  u32_t VAR_1;
  u32_t VAR_2 = FUNC_0(VAR_0);


  for (VAR_1 = 1UL << 31 ; VAR_1 != 0; VAR_1 >>= 1) {
    if ((VAR_2 & VAR_1) == 0) {
      break;
    }
  }

  for (; VAR_1 != 0; VAR_1 >>= 1) {
    if ((VAR_2 & VAR_1) != 0) {

      return 0;
    }
  }

  return 1;
}
