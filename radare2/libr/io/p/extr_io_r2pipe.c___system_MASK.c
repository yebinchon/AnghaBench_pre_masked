
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RIODesc ;
typedef int RIO ;
typedef int PJ ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,char const*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *) ;
 char* FUNC_10 (int ) ;
 int FUNC_11 (int ,char const*) ;
 int FUNC_12 (int ,int *) ;
 char* FUNC_13 (char*,char*) ;

__attribute__((used)) static char *FUNC_14(RIO *VAR_0, RIODesc *VAR_1, const char *VAR_2) {
 FUNC_12 (VAR_0 && VAR_1 && VAR_2, ((void*)0));
 PJ *VAR_3 = FUNC_7 ();
 FUNC_8 (VAR_3);
 FUNC_6 (VAR_3, "op", "system");
 FUNC_6 (VAR_3, "cmd", VAR_2);
 FUNC_4 (VAR_3);
 const char *VAR_4 = FUNC_9 (VAR_3);
 int VAR_5 = FUNC_11 (FUNC_0 (VAR_1), VAR_4);
 FUNC_5 (VAR_3);
 if (VAR_5 < 1) {
  FUNC_2 ("r2pipe_write: error\n");
  return ((void*)0);
 }
 char *VAR_6 = FUNC_10 (FUNC_0 (VAR_1));


 char *VAR_7 = FUNC_13 (VAR_6, "result");
 if (VAR_7) {
  int VAR_8 = FUNC_1 (VAR_7 + 6 + 1);
  FUNC_2 ("RESULT %d\n", VAR_8);
 }
 FUNC_3 (VAR_6);
 return ((void*)0);
}
