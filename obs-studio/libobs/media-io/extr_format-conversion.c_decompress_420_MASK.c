
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



void FUNC_0(const uint8_t *const VAR_0[], const uint32_t VAR_1[],
      uint32_t VAR_2, uint32_t VAR_3, uint8_t *VAR_4,
      uint32_t VAR_5)
{
 uint32_t VAR_6 = VAR_2 / 2;
 uint32_t VAR_7 = VAR_1[0] / 2;
 uint32_t VAR_8 = VAR_3 / 2;
 uint32_t VAR_9;

 for (VAR_9 = VAR_6; VAR_9 < VAR_8; VAR_9++) {
  const uint8_t *VAR_10 = VAR_0[1] + VAR_9 * VAR_1[1];
  const uint8_t *VAR_11 = VAR_0[2] + VAR_9 * VAR_1[2];
  register const uint8_t *VAR_12, *VAR_13;
  register uint32_t *VAR_14, *VAR_15;
  uint32_t VAR_16;

  VAR_12 = VAR_0[0] + VAR_9 * 2 * VAR_1[0];
  VAR_13 = VAR_12 + VAR_1[0];
  VAR_14 = (uint32_t *)(VAR_4 + VAR_9 * 2 * VAR_5);
  VAR_15 = (uint32_t *)((uint8_t *)VAR_14 + VAR_5);

  for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
   uint32_t VAR_17;
   VAR_17 = (*(VAR_10++) << 8) | *(VAR_11++);

   *(VAR_14++) = (*(VAR_12++) << 16) | VAR_17;
   *(VAR_14++) = (*(VAR_12++) << 16) | VAR_17;

   *(VAR_15++) = (*(VAR_13++) << 16) | VAR_17;
   *(VAR_15++) = (*(VAR_13++) << 16) | VAR_17;
  }
 }
}
