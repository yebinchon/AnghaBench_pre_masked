
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static uint64_t FUNC_2(const uint16_t* VAR_0, const uint16_t* VAR_1,
                                  uint16_t* VAR_2, int VAR_3) {
  uint64_t VAR_4 = 0;
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
    const int VAR_6 = VAR_0[VAR_5] - VAR_1[VAR_5];
    const int VAR_7 = (int)VAR_2[VAR_5] + VAR_6;
    VAR_2[VAR_5] = FUNC_1(VAR_7);
    VAR_4 += (uint64_t)FUNC_0(VAR_6);
  }
  return VAR_4;
}
