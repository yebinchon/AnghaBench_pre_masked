
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef scalar_t__ pgpid_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (char*,char*,...) ;
 char* VAR_1 ;
 int FUNC_6 (char*) ;
 char** FUNC_7 (int ,int*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 pgpid_t VAR_2;

 VAR_2 = FUNC_3(1);

 if (VAR_2 != 0)
 {

  if (VAR_2 < 0)
  {
   VAR_2 = -VAR_2;
   if (FUNC_4((pid_t) VAR_2))
   {
    FUNC_5(FUNC_0("%s: single-user server is running (PID: %ld)\n"),
        VAR_1, VAR_2);
    return;
   }
  }
  else

  {
   if (FUNC_4((pid_t) VAR_2))
   {
    char **VAR_3;
    char **VAR_4;
    int VAR_5;

    FUNC_5(FUNC_0("%s: server is running (PID: %ld)\n"),
        VAR_1, VAR_2);

    VAR_3 = FUNC_7(VAR_0, &VAR_5);
    if (VAR_3 != ((void*)0))
    {
     for (VAR_4 = VAR_3; *VAR_4 != ((void*)0); VAR_4++)
      FUNC_6(*VAR_4);


     FUNC_2(VAR_3);
    }
    return;
   }
  }
 }
 FUNC_5(FUNC_0("%s: no server running\n"), VAR_1);






 FUNC_1(3);
}
