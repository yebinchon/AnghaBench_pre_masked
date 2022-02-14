
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char const*) ;
 int VAR_0 ;

int FUNC_2 (char VAR_1, const char* VAR_2) {
  char VAR_3[2];
  int VAR_4;

  VAR_3[0] = 0xFF;
  if (VAR_1 < 10) {
    VAR_3[1] = '0' + VAR_1;
  } else if (VAR_1 < 16) {
    VAR_3[1] = 'A' + (VAR_1 - 0x0A);
  } else {
    return -1;
  }
  FUNC_0(0, VAR_3, 2);
  VAR_4 = FUNC_1(0, VAR_2);
  if (VAR_1 < 10) {
    VAR_3[1] = '0' + VAR_0;
  } else if (VAR_1 < 16) {
    VAR_3[1] = 'A' + (VAR_0 - 0x0A);
  }
  FUNC_0(0, VAR_3, 2);
  return VAR_4;
}
