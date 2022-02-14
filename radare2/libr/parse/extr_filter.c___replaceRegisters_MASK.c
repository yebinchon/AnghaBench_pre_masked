
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RReg ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,char const*) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(RReg *VAR_1, char *VAR_2, bool VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 64; VAR_4++) {
  const char *VAR_5 = FUNC_0 (VAR_1, VAR_4);
  if (!VAR_5 || VAR_4 == VAR_0) {
   continue;
  }
  const char *VAR_6 = FUNC_1 (VAR_4);
  if (!VAR_6) {
   break;
  }
  if (VAR_3 && *VAR_5 == 'r') {
   FUNC_2 (VAR_2, VAR_5, VAR_6);
   char *VAR_7 = FUNC_3 (VAR_5);
   *VAR_7 = 'e';
   FUNC_2 (VAR_2, VAR_7, VAR_6);
  } else {
   FUNC_2 (VAR_2, VAR_5, VAR_6);
  }
 }
}
