
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,scalar_t__) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4 (char *VAR_0, char **VAR_1, char **VAR_2) {
 char *VAR_3 = FUNC_3 (VAR_0, "f,=");
 const int VAR_4 = 2;
 int VAR_5 = 0;

 if (VAR_3) {
  while (VAR_5 != VAR_4) {
   --VAR_3;
   if (*VAR_3 == ',') {
    VAR_5++;
   }
  }
  *VAR_2 = FUNC_1 (++VAR_3);
  *VAR_1 = FUNC_0 (VAR_0, FUNC_2 (VAR_0) - FUNC_2 (*VAR_2) - 1);
 }
}
