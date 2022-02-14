
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 char VAR_0 ;

void FUNC_1 (char VAR_1) {
  char VAR_2[2];

  VAR_2[0] = 0xFF;
  if (VAR_1 < 10) {
    VAR_2[1] = '0' + VAR_1;
  } else if (VAR_1 < 16) {
    VAR_2[1] = 'A' + (VAR_1 - 0x0A);
  } else {
    return;
  }
  VAR_0 = VAR_1;
  FUNC_0(0, VAR_2, 2);
}
