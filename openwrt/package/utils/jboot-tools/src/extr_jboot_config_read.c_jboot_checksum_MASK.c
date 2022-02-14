
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(uint16_t VAR_0, uint16_t *VAR_1, int VAR_2)
{
 uint32_t VAR_3 = VAR_0;
 uint16_t *VAR_4 = VAR_1;

 while (VAR_2 > 1) {
  VAR_3 += *VAR_4;
  ++VAR_4;
  while (VAR_3 >> 16)
   VAR_3 = (uint16_t) VAR_3 + (VAR_3 >> 16);
  VAR_2 -= 2;
 }
 if (VAR_2 > 0) {
  VAR_3 += *(uint8_t *) VAR_4;
  VAR_3 -= 0xFF;
 }
 while (VAR_3 >> 16)
  VAR_3 = (uint16_t) VAR_3 + (VAR_3 >> 16);
 return VAR_3;
}
