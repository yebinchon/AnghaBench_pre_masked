
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
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int ,struct stat*) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(void)
{
 int VAR_11;
 pgpid_t VAR_12;
 struct stat VAR_13;

 VAR_12 = FUNC_4(0);

 if (VAR_12 == 0)
 {
  FUNC_11(FUNC_0("%s: PID file \"%s\" does not exist\n"),
      VAR_7, VAR_6);
  FUNC_11(FUNC_0("Is server running?\n"));
  FUNC_11(FUNC_0("trying to start server anyway\n"));
  FUNC_1();
  return;
 }
 else if (VAR_12 < 0)
 {
  VAR_12 = -VAR_12;
  if (FUNC_7((pid_t) VAR_12))
  {
   FUNC_11(FUNC_0("%s: cannot restart server; "
         "single-user server is running (PID: %ld)\n"),
       VAR_7, VAR_12);
   FUNC_11(FUNC_0("Please terminate the single-user server and try again.\n"));
   FUNC_2(1);
  }
 }

 if (FUNC_7((pid_t) VAR_12))
 {
  if (FUNC_5((pid_t) VAR_12, VAR_9) != 0)
  {
   FUNC_11(FUNC_0("%s: could not send stop signal (PID: %ld): %s\n"), VAR_7, VAR_12,
       FUNC_10(VAR_5));
   FUNC_2(1);
  }







  if (VAR_8 == VAR_1 &&
   FUNC_9(VAR_4, &VAR_13) == 0 &&
   FUNC_3() != VAR_0)
  {
   FUNC_8(FUNC_0("WARNING: online backup mode is active\n"
      "Shutdown will not complete until pg_stop_backup() is called.\n\n"));
  }

  FUNC_8(FUNC_0("waiting for server to shut down..."));



  for (VAR_11 = 0; VAR_11 < VAR_10 * VAR_3; VAR_11++)
  {
   if ((VAR_12 = FUNC_4(0)) != 0)
   {
    if (VAR_11 % VAR_3 == 0)
     FUNC_8(".");
    FUNC_6(VAR_2 / VAR_3);
   }
   else
    break;
  }

  if (VAR_12 != 0)
  {
   FUNC_8(FUNC_0(" failed\n"));

   FUNC_11(FUNC_0("%s: server does not shut down\n"), VAR_7);
   if (VAR_8 == VAR_1)
    FUNC_11(FUNC_0("HINT: The \"-m fast\" option immediately disconnects sessions rather than\n"
          "waiting for session-initiated disconnection.\n"));
   FUNC_2(1);
  }

  FUNC_8(FUNC_0(" done\n"));
  FUNC_8(FUNC_0("server stopped\n"));
 }
 else
 {
  FUNC_11(FUNC_0("%s: old server process (PID: %ld) seems to be gone\n"),
      VAR_7, VAR_12);
  FUNC_11(FUNC_0("starting server anyway\n"));
 }

 FUNC_1();
}
