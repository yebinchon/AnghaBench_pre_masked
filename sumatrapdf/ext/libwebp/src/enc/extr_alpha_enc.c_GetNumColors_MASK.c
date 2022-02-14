
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t* VAR_0, int VAR_1, int VAR_2,
                        int VAR_3) {
  int VAR_4;
  int VAR_5 = 0;
  uint8_t VAR_6[256] = { 0 };

  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
    int VAR_7;
    const uint8_t* const VAR_8 = VAR_0 + VAR_4 * VAR_3;
    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
      VAR_6[VAR_8[VAR_7]] = 1;
    }
  }
  for (VAR_4 = 0; VAR_4 < 256; ++VAR_4) {
    if (VAR_6[VAR_4] > 0) ++VAR_5;
  }
  return VAR_5;
}
