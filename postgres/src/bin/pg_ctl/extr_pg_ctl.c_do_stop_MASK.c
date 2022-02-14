
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pid_t ;
typedef scalar_t__ pgpid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void
FUNC_10(void)
{
 int VAR_12;
 pgpid_t VAR_13;
 struct stat VAR_14;

 VAR_13 = FUNC_3(0);

 if (VAR_13 == 0)
 {
  FUNC_9(FUNC_0("%s: PID file \"%s\" does not exist\n"), VAR_8, VAR_7);
  FUNC_9(FUNC_0("Is server running?\n"));
  FUNC_1(1);
 }
 else if (VAR_13 < 0)
 {
  VAR_13 = -VAR_13;
  FUNC_9(FUNC_0("%s: cannot stop server; "
        "single-user server is running (PID: %ld)\n"),
      VAR_8, VAR_13);
  FUNC_1(1);
 }

 if (FUNC_4((pid_t) VAR_13, VAR_10) != 0)
 {
  FUNC_9(FUNC_0("%s: could not send stop signal (PID: %ld): %s\n"), VAR_8, VAR_13,
      FUNC_8(VAR_6));
  FUNC_1(1);
 }

 if (!VAR_5)
 {
  FUNC_6(FUNC_0("server shutting down\n"));
  return;
 }
 else
 {






  if (VAR_9 == VAR_1 &&
   FUNC_7(VAR_4, &VAR_14) == 0 &&
   FUNC_2() != VAR_0)
  {
   FUNC_6(FUNC_0("WARNING: online backup mode is active\n"
      "Shutdown will not complete until pg_stop_backup() is called.\n\n"));
  }

  FUNC_6(FUNC_0("waiting for server to shut down..."));

  for (VAR_12 = 0; VAR_12 < VAR_11 * VAR_3; VAR_12++)
  {
   if ((VAR_13 = FUNC_3(0)) != 0)
   {
    if (VAR_12 % VAR_3 == 0)
     FUNC_6(".");
    FUNC_5(VAR_2 / VAR_3);
   }
   else
    break;
  }

  if (VAR_13 != 0)
  {
   FUNC_6(FUNC_0(" failed\n"));

   FUNC_9(FUNC_0("%s: server does not shut down\n"), VAR_8);
   if (VAR_9 == VAR_1)
    FUNC_9(FUNC_0("HINT: The \"-m fast\" option immediately disconnects sessions rather than\n"
          "waiting for session-initiated disconnection.\n"));
   FUNC_1(1);
  }
  FUNC_6(FUNC_0(" done\n"));

  FUNC_6(FUNC_0("server stopped\n"));
 }
}
