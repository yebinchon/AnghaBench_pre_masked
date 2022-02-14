
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LCID ;



__attribute__((used)) static LCID FUNC_0(const char* VAR_0) {
  unsigned long VAR_1 = 0;
  int VAR_2;
  while (*VAR_0) {
    VAR_1 <<= 4;
    VAR_2 = (*VAR_0 >= '0' && *VAR_0 <= '9') ? *VAR_0 - '0':
            (*VAR_0 >= 'A' && *VAR_0 <= 'F') ? (*VAR_0 - 'A') + 10
                                               : (*VAR_0 - 'a') + 10;
    VAR_1 += VAR_2;
    ++VAR_0;
  }
  return (LCID)VAR_1;
}
