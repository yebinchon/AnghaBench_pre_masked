
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char const*,int,int) ;
 char* FUNC_3 (char const*,int) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
 if (FUNC_0 (VAR_2)) {
  if (!VAR_1) {
   VAR_1 = "";
  }
  char *VAR_4 = FUNC_3 (VAR_1, -1);
  if (VAR_4) {
   char *VAR_5 = FUNC_4 ("\"%s\"", VAR_4);
   FUNC_2 (VAR_0, VAR_5, VAR_2, VAR_3);
   FUNC_1 (VAR_4);
   FUNC_1 (VAR_5);
  }
 } else {
  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
