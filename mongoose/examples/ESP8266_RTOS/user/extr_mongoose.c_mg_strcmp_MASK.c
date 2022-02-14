
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {size_t len; scalar_t__* p; } ;



int FUNC_0(const struct mg_str VAR_0, const struct mg_str VAR_1) {
  size_t VAR_2 = 0;
  while (VAR_2 < VAR_0 && VAR_2 < VAR_1) {
    if (VAR_0[VAR_2] < VAR_1[VAR_2]) return -1;
    if (VAR_0[VAR_2] > VAR_1[VAR_2]) return 1;
    VAR_2++;
  }
  if (VAR_2 < VAR_0) return 1;
  if (VAR_2 < VAR_1) return -1;
  return 0;
}
