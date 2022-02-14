
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static uint8_t FUNC_0(uint16_t VAR_0)
{
 uint8_t VAR_1 = 0;
 uint8_t VAR_2;

 if (VAR_0 >= 0xfc0) {
  VAR_2 = 0xff;
 } else {
  while (VAR_0 > 0x3F) {
   VAR_0 = VAR_0 / 4;
   VAR_1 += 1;
  }
  VAR_2 = (uint8_t) (VAR_0 + (VAR_1 * 64));
 }

 return VAR_2;
}
