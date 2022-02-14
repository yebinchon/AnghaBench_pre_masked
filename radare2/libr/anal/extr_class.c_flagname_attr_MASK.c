
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0, const char *VAR_1, const char *VAR_2) {
 char *VAR_3 = FUNC_1 (VAR_1);
 if (!VAR_3) {
  return ((void*)0);
 }
 char *VAR_4 = FUNC_1 (VAR_2);
 if (!VAR_4) {
  FUNC_0 (VAR_3);
  return ((void*)0);
 }
 char *VAR_5 = FUNC_2 ("%s.%s.%s", VAR_0, VAR_1, VAR_2);
 FUNC_0 (VAR_3);
 FUNC_0 (VAR_4);
 return VAR_5;
}
