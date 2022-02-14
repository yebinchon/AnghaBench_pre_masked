
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;
 int FUNC_5 (int *,char*) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ VAR_6 ;

void FUNC_7(int VAR_7, const char *VAR_8[])
{

 if (VAR_7 < 2) {
  (void) FUNC_5(VAR_2, " ");
  FUNC_4("(remote-directory) ");
  (void) FUNC_1(VAR_5);
  (void) FUNC_2(&VAR_2[FUNC_6(VAR_2)]);
  FUNC_3();
  VAR_7 = VAR_3;
  VAR_8 = VAR_4;
 }
 if (VAR_7 < 2) {
  FUNC_4("usage:%s remote-directory\n", VAR_8[0]);
  (void) FUNC_1(VAR_5);
  VAR_1 = -1;
  return;
 }
 if (FUNC_0("CWD %s", VAR_8[1]) == VAR_0 && VAR_1 == 500) {
  if (VAR_6) {
   FUNC_4("CWD command not recognized, trying XCWD\n");
   (void) FUNC_1(VAR_5);
  }
  (void) FUNC_0("XCWD %s", VAR_8[1]);
 }
}
