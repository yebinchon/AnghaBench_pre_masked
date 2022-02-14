
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; scalar_t__* p; } ;


 scalar_t__ FUNC_0 (int) ;

struct mg_str FUNC_1(struct mg_str VAR_0) {
  while (VAR_0.len > 0 && FUNC_0((int) *VAR_0.p)) {
    VAR_0.p++;
    VAR_0.len--;
  }
  while (VAR_0.len > 0 && FUNC_0((int) *(VAR_0.p + VAR_0.len - 1))) {
    VAR_0.len--;
  }
  return VAR_0;
}
