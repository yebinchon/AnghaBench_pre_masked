
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char,char const*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(char *VAR_0, const char *VAR_1) {
 char *VAR_2;
 do {
  VAR_2 = (char *)FUNC_1 (VAR_0, '~', VAR_1);
  if (!VAR_2) {
   break;
  }
  if (VAR_2 == VAR_0 || *(VAR_2 - 1) != '\\') {
   return (char*)VAR_2;
  }

  FUNC_0 (VAR_2 - 1, VAR_2, FUNC_2(VAR_2) + 1);
  VAR_0 = VAR_2 + 1;
 } while (*VAR_0);
 return ((void*)0);
}
