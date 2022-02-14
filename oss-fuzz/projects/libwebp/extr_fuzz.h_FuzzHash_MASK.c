
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



uint8_t FUNC_0(const uint8_t* const VAR_0, size_t VAR_1) {
  uint8_t VAR_2 = 0;
  size_t VAR_3 = VAR_1 / 128;
  if (!VAR_3) VAR_3 = 1;
  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4 += VAR_3) VAR_2 += VAR_0[VAR_4];
  return VAR_2;
}
