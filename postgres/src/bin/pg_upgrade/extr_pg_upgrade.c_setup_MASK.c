
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pgdata; scalar_t__ bindir; } ;
struct TYPE_5__ {int check; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10(char *VAR_4, bool *VAR_5)
{




 FUNC_1();






 if (!VAR_1.bindir)
 {
  char VAR_6[VAR_0];

  if (FUNC_2(VAR_4, VAR_6) < 0)
   FUNC_4("%s: could not find own program executable\n", VAR_4);

  *FUNC_3(VAR_6) = '\0';
  FUNC_0(VAR_6);
  VAR_1.bindir = FUNC_5(VAR_6);
 }

 FUNC_9();


 if (FUNC_6(VAR_2.pgdata))
 {
  if (FUNC_7(&VAR_2, 0))
   FUNC_8(0);
  else
  {
   if (!VAR_3.check)
    FUNC_4("There seems to be a postmaster servicing the old cluster.\n"
       "Please shutdown that postmaster and try again.\n");
   else
    *VAR_5 = 1;
  }
 }


 if (FUNC_6(VAR_1.pgdata))
 {
  if (FUNC_7(&VAR_1, 0))
   FUNC_8(0);
  else
   FUNC_4("There seems to be a postmaster servicing the new cluster.\n"
      "Please shutdown that postmaster and try again.\n");
 }
}
