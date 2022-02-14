
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

const char *FUNC_2(const char *VAR_0, const char *VAR_1, size_t VAR_2) {
  size_t VAR_3 = FUNC_0(VAR_1);
  size_t VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
    if (VAR_4 + VAR_3 > VAR_2) {
      return ((void*)0);
    }

    if (FUNC_1(&VAR_0[VAR_4], VAR_1, VAR_3) == 0) {
      return &VAR_0[VAR_4];
    }
  }

  return ((void*)0);
}
