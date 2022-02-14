
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {size_t len; } ;


 int FUNC_0 (struct mg_str,struct mg_str) ;

int FUNC_1(const struct mg_str VAR_0, const struct mg_str VAR_1, size_t VAR_2) {
  struct mg_str VAR_3 = VAR_0;
  struct mg_str VAR_4 = VAR_1;

  if (VAR_3 > VAR_2) {
    VAR_3 = VAR_2;
  }
  if (VAR_4 > VAR_2) {
    VAR_4 = VAR_2;
  }
  return FUNC_0(VAR_3, VAR_4);
}
