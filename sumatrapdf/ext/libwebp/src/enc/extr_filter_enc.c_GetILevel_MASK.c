
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1) {
  if (VAR_0 > 0) {
    if (VAR_0 > 4) {
      VAR_1 >>= 2;
    } else {
      VAR_1 >>= 1;
    }
    if (VAR_1 > 9 - VAR_0) {
      VAR_1 = 9 - VAR_0;
    }
  }
  if (VAR_1 < 1) VAR_1 = 1;
  return VAR_1;
}
