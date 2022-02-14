
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

void FUNC_7(int VAR_6, const char *VAR_7[])
{

 if (VAR_6 < 2) {
  (void) FUNC_5(VAR_2, " ");
  FUNC_4("(from-name) ");
  (void) FUNC_1(VAR_5);
  (void) FUNC_2(&VAR_2[FUNC_6(VAR_2)]);
  FUNC_3();
  VAR_6 = VAR_3;
  VAR_7 = VAR_4;
 }
 if (VAR_6 < 2) {
usage:
  FUNC_4("%s from-name to-name\n", VAR_7[0]);
  (void) FUNC_1(VAR_5);
  VAR_1 = -1;
  return;
 }
 if (VAR_6 < 3) {
  (void) FUNC_5(VAR_2, " ");
  FUNC_4("(to-name) ");
  (void) FUNC_1(VAR_5);
  (void) FUNC_2(&VAR_2[FUNC_6(VAR_2)]);
  FUNC_3();
  VAR_6 = VAR_3;
  VAR_7 = VAR_4;
 }
 if (VAR_6 < 3)
  goto usage;
 if (FUNC_0("RNFR %s", VAR_7[1]) == VAR_0)
  (void) FUNC_0("RNTO %s", VAR_7[2]);
}
