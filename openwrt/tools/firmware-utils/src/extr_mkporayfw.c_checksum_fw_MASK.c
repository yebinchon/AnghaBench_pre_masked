
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;



__attribute__((used)) static uint16_t FUNC_0(uint8_t *VAR_0, int VAR_1)
{
 int VAR_2;
 int32_t VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1 - 1; VAR_2 += 2) {
  VAR_3 += (VAR_0[VAR_2 + 1] << 8) | VAR_0[VAR_2];
 }
 if (VAR_2 < VAR_1) {
  VAR_3 += VAR_0[VAR_2];
 }
 VAR_3 = VAR_3 + (VAR_3 >> 16) + 0xffff;
 VAR_3 = ~(VAR_3 + (VAR_3 >> 16)) & 0xffff;
 return (uint16_t) VAR_3;
}
