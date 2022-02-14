
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char VAR_0[7][7]) {
  for (int VAR_1 = 0; VAR_1 < 7; VAR_1++) {
    for (int VAR_2 = 0; VAR_2 < 7; VAR_2++) {
      if (VAR_0[VAR_1][VAR_2])
        return VAR_1;
    }
  }
  return 0;
}
