
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(const int16_t* VAR_0, const int16_t* VAR_1, int VAR_2,
                                const uint16_t* VAR_3, uint16_t* VAR_4) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5, ++VAR_0, ++VAR_1) {
    const int VAR_6 = (VAR_0[0] * 9 + VAR_0[1] * 3 + VAR_1[0] * 3 + VAR_1[1] + 8) >> 4;
    const int VAR_7 = (VAR_0[1] * 9 + VAR_0[0] * 3 + VAR_1[1] * 3 + VAR_1[0] + 8) >> 4;
    VAR_4[2 * VAR_5 + 0] = FUNC_0(VAR_3[2 * VAR_5 + 0] + VAR_6);
    VAR_4[2 * VAR_5 + 1] = FUNC_0(VAR_3[2 * VAR_5 + 1] + VAR_7);
  }
}
