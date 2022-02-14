
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pgpid_t ;
typedef int env_var ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,int,char*,int) ;
 scalar_t__ FUNC_11 () ;
 int VAR_13 ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static void
FUNC_15(void)
{
 pgpid_t VAR_14 = 0;
 pgpid_t VAR_15;

 if (VAR_6 != VAR_2)
 {
  VAR_14 = FUNC_4(0);
  if (VAR_14 != 0)
   FUNC_14(FUNC_1("%s: another server might be running; "
         "trying to start server anyway\n"),
       VAR_12);
 }

 FUNC_9();


 if (VAR_6 == VAR_2 || VAR_9 == ((void*)0))
  VAR_9 = "";

 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_3(VAR_5, "postgres", VAR_1);
 {
  static char VAR_16[32];

  FUNC_10(VAR_16, sizeof(VAR_16), "PG_GRANDPARENT_PID=%d",
     (int) FUNC_5());
  FUNC_8(VAR_16);
 }


 VAR_15 = FUNC_11();

 if (VAR_7)
 {
  VAR_10 = VAR_15;
  FUNC_6(VAR_3, VAR_13);

  FUNC_7(FUNC_1("waiting for server to start..."));

  switch (FUNC_13(VAR_15, 0))
  {
   case 129:
    FUNC_7(FUNC_1(" done\n"));
    FUNC_7(FUNC_1("server started\n"));
    break;
   case 128:
    FUNC_7(FUNC_1(" stopped waiting\n"));
    FUNC_14(FUNC_1("%s: server did not start in time\n"),
        VAR_12);
    FUNC_2(1);
    break;
   case 130:
    FUNC_7(FUNC_1(" stopped waiting\n"));
    FUNC_14(FUNC_1("%s: could not start server\n"
          "Examine the log output.\n"),
        VAR_12);
    FUNC_2(1);
    break;
  }
 }
 else
  FUNC_7(FUNC_1("server starting\n"));






}
