
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int const) ;

__attribute__((used)) static void FUNC_1(uint32_t* const VAR_0,
                                    const uint32_t* const VAR_1, int VAR_2) {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
    const uint8_t VAR_4 = (VAR_0[VAR_3] >> 24) & 0xff;
    if (VAR_4 != 0xff) {
      VAR_0[VAR_3] = FUNC_0(VAR_0[VAR_3], VAR_1[VAR_3]);
    }
  }
}
