
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



int FUNC_0(const void * VAR_0, const void * VAR_1, unsigned int VAR_2) {
  int VAR_3 = 0;
  const uint8_t *VAR_4 = VAR_0;
  const uint8_t *VAR_5 = VAR_1;
  for (unsigned int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    if (*VAR_4 != *VAR_5) {
      VAR_3 = -1;
      break;
    }
    VAR_4++;
    VAR_5++;
  }
  return VAR_3;
}
