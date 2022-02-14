
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RCore ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,char*) ;

int FUNC_4(void *VAR_0) {
 RCore *VAR_1 = (RCore *)VAR_0;
 for (;;) {
  char *VAR_2 = FUNC_0 (VAR_1, "> ");
  if (!VAR_2 || !*VAR_2) {
   FUNC_1 (VAR_2);
   break;
  }
  FUNC_3 (VAR_1, "? %s", VAR_2);
  FUNC_2 ();
  FUNC_1 (VAR_2);
 }
 return 0;
}
