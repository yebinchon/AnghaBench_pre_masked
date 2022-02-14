
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 double const FUNC_0 (scalar_t__ const) ;
 int FUNC_1 (double*,int ,int) ;

__attribute__((used)) static void FUNC_2(
    int VAR_0, const uint32_t VAR_1[], double VAR_2[]) {
  uint32_t VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
    VAR_3 += VAR_1[VAR_5];
    if (VAR_1[VAR_5] > 0) {
      ++VAR_4;
    }
  }
  if (VAR_4 <= 1) {
    FUNC_1(VAR_2, 0, VAR_0 * sizeof(*VAR_2));
  } else {
    const double VAR_6 = FUNC_0(VAR_3);
    for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
      VAR_2[VAR_5] = VAR_6 - FUNC_0(VAR_1[VAR_5]);
    }
  }
}
