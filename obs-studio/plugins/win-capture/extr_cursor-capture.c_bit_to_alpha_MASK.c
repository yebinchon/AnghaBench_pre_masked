
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline uint8_t FUNC_0(uint8_t *VAR_0, long VAR_1, bool VAR_2)
{
 uint8_t VAR_3 = VAR_0[VAR_1 / 8];
 bool VAR_4 = (VAR_3 >> (7 - VAR_1 % 8) & 1) != 0;

 if (VAR_2) {
  return VAR_4 ? 0xFF : 0;
 } else {
  return VAR_4 ? 0 : 0xFF;
 }
}
