
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1, int VAR_2) {
 if (VAR_0[VAR_1] > '9' || VAR_0[VAR_1] < '1') {
  return 0;
 }
 if (VAR_0[VAR_1 + 1] != '\x00' && VAR_0[VAR_1 + 1] <= '9' && VAR_0[VAR_1 + 1] >= '1') {
  return 0;
 }
 if ((int)((int)VAR_0[VAR_1] - 0x30) > VAR_2) {
  return 0;
 }
 return 1;
}
