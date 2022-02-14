
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char const* p; } ;


 int FUNC_0 (char const*) ;
 struct mg_str FUNC_1 (int ,struct mg_str*,struct mg_str*) ;

const char *FUNC_2(const char *VAR_0, struct mg_str *VAR_1,
                                     struct mg_str *VAR_2) {
  struct mg_str VAR_3 = FUNC_1(FUNC_0(VAR_0), VAR_1, VAR_2);
  return VAR_3.p;
}
