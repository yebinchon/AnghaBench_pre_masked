
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void FUNC_0(char *VAR_1) {

  char *VAR_2 = VAR_1;
  char VAR_3 = 0;
  char VAR_4 = 0;

  if (*VAR_2) {
    for (; *VAR_2; ++VAR_2) {
      if (*VAR_2 > '0' && *VAR_2 <= '9') {
        if (!VAR_3) {
          *VAR_1 = *VAR_2 - '0';
          VAR_3 = 1;
        }
        else {

          *VAR_1 = *VAR_1 * 10 + *VAR_2 - '0';
        }
      }
      else if (*VAR_2 == '0') {
        if (!VAR_3) {
          VAR_4 = 1;
        }
        else

          *VAR_1 *= 10;
      }
      else if (*VAR_2 == ';') {

        VAR_3 = 0;
        ++VAR_1;
      }

    }

    if (!VAR_4)
      *VAR_1++ = VAR_0;
    *VAR_1 = 0;
  }
}
