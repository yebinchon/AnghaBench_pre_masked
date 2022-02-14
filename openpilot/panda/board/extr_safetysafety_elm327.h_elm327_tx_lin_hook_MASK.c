
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0(int VAR_0, uint8_t *VAR_1, int VAR_2) {
  int VAR_3 = 1;
  if (VAR_0 != 0) {
    VAR_3 = 0;
  }
  if ((VAR_2 < 5) || (VAR_2 > 11)) {
    VAR_3 = 0;
  }
  if (!(((VAR_1[0] & 0xF8U) == 0xC0U) && ((VAR_1[0] & 0x07U) != 0U) &&
        (VAR_1[1] == 0x33U) && (VAR_1[2] == 0xF1U))) {
    VAR_3 = 0;
  }
  return VAR_3;
}
