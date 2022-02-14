
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RFlag ;
typedef int PJ ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,...) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(RFlag *VAR_0, int VAR_1, const char *VAR_2, bool VAR_3, PJ *VAR_4, int VAR_5) {
 bool VAR_6 = VAR_1 == 0;
 switch (VAR_5) {
 case 'j': {
  char *VAR_7 = FUNC_7 (VAR_2);
  if (!VAR_7) {
   return;
  }

  FUNC_5 (VAR_4);
  FUNC_3 (VAR_4, "ordinal", VAR_1);
  FUNC_4 (VAR_4, "name", VAR_7);
  FUNC_2 (VAR_4, "selected", VAR_3);
  FUNC_1 (VAR_4);
  FUNC_0 (VAR_7);
  break;
 }
 case '*': {
  const char *VAR_8 = VAR_6? "fs %s\n": "fs+%s\n";
  FUNC_6 (VAR_8, VAR_2);
  break;
 }
 default:
  FUNC_6 ("%-2d %s%s\n", VAR_1, VAR_2, VAR_3? " (selected)": "");
  break;
 }
}
