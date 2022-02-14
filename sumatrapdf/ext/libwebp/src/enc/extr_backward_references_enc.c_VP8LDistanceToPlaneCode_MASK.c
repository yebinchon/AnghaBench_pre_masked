
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

int FUNC_0(int VAR_1, int VAR_2) {
  const int VAR_3 = VAR_2 / VAR_1;
  const int VAR_4 = VAR_2 - VAR_3 * VAR_1;
  if (VAR_4 <= 8 && VAR_3 < 8) {
    return VAR_0[VAR_3 * 16 + 8 - VAR_4] + 1;
  } else if (VAR_4 > VAR_1 - 8 && VAR_3 < 7) {
    return VAR_0[(VAR_3 + 1) * 16 + 8 + (VAR_1 - VAR_4)] + 1;
  }
  return VAR_2 + 120;
}
