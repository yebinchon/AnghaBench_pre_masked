
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static float FUNC_1(const int VAR_0[256], const int VAR_1[256]) {
  int VAR_2;
  double VAR_3 = 0.;
  int VAR_4 = 0, VAR_5 = 0;
  for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) {
    const int VAR_6 = VAR_0[VAR_2];
    if (VAR_6 != 0) {
      const int VAR_7 = VAR_6 + VAR_1[VAR_2];
      VAR_4 += VAR_6;
      VAR_3 -= FUNC_0(VAR_6);
      VAR_5 += VAR_7;
      VAR_3 -= FUNC_0(VAR_7);
    } else if (VAR_1[VAR_2] != 0) {
      VAR_5 += VAR_1[VAR_2];
      VAR_3 -= FUNC_0(VAR_1[VAR_2]);
    }
  }
  VAR_3 += FUNC_0(VAR_4) + FUNC_0(VAR_5);
  return (float)VAR_3;
}
