
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int,int const) ;

__attribute__((used)) static void FUNC_2(uint8_t* VAR_0, int VAR_1,
                                 int VAR_2, int VAR_3, int VAR_4) {
  while (VAR_3-- > 0) {
    uint8_t* const VAR_5 = VAR_0 + (VAR_1 ? 1 : 0);
    const uint8_t* const VAR_6 = VAR_0 + (VAR_1 ? 0 : 3);
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
      const uint32_t VAR_8 = VAR_6[4 * VAR_7];
      if (VAR_8 != 0xff) {
        const uint32_t VAR_9 = FUNC_0(VAR_8);
        VAR_5[4 * VAR_7 + 0] = FUNC_1(VAR_5[4 * VAR_7 + 0], VAR_9);
        VAR_5[4 * VAR_7 + 1] = FUNC_1(VAR_5[4 * VAR_7 + 1], VAR_9);
        VAR_5[4 * VAR_7 + 2] = FUNC_1(VAR_5[4 * VAR_7 + 2], VAR_9);
      }
    }
    VAR_0 += VAR_4;
  }
}
