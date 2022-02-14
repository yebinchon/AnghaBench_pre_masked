
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef unsigned int uint16_t ;


 scalar_t__ FUNC_0 (int ) ;

void *FUNC_1(void *VAR_0, uint16_t VAR_1) {
  uint32_t *VAR_2 = (uint32_t *)VAR_0;
  uint32_t VAR_3 = (VAR_1 + 3U) / 4U;

  for (uint32_t VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
    *VAR_2 = FUNC_0(0);
    VAR_2++;
  }
  return ((void *)VAR_2);
}
