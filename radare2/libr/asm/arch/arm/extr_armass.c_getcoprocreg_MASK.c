
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0) {
 char *VAR_1;

 if (!VAR_0 || !*VAR_0) {
  return -1;
 }
 if (FUNC_0 (VAR_0, "c")) {
  int VAR_2 = FUNC_1 (VAR_0 + 1, &VAR_1, 10);
  if ((VAR_1[0] != '\0') || (VAR_0[1] == '\0')) {
   return -1;
  }
  if (VAR_2 < 16 && VAR_2 >= 0) {
   return VAR_2;
  }
 }
 return -1;
}
