
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int remoteConn ;
typedef int PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(PGconn *VAR_2, remoteConn *VAR_3)
{
 if (!FUNC_8())
 {
  if (!FUNC_0(VAR_2))
  {
   FUNC_1(VAR_2);
   if (VAR_3)
    FUNC_7(VAR_3);

   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_6("password is required"),
      FUNC_4("Non-superuser cannot connect if the server does not request a password."),
      FUNC_5("Target server's authentication method must be changed.")));
  }
 }
}
