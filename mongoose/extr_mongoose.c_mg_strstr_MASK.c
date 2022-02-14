
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {scalar_t__ len; char const* p; } ;


 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;

const char *FUNC_1(const struct mg_str VAR_0,
                      const struct mg_str VAR_1) {
  size_t VAR_2;
  if (VAR_1.len > VAR_0.len) return ((void*)0);
  for (VAR_2 = 0; VAR_2 <= VAR_0.len - VAR_1.len; VAR_2++) {
    if (FUNC_0(VAR_0.p + VAR_2, VAR_1.p, VAR_1.len) == 0) {
      return VAR_0.p + VAR_2;
    }
  }
  return ((void*)0);
}
