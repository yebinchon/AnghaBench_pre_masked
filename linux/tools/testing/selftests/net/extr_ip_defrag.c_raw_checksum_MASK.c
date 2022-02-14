
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ u_int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static uint32_t FUNC_1(uint8_t *VAR_0, int VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < (VAR_1 & ~1U); VAR_3 += 2) {
  VAR_2 += (u_int16_t)FUNC_0(*((u_int16_t *)(VAR_0 + VAR_3)));
  if (VAR_2 > 0xffff)
   VAR_2 -= 0xffff;
 }

 if (VAR_3 < VAR_1) {
  VAR_2 += VAR_0[VAR_3] << 8;
  if (VAR_2 > 0xffff)
   VAR_2 -= 0xffff;
 }

 return VAR_2;
}
