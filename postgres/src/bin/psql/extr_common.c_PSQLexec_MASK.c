
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ echo_hidden; int db; scalar_t__ logfile; } ;
typedef int PGresult ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__,char*,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

PGresult *
FUNC_10(const char *VAR_4)
{
 PGresult *VAR_5;

 if (!VAR_2.db)
 {
  FUNC_8("You are currently not connected to a database.");
  return ((void*)0);
 }

 if (VAR_2.echo_hidden != VAR_1)
 {
  FUNC_9(FUNC_5("********* QUERY **********\n"
     "%s\n"
     "**************************\n\n"), VAR_4);
  FUNC_6(VAR_3);
  if (VAR_2.logfile)
  {
   FUNC_7(VAR_2.logfile,
     FUNC_5("********* QUERY **********\n"
       "%s\n"
       "**************************\n\n"), VAR_4);
   FUNC_6(VAR_2.logfile);
  }

  if (VAR_2.echo_hidden == VAR_0)
   return ((void*)0);
 }

 FUNC_4();

 VAR_5 = FUNC_2(VAR_2.db, VAR_4);

 FUNC_3();

 if (!FUNC_0(VAR_5))
 {
  FUNC_1(VAR_5);
  VAR_5 = ((void*)0);
 }

 return VAR_5;
}
