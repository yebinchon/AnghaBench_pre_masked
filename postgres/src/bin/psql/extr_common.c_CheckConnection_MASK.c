
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * db; int cur_cmd_interactive; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool
FUNC_11(void)
{
 bool VAR_3;

 VAR_3 = FUNC_0();
 if (!VAR_3)
 {
  if (!VAR_1.cur_cmd_interactive)
  {
   FUNC_10("connection to server was lost");
   FUNC_8(VAR_0);
  }

  FUNC_9(VAR_2, "%s", FUNC_6("The connection to the server was lost. Attempting reset: "));
  FUNC_2(VAR_1.db);
  VAR_3 = FUNC_0();
  if (!VAR_3)
  {
   FUNC_9(VAR_2, "%s", FUNC_6("Failed.\n"));





   FUNC_1(VAR_1.db);
   VAR_1.db = ((void*)0);
   FUNC_3();
   FUNC_5();
  }
  else
  {
   FUNC_9(VAR_2, "%s", FUNC_6("Succeeded.\n"));





   FUNC_4();
   FUNC_7(0);
  }
 }

 return VAR_3;
}
