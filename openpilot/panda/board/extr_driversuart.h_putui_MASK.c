
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef unsigned int uint32_t ;


 int FUNC_0 (char*) ;

void FUNC_1(uint32_t VAR_0) {
  uint32_t VAR_1 = VAR_0;
  char VAR_2[11];
  uint8_t VAR_3 = 10;
  VAR_2[VAR_3] = '\0';
  VAR_3--;
  do {
    VAR_2[VAR_3] = (VAR_1 % 10U) + 0x30U;
    VAR_3--;
    VAR_1 /= 10;
  } while (VAR_1 != 0U);
  FUNC_0(&VAR_2[VAR_3 + 1U]);
}
