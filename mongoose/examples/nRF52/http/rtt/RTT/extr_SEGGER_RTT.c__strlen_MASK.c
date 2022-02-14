
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char* VAR_0) {
  int VAR_1;

  VAR_1 = 0;
  if (VAR_0 == ((void*)0)) {
    return 0;
  }
  do {
    if (*VAR_0 == 0) {
      break;
    }
    VAR_1++;
    VAR_0++;
  } while (1);
  return VAR_1;
}
