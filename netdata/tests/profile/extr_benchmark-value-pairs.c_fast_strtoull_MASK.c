
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long long FUNC_0(const char *VAR_0) {
  register unsigned long long VAR_1 = 0;
  register char VAR_2;
  for(VAR_2 = *VAR_0; VAR_2 >= '0' && VAR_2 <= '9' ; VAR_2 = *(++VAR_0)) {
    VAR_1 *= 10;
    VAR_1 += VAR_2 - '0';

  }
  return VAR_1;
}
