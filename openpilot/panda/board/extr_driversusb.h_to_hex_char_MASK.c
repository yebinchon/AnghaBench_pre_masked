
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char FUNC_0(int VAR_0) {
  char VAR_1;
  if (VAR_0 < 10) {
    VAR_1 = '0' + VAR_0;
  } else {
    VAR_1 = 'a' + (VAR_0 - 10);
  }
  return VAR_1;
}
