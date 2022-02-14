
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acct ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 char** VAR_5 ;
 int FUNC_6 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;

void FUNC_9(int VAR_8, const char *VAR_9[])
{
 char VAR_10[80], *FUNC_10();
 int VAR_11, VAR_12 = 0;

 if (VAR_8 < 2) {
  (void) FUNC_7(VAR_3, " ");
  FUNC_6("(username) ");
  (void) FUNC_1(VAR_7);
  (void) FUNC_4(&VAR_3[FUNC_8(VAR_3)]);
  FUNC_5();
  VAR_8 = VAR_4;
  VAR_9 = VAR_5;
 }
 if (VAR_8 > 4) {
  FUNC_6("usage: %s username [password] [account]\n", VAR_9[0]);
  (void) FUNC_1(VAR_7);
  VAR_2 = -1;
  return;
 }
 VAR_11 = FUNC_0("USER %s", VAR_9[1]);
 if (VAR_11 == VAR_1) {
  if (VAR_8 < 3 )
   VAR_9[2] = FUNC_10("Password: "), VAR_8++;
  VAR_11 = FUNC_0("PASS %s", VAR_9[2]);
 }
 if (VAR_11 == VAR_1) {
  if (VAR_8 < 4) {
   FUNC_6("Account: "); (void) FUNC_1(VAR_7);
   (void) FUNC_1(VAR_7);
   (void) FUNC_2(VAR_10, sizeof(VAR_10) - 1, VAR_6);
   VAR_10[FUNC_8(VAR_10) - 1] = '\0';
   VAR_9[3] = VAR_10; VAR_8++;
  }
  VAR_11 = FUNC_0("ACCT %s", VAR_9[3]);
  VAR_12++;
 }
 if (VAR_11 != VAR_0) {
  FUNC_3(VAR_7, "Login failed.\n");
  (void) FUNC_1(VAR_7);
  return;
 }
 if (!VAR_12 && VAR_8 == 4) {
  (void) FUNC_0("ACCT %s", VAR_9[3]);
 }
}
