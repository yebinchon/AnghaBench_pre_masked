
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const uint8_t* VAR_1, uint32_t VAR_2[4]) {
  int VAR_3, VAR_4, VAR_5;
  for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
    uint32_t VAR_6 = 0;
    for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
      for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
        VAR_6 += VAR_1[VAR_4 + VAR_5 * VAR_0];
      }
    }
    VAR_2[VAR_3] = VAR_6;
    VAR_1 += 4;
  }
}
