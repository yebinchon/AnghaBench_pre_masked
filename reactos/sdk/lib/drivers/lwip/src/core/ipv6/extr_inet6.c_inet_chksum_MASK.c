
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_t ;
typedef int u16_t ;


 int FUNC_0 (void*,int) ;

u16_t
FUNC_1(void *VAR_0, u16_t VAR_1)
{
  u32_t VAR_2, VAR_3;

  VAR_2 = FUNC_0(VAR_0, VAR_1);
  VAR_3 = (VAR_2 & 0xffff) + (VAR_2 >> 16);
  VAR_3 += (VAR_3 >> 16);
  return ~(VAR_3 & 0xffff);
}
