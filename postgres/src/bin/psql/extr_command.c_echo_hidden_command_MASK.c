
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ echo_hidden; scalar_t__ logfile; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_4)
{
 if (VAR_2.echo_hidden != VAR_1)
 {
  FUNC_3(FUNC_0("********* QUERY **********\n"
     "%s\n"
     "**************************\n\n"), VAR_4);
  FUNC_1(VAR_3);
  if (VAR_2.logfile)
  {
   FUNC_2(VAR_2.logfile,
     FUNC_0("********* QUERY **********\n"
       "%s\n"
       "**************************\n\n"), VAR_4);
   FUNC_1(VAR_2.logfile);
  }

  if (VAR_2.echo_hidden == VAR_0)
   return 0;
 }
 return 1;
}
