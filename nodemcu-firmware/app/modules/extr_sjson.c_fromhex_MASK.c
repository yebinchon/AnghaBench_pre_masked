
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char VAR_0) {
  if (VAR_0 <= '9') {
    return VAR_0 & 0xf;
  }

  return ((VAR_0 - 'A' + 10) & 0xf);
}
