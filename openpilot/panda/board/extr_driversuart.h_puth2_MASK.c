
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

void FUNC_1(unsigned int VAR_0) {
  char VAR_1[] = "0123456789abcdef";
  for (int VAR_2 = 4; VAR_2 != -4; VAR_2 -= 4) {
    FUNC_0(VAR_1[(VAR_0 >> (unsigned int)(VAR_2)) & 0xFU]);
  }
}
