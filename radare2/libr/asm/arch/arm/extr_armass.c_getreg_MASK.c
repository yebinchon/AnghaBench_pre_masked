
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0) {
 int VAR_1;
 char *VAR_2;
 const char *VAR_3[] = { "sl", "fp", "ip", "sp", "lr", "pc", ((void*)0) };
 if (!VAR_0 || !*VAR_0) {
  return -1;
 }
 if (*VAR_0 == 'r') {
  int VAR_4 = FUNC_1 (VAR_0 + 1, &VAR_2, 10);
  if ((VAR_2[0] != '\0') || (VAR_0[1] == '\0')) {
   return -1;
  }
  if (VAR_4 < 16 && VAR_4 >= 0) {
   return VAR_4;
  }
 }
 for (VAR_1=0; VAR_3[VAR_1]; VAR_1++) {
  if (!FUNC_0 (VAR_0, VAR_3[VAR_1])) {
   return 10 + VAR_1;
  }
 }
 return -1;
}
