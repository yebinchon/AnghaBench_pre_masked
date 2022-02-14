
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmd {int (* c_handler ) (scalar_t__,int *) ;scalar_t__ c_bell; scalar_t__ c_conn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 struct cmd* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__,int *) ;
 scalar_t__* VAR_3 ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char) ;
 int FUNC_9 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (scalar_t__,int *) ;

void FUNC_11(int VAR_8)
{
 register struct cmd *VAR_9;

 if (!VAR_8)
  (void) FUNC_8('\n');
 for (;;) {
  (void) FUNC_2(VAR_7);
  if (VAR_2) {
   FUNC_7("ftp> ");
   (void) FUNC_2(VAR_7);
  }
  if (FUNC_4(VAR_3) == 0) {
   if (FUNC_0(VAR_6) || FUNC_1(VAR_6))
    FUNC_9(0, ((void*)0));
   break;
  }
  if (VAR_3[0] == 0)
   break;
  FUNC_6();
  if (VAR_4 == 0) {
   continue;
  }
  VAR_9 = FUNC_3(VAR_5[0]);
  if (VAR_9 == (struct cmd *)-1) {
   FUNC_7("?Ambiguous command\n");
   continue;
  }
  if (VAR_9 == 0) {
   FUNC_7("?Invalid command\n");
   continue;
  }
  if (VAR_9->c_conn && !VAR_1) {
   FUNC_7 ("Not connected.\n");
   continue;
  }
  (*VAR_9->c_handler)(VAR_4, VAR_5);
  if (VAR_0 && VAR_9->c_bell)
   (void) FUNC_8('\007');
  if (VAR_9->c_handler != FUNC_5)
   break;
 }
 (void) FUNC_2(VAR_7);


}
