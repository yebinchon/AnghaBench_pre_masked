
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(const char **VAR_0) {
 *VAR_0 = FUNC_0 (*VAR_0);
 if (**VAR_0 != ',') {
  FUNC_1 ("`,' expected. Remainder of line: %s\n", *VAR_0);
  return;
 }
 *VAR_0 = FUNC_0 ((*VAR_0) + 1);
}
