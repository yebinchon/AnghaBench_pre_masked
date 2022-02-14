
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 char** VAR_5 ;
 int FUNC_5 (char*,...) ;
 int VAR_6 ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 size_t FUNC_8 (char*) ;

void FUNC_9(int VAR_7, const char *VAR_8[])
{
 int VAR_9;
 char VAR_10[VAR_0];

 if (VAR_7 < 2) {
  (void) FUNC_6(VAR_3, " ");
  FUNC_5("(command line to send) ");
  (void) FUNC_1(VAR_6);
  (void) FUNC_3(&VAR_3[FUNC_8(VAR_3)]);
  FUNC_4();
  VAR_7 = VAR_4;
  VAR_8 = VAR_5;
 }
 if (VAR_7 < 2) {
  FUNC_5("usage: %s line-to-send\n", VAR_8[0]);
  (void) FUNC_1(VAR_6);
  VAR_2 = -1;
  return;
 }
 (void) FUNC_7(VAR_10, VAR_8[1]);
 for (VAR_9 = 2; VAR_9 < VAR_7; VAR_9++) {
  (void) FUNC_6(VAR_10, " ");
  (void) FUNC_6(VAR_10, VAR_8[VAR_9]);
 }
 if (FUNC_0(VAR_10) == VAR_1) {
  while (FUNC_2(0) == VAR_1);
 }
}
