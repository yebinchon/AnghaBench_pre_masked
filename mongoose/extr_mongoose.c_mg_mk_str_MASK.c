
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_str {char const* member_0; int len; int member_1; } ;


 int FUNC_0 (char const*) ;

struct mg_str FUNC_1(const char *VAR_0) {
  struct mg_str VAR_1 = {VAR_0, 0};
  if (VAR_0 != ((void*)0)) VAR_1.len = FUNC_0(VAR_0);
  return VAR_1;
}
