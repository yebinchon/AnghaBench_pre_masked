
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {size_t len; int p; } ;


 int FUNC_0 (int ,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

int FUNC_2(const struct mg_str *VAR_0, const char *VAR_1) {
  size_t VAR_2 = FUNC_1(VAR_1), VAR_3 = VAR_0->len;
  int VAR_4 = FUNC_0(VAR_0->p, VAR_1, (VAR_3 < VAR_2) ? VAR_3 : VAR_2);
  if (VAR_4 == 0) {
    return VAR_3 - VAR_2;
  }
  return VAR_4;
}
