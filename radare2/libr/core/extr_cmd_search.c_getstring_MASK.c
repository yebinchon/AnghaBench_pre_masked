
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, int VAR_1) {
 char *VAR_2, *VAR_3 = FUNC_1 (VAR_1 + 1);
 int VAR_4;
 if (!VAR_3) {
  return ((void*)0);
 }
 for (VAR_4 = 0, VAR_2 = VAR_3; VAR_4 < VAR_1; VAR_0++, VAR_4++) {
  if (FUNC_0 (*VAR_0)) {
   *VAR_2++ = *VAR_0;
  }
 }
 *VAR_2 = 0;
 return VAR_3;
}
