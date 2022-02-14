
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;

char *FUNC_4(char **VAR_0, int VAR_1) {
 if (!FUNC_3(VAR_1 > 0, "argc should be positive")) {
  return ((void*)0);
 }
 int VAR_2 = 0, VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  VAR_2 += FUNC_2(VAR_0[VAR_3]) + 1;
 }
 char *VAR_4 = FUNC_0(VAR_2);
 VAR_2 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  FUNC_1(VAR_4 + VAR_2, VAR_0[VAR_3]);
  VAR_2 += FUNC_2(VAR_0[VAR_3]);
  VAR_4[VAR_2++] = ' ';
 }
 VAR_4[VAR_2 - 1] = '\0';
 return VAR_4;
}
