
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1) {
 const char *VAR_2 = VAR_0;
 if (VAR_1 < 1) {
  VAR_1 = 0;
 }
 while (VAR_2 && VAR_1--) {
  const char *VAR_3 = FUNC_0 (VAR_2 + 1, ',');
  if (!VAR_3) {
   return FUNC_1 (VAR_0);
  }
  VAR_2 = VAR_3;
 }
 if (!VAR_2 && VAR_1 > 0) {
  return FUNC_1 (VAR_0);
 }
 return (size_t)(VAR_2 - VAR_0);
}
