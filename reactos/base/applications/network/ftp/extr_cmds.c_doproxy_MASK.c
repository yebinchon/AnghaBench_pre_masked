
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int (* c_handler ) (int,char const**) ;scalar_t__ c_conn; int c_proxy; } ;
typedef int jmp_buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_3 (char*,...) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int *,char*) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int,char const**) ;

void FUNC_9(int VAR_7, const char *VAR_8[])
{
 register struct cmd *VAR_9;
 struct cmd *FUNC_10();

 extern jmp_buf VAR_10;

 if (VAR_7 < 2) {
  (void) FUNC_6(VAR_2, " ");
  FUNC_3("(command) ");
  (void) FUNC_0(VAR_6);
  (void) FUNC_1(&VAR_2[FUNC_7(VAR_2)]);
  FUNC_2();
  VAR_7 = VAR_3;
  VAR_8 = VAR_4;
 }
 if (VAR_7 < 2) {
  FUNC_3("usage:%s command\n", VAR_8[0]);
  (void) FUNC_0(VAR_6);
  VAR_0 = -1;
  return;
 }
 VAR_9 = FUNC_10(VAR_8[1]);
 if (VAR_9 == (struct cmd *) -1) {
  FUNC_3("?Ambiguous command\n");
  (void) FUNC_0(VAR_6);
  VAR_0 = -1;
  return;
 }
 if (VAR_9 == 0) {
  FUNC_3("?Invalid command\n");
  (void) FUNC_0(VAR_6);
  VAR_0 = -1;
  return;
 }
 if (!VAR_9->c_proxy) {
  FUNC_3("?Invalid proxy command\n");
  (void) FUNC_0(VAR_6);
  VAR_0 = -1;
  return;
 }
 if (FUNC_5(VAR_10)) {
  VAR_0 = -1;
  return;
 }

 FUNC_4(1);
 if (VAR_9->c_conn && !VAR_1) {
  FUNC_3("Not connected\n");
  (void) FUNC_0(VAR_6);
  FUNC_4(0);

  VAR_0 = -1;
  return;
 }
 (*VAR_9->c_handler)(VAR_7-1, VAR_8+1);
 if (VAR_1) {
  VAR_5 = 1;
 }
 else {
  VAR_5 = 0;
 }
 FUNC_4(0);

}
