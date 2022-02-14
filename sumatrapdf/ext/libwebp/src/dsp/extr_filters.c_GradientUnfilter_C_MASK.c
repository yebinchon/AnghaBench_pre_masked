
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ const FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__ const*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_2(const uint8_t* VAR_0, const uint8_t* VAR_1,
                               uint8_t* VAR_2, int VAR_3) {
  if (VAR_0 == ((void*)0)) {
    FUNC_1(((void*)0), VAR_1, VAR_2, VAR_3);
  } else {
    uint8_t VAR_4 = VAR_0[0], VAR_5 = VAR_4, VAR_6 = VAR_4;
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
      VAR_4 = VAR_0[VAR_7];
      VAR_6 = (uint8_t)(VAR_1[VAR_7] + FUNC_0(VAR_6, VAR_4, VAR_5));
      VAR_5 = VAR_4;
      VAR_2[VAR_7] = VAR_6;
    }
  }
}
