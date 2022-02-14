
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int) ;

char *FUNC_2(const char *VAR_0, int VAR_1) {
 if (FUNC_0 (VAR_0) || VAR_1 < 2) {
  return ((void*)0);
 }
 char *VAR_2 = FUNC_1 (VAR_0, VAR_1 + 1);
 int VAR_3 = 0;
 for (; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2[VAR_3] == '}') {
   if (VAR_3 + 1 < VAR_1) {
    if (VAR_2[VAR_3 + 1] == ',') {
     VAR_2[VAR_3 + 1] = '\n';
    }
    continue;
   }
   VAR_2[VAR_3 + 1] = '\n';
  }
 }
 return VAR_2;
}
