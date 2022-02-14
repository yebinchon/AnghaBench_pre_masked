
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int) ;

void FUNC_1(const uint8_t *VAR_0, uint32_t VAR_1,
      uint32_t VAR_2, uint32_t VAR_3, uint8_t *VAR_4,
      uint32_t VAR_5, bool VAR_6)
{
 uint32_t VAR_7 = FUNC_0(VAR_1, VAR_5) / 2;
 uint32_t VAR_8;

 register const uint32_t *VAR_9;
 register const uint32_t *VAR_10;
 register uint32_t *VAR_11;

 if (VAR_6) {
  for (VAR_8 = VAR_2; VAR_8 < VAR_3; VAR_8++) {
   VAR_9 = (const uint32_t *)(VAR_0 + VAR_8 * VAR_1);
   VAR_10 = VAR_9 + VAR_7;
   VAR_11 = (uint32_t *)(VAR_4 + VAR_8 * VAR_5);

   while (VAR_9 < VAR_10) {
    register uint32_t VAR_12 = *VAR_9;

    VAR_11[0] = VAR_12;
    VAR_12 &= 0xFFFFFF00;
    VAR_12 |= (uint8_t)(VAR_12 >> 16);
    VAR_11[1] = VAR_12;

    VAR_11 += 2;
    VAR_9++;
   }
  }
 } else {
  for (VAR_8 = VAR_2; VAR_8 < VAR_3; VAR_8++) {
   VAR_9 = (const uint32_t *)(VAR_0 + VAR_8 * VAR_1);
   VAR_10 = VAR_9 + VAR_7;
   VAR_11 = (uint32_t *)(VAR_4 + VAR_8 * VAR_5);

   while (VAR_9 < VAR_10) {
    register uint32_t VAR_13 = *VAR_9;

    VAR_11[0] = VAR_13;
    VAR_13 &= 0xFFFF00FF;
    VAR_13 |= (VAR_13 >> 16) & 0xFF00;
    VAR_11[1] = VAR_13;

    VAR_11 += 2;
    VAR_9++;
   }
  }
 }
}
