
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, char *VAR_1) {
 const char *VAR_2 = VAR_0;
 if (!VAR_0) {
  return 0;
 }
 while (VAR_0 && *VAR_0 && *VAR_0 != '\n' && ! FUNC_0 (VAR_0)) {
  VAR_0++;
 }
 if (VAR_1) {
  *VAR_1 = *VAR_0;
 }
 return VAR_0 - VAR_2;
}
