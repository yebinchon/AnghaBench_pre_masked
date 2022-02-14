
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_4 (char*,...) ;
 int VAR_4 ;
 int FUNC_5 (int *,char*) ;
 size_t FUNC_6 (int *) ;

void FUNC_7(int VAR_5, const char *VAR_6[])
{
 if (VAR_5 == 2) {
  FUNC_4("usage: %s mode file-name\n", VAR_6[0]);
  (void) FUNC_1(VAR_4);
  VAR_0 = -1;
  return;
 }
 if (VAR_5 < 3) {
  (void) FUNC_5(VAR_1, " ");
  FUNC_4("(mode and file-name) ");
  (void) FUNC_1(VAR_4);
  (void) FUNC_2(&VAR_1[FUNC_6(VAR_1)]);
  FUNC_3();
  VAR_5 = VAR_2;
  VAR_6 = VAR_3;
 }
 if (VAR_5 != 3) {
  FUNC_4("usage: %s mode file-name\n", VAR_6[0]);
  (void) FUNC_1(VAR_4);
  VAR_0 = -1;
  return;
 }
 (void)FUNC_0("SITE CHMOD %s %s", VAR_6[1], VAR_6[2]);
}
