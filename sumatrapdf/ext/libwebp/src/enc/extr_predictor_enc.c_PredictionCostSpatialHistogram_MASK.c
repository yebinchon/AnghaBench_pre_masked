
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int const*,int,double const) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;

__attribute__((used)) static float FUNC_2(const int VAR_0[4][256],
                                            const int VAR_1[4][256]) {
  int VAR_2;
  double VAR_3 = 0;
  for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
    const double VAR_4 = 0.94;
    VAR_3 += FUNC_0(VAR_1[VAR_2], 1, VAR_4);
    VAR_3 += FUNC_1(VAR_1[VAR_2], VAR_0[VAR_2]);
  }
  return (float)VAR_3;
}
