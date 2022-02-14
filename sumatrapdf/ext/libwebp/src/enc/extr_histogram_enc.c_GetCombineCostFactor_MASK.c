
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static double FUNC_0(int VAR_0, int VAR_1) {
  double VAR_2 = 0.16;
  if (VAR_1 < 90) {
    if (VAR_0 > 256) VAR_2 /= 2.;
    if (VAR_0 > 512) VAR_2 /= 2.;
    if (VAR_0 > 1024) VAR_2 /= 2.;
    if (VAR_1 <= 50) VAR_2 /= 2.;
  }
  return VAR_2;
}
