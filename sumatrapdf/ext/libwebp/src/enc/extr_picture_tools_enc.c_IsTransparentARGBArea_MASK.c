
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int FUNC_0(const uint32_t* VAR_0, int VAR_1, int VAR_2) {
  int VAR_3, VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
      if (VAR_0[VAR_4] & 0xff000000u) {
        return 0;
      }
    }
    VAR_0 += VAR_1;
  }
  return 1;
}
