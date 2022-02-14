
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const* const,int const* const,int const* const) ;

__attribute__((used)) static int FUNC_1(const uint8_t* const VAR_1, const uint8_t* const VAR_2,
                        const uint16_t* const VAR_3) {
  int VAR_4 = 0;
  int VAR_5, VAR_6;
  for (VAR_6 = 0; VAR_6 < 16 * VAR_0; VAR_6 += 4 * VAR_0) {
    for (VAR_5 = 0; VAR_5 < 16; VAR_5 += 4) {
      VAR_4 += FUNC_0(VAR_1 + VAR_5 + VAR_6, VAR_2 + VAR_5 + VAR_6, VAR_3);
    }
  }
  return VAR_4;
}
