
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (int *,scalar_t__ const*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_1(const uint8_t* VAR_0, const uint8_t* VAR_1,
                               uint8_t* VAR_2, int VAR_3) {
  if (VAR_0 == ((void*)0)) {
    FUNC_0(((void*)0), VAR_1, VAR_2, VAR_3);
  } else {
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) VAR_2[VAR_4] = (uint8_t)(VAR_0[VAR_4] + VAR_1[VAR_4]);
  }
}
