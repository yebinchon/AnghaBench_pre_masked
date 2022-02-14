
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; } ;


 struct mg_str FUNC_0 (struct mg_str*) ;
 scalar_t__ FUNC_1 (struct mg_str,struct mg_str) ;
 scalar_t__ FUNC_2 (struct mg_str*,char*) ;

int FUNC_3(struct mg_str VAR_0, struct mg_str VAR_1) {
  struct mg_str VAR_2, VAR_3;
  if (VAR_0.len == 0) return 0;
  while (1) {
    VAR_2 = FUNC_0(&VAR_0);
    VAR_3 = FUNC_0(&VAR_1);
    if (VAR_2.len == 0) {
      if (VAR_3.len != 0) return 0;
      if (VAR_0.len == 0) break;
      continue;
    }
    if (FUNC_2(&VAR_2, "+") == 0) {
      if (VAR_3.len == 0 && VAR_1.len == 0) return 0;
      continue;
    }
    if (FUNC_2(&VAR_2, "#") == 0) {

      return (VAR_0.len == 0);
    }
    if (FUNC_1(VAR_2, VAR_3) != 0) {
      return 0;
    }
  }
  return (VAR_3.len == 0 && VAR_1.len == 0);
}
