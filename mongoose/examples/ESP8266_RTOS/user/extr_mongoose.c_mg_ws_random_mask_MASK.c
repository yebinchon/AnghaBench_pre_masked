
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static uint32_t FUNC_1(void) {
  uint32_t VAR_0;
  if (sizeof(long) >= 4) {
    VAR_0 = (uint32_t) FUNC_0();
  } else if (sizeof(long) == 2) {
    VAR_0 = (uint32_t) FUNC_0() << 16 | (uint32_t) FUNC_0();
  }

  return VAR_0;
}
