
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_0, const char *VAR_1) {
 bool VAR_2 = *VAR_1 == '^';
 bool VAR_3 = FUNC_0 (VAR_1) == '$';
 if (VAR_2 && VAR_3) {
  return FUNC_1 (VAR_0) == FUNC_1 (VAR_1) - 2 && !FUNC_2 (VAR_0, VAR_1 + 1, FUNC_1 (VAR_1) - 2);

 }
 if (VAR_2) {
  return !FUNC_2 (VAR_0, VAR_1 + 1, FUNC_1 (VAR_1) - 1);
 }
 if (VAR_3) {
  int VAR_4 = FUNC_1 (VAR_0);
  int VAR_5 = FUNC_1 (VAR_1) - 1;
  if (VAR_4 <= VAR_5) {
   return 0;
  }
  const char *VAR_6 = VAR_0 + FUNC_1 (VAR_0) - VAR_5;
  return (!FUNC_2 (VAR_6, VAR_1, VAR_5));
 }
 return FUNC_3 (VAR_0, VAR_1);
}
