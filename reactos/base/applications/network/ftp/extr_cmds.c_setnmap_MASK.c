
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,char) ;
 int * VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char** VAR_8 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,char*) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,scalar_t__) ;

void FUNC_8(int VAR_11, const char *VAR_12[])
{
 char *VAR_13;

 if (VAR_11 == 1) {
  VAR_4 = 0;
  FUNC_4("Nmap off.\n");
  (void) FUNC_0(VAR_10);
  VAR_2 = VAR_4;
  return;
 }
 if (VAR_11 < 3) {
  (void) FUNC_5(VAR_3, " ");
  FUNC_4("(mapout) ");
  (void) FUNC_0(VAR_10);
  (void) FUNC_1(&VAR_3[FUNC_6(VAR_3)]);
  FUNC_3();
  VAR_11 = VAR_7;
  VAR_12 = VAR_8;
 }
 if (VAR_11 < 3) {
  FUNC_4("Usage: %s [mapin mapout]\n",VAR_12[0]);
  (void) FUNC_0(VAR_10);
  VAR_2 = -1;
  return;
 }
 VAR_4 = 1;
 VAR_2 = 1;
 VAR_13 = FUNC_2(VAR_1, ' ');
 if (VAR_9) {
  while(*++VAR_13 == ' ');
  VAR_1 = VAR_13;
  VAR_13 = FUNC_2(VAR_1, ' ');
 }
 *VAR_13 = '\0';
 (void) FUNC_7(VAR_5, VAR_1, VAR_0 - 1);
 while (*++VAR_13 == ' ');
 (void) FUNC_7(VAR_6, VAR_13, VAR_0 - 1);
}
