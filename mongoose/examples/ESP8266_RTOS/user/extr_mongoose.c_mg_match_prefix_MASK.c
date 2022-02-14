
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char const* member_0; size_t member_1; int len; } ;


 size_t FUNC_0 (struct mg_str const,struct mg_str) ;
 int FUNC_1 (char const*) ;

size_t FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2) {
  const struct mg_str VAR_3 = {VAR_0, (size_t) VAR_1};
  struct mg_str VAR_4 = {VAR_2, 0};
  if (VAR_2 != ((void*)0)) VAR_4.len = FUNC_1(VAR_2);
  return FUNC_0(VAR_3, VAR_4);
}
