
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {int len; char const* p; } ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, struct mg_str *VAR_1) {
  VAR_1->len = FUNC_0(VAR_0);
  VAR_1->p = VAR_0 + 2;
  return VAR_1->p + VAR_1->len;
}
