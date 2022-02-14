
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(char *VAR_0, const char *VAR_1, const char *VAR_2) {
 for (;;) {
  char *VAR_3 = FUNC_2 (VAR_0, VAR_1);
  if (!VAR_3) {
   break;
  }
  char *VAR_4 = VAR_3 + FUNC_1 (VAR_1);
  char *VAR_5 = VAR_3 + FUNC_1 (VAR_2);
  FUNC_0 (VAR_5, VAR_4, FUNC_1 (VAR_4) + 1);
  FUNC_0 (VAR_3, VAR_2, FUNC_1 (VAR_2));
  VAR_4 = VAR_3 + FUNC_1 (VAR_2);
 }
}
