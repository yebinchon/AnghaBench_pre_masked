
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef scalar_t__ uint32_t ;


 char FUNC_0 () ;

uint32_t FUNC_1(void *VAR_0, uint32_t VAR_1) {
  uint8_t VAR_2;
  uint32_t VAR_3 = 0;
  uint8_t *VAR_4 = (uint8_t *) VAR_0;
  do {
    VAR_2 = FUNC_0();
  } while (VAR_2 != '\xc0');
  while (VAR_3 < VAR_1) {
    VAR_2 = FUNC_0();
    if (VAR_2 == '\xc0') return VAR_3;
    if (VAR_2 == '\xdb') {
      VAR_2 = FUNC_0();
      if (VAR_2 == '\xdc') {
        VAR_2 = '\xc0';
      } else if (VAR_2 == '\xdd') {
        VAR_2 = '\xdb';
      } else {
        VAR_3 = 0;
        break;
      }
    }
    *VAR_4++ = VAR_2;
    VAR_3++;
  }
  do {
    VAR_2 = FUNC_0();
  } while (VAR_2 != '\xc0');
  return VAR_3;
}
