
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const uint8_t* VAR_1, const uint8_t* VAR_2, int16_t* VAR_3) {
  int VAR_4;
  int VAR_5[16];
  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4, VAR_1 += VAR_0, VAR_2 += VAR_0) {
    const int VAR_6 = VAR_1[0] - VAR_2[0];
    const int VAR_7 = VAR_1[1] - VAR_2[1];
    const int VAR_8 = VAR_1[2] - VAR_2[2];
    const int VAR_9 = VAR_1[3] - VAR_2[3];
    const int VAR_10 = (VAR_6 + VAR_9);
    const int VAR_11 = (VAR_7 + VAR_8);
    const int VAR_12 = (VAR_7 - VAR_8);
    const int VAR_13 = (VAR_6 - VAR_9);
    VAR_5[0 + VAR_4 * 4] = (VAR_10 + VAR_11) * 8;
    VAR_5[1 + VAR_4 * 4] = (VAR_12 * 2217 + VAR_13 * 5352 + 1812) >> 9;
    VAR_5[2 + VAR_4 * 4] = (VAR_10 - VAR_11) * 8;
    VAR_5[3 + VAR_4 * 4] = (VAR_13 * 2217 - VAR_12 * 5352 + 937) >> 9;
  }
  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
    const int VAR_14 = (VAR_5[0 + VAR_4] + VAR_5[12 + VAR_4]);
    const int VAR_15 = (VAR_5[4 + VAR_4] + VAR_5[ 8 + VAR_4]);
    const int VAR_16 = (VAR_5[4 + VAR_4] - VAR_5[ 8 + VAR_4]);
    const int VAR_17 = (VAR_5[0 + VAR_4] - VAR_5[12 + VAR_4]);
    VAR_3[0 + VAR_4] = (VAR_14 + VAR_15 + 7) >> 4;
    VAR_3[4 + VAR_4] = ((VAR_16 * 2217 + VAR_17 * 5352 + 12000) >> 16) + (VAR_17 != 0);
    VAR_3[8 + VAR_4] = (VAR_14 - VAR_15 + 7) >> 4;
    VAR_3[12+ VAR_4] = ((VAR_17 * 2217 - VAR_16 * 5352 + 51000) >> 16);
  }
}
