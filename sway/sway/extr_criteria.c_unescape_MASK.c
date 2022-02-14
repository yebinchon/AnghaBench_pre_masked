
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(char *VAR_0) {
 if (!FUNC_2(VAR_0, '\\')) {
  return;
 }
 char *VAR_1 = FUNC_0(FUNC_4(VAR_0) + 1, 1);
 char *VAR_2 = VAR_0;
 char *VAR_3 = VAR_1;
 while (*VAR_2) {
  if (*VAR_2 == '\\' && *(VAR_2 + 1) == '"') {

   ++VAR_2;
  }
  *VAR_3 = *VAR_2;
  ++VAR_3;
  ++VAR_2;
 }
 FUNC_3(VAR_0, VAR_1);
 FUNC_1(VAR_1);
}
