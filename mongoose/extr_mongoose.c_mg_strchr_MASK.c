
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {size_t len; int* p; } ;



const char *FUNC_0(const struct mg_str VAR_0, int VAR_1) {
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0.len; VAR_2++) {
    if (VAR_0.p[VAR_2] == VAR_1) return &VAR_0.p[VAR_2];
  }
  return ((void*)0);
}
