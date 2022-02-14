
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static float FUNC_0(const int VAR_0[256], int VAR_1,
                                   double VAR_2) {
  const int VAR_3 = 256 >> 4;
  const double VAR_4 = 0.6;
  double VAR_5 = VAR_1 * VAR_0[0];
  int VAR_6;
  for (VAR_6 = 1; VAR_6 < VAR_3; ++VAR_6) {
    VAR_5 += VAR_2 * (VAR_0[VAR_6] + VAR_0[256 - VAR_6]);
    VAR_2 *= VAR_4;
  }
  return (float)(-0.1 * VAR_5);
}
