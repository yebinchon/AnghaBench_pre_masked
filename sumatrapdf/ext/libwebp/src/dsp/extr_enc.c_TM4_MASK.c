
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t* VAR_2, const uint8_t* VAR_3) {
  int VAR_4, VAR_5;
  const uint8_t* const VAR_6 = VAR_1 + 255 - VAR_3[-1];
  for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
    const uint8_t* const VAR_7 = VAR_6 + VAR_3[-2 - VAR_5];
    for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
      VAR_2[VAR_4] = VAR_7[VAR_3[VAR_4]];
    }
    VAR_2 += VAR_0;
  }
}
