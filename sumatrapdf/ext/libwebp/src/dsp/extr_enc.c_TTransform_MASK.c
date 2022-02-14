
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int const FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(const uint8_t* VAR_1, const uint16_t* VAR_2) {
  int VAR_3 = 0;
  int VAR_4[16];
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < 4; ++VAR_5, VAR_1 += VAR_0) {
    const int VAR_6 = VAR_1[0] + VAR_1[2];
    const int VAR_7 = VAR_1[1] + VAR_1[3];
    const int VAR_8 = VAR_1[1] - VAR_1[3];
    const int VAR_9 = VAR_1[0] - VAR_1[2];
    VAR_4[0 + VAR_5 * 4] = VAR_6 + VAR_7;
    VAR_4[1 + VAR_5 * 4] = VAR_9 + VAR_8;
    VAR_4[2 + VAR_5 * 4] = VAR_9 - VAR_8;
    VAR_4[3 + VAR_5 * 4] = VAR_6 - VAR_7;
  }

  for (VAR_5 = 0; VAR_5 < 4; ++VAR_5, ++VAR_2) {
    const int VAR_10 = VAR_4[0 + VAR_5] + VAR_4[8 + VAR_5];
    const int VAR_11 = VAR_4[4 + VAR_5] + VAR_4[12+ VAR_5];
    const int VAR_12 = VAR_4[4 + VAR_5] - VAR_4[12+ VAR_5];
    const int VAR_13 = VAR_4[0 + VAR_5] - VAR_4[8 + VAR_5];
    const int VAR_14 = VAR_10 + VAR_11;
    const int VAR_15 = VAR_13 + VAR_12;
    const int VAR_16 = VAR_13 - VAR_12;
    const int VAR_17 = VAR_10 - VAR_11;

    VAR_3 += VAR_2[ 0] * FUNC_0(VAR_14);
    VAR_3 += VAR_2[ 4] * FUNC_0(VAR_15);
    VAR_3 += VAR_2[ 8] * FUNC_0(VAR_16);
    VAR_3 += VAR_2[12] * FUNC_0(VAR_17);
  }
  return VAR_3;
}
