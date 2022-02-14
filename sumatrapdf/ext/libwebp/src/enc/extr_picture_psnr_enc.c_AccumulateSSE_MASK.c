
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static double FUNC_1(const uint8_t* VAR_0, int VAR_1,
                            const uint8_t* VAR_2, int VAR_3,
                            int VAR_4, int VAR_5) {
  int VAR_6;
  double VAR_7 = 0.;
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
    VAR_7 += FUNC_0(VAR_0, VAR_2, VAR_4);
    VAR_0 += VAR_1;
    VAR_2 += VAR_3;
  }
  return VAR_7;
}
