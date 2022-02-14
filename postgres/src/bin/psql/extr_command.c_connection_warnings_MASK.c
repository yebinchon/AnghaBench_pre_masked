
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sverbuf ;
typedef int cverbuf ;
struct TYPE_2__ {int sversion; char* progname; int db; int notty; int quiet; } ;


 char* VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 char* FUNC_3 (int,int,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,char*,...) ;
 TYPE_1__ VAR_2 ;

void
FUNC_7(bool VAR_3)
{
 if (!VAR_2.quiet && !VAR_2.notty)
 {
  int VAR_4 = VAR_1;
  char VAR_5[32];
  char VAR_6[32];

  if (VAR_2.sversion != VAR_4)
  {
   const char *VAR_7;


   VAR_7 = FUNC_0(VAR_2.db, "server_version");

   if (!VAR_7)
   {
    FUNC_3(VAR_2.sversion, 1,
           VAR_6, sizeof(VAR_6));
    VAR_7 = VAR_6;
   }

   FUNC_6(FUNC_1("%s (%s, server %s)\n"),
       VAR_2.progname, VAR_0, VAR_7);
  }

  else if (VAR_3)
   FUNC_6("%s (%s)\n", VAR_2.progname, VAR_0);

  if (VAR_2.sversion / 100 > VAR_4 / 100)
   FUNC_6(FUNC_1("WARNING: %s major version %s, server major version %s.\n"
      "         Some psql features might not work.\n"),
       VAR_2.progname,
       FUNC_3(VAR_4, 0,
           VAR_5, sizeof(VAR_5)),
       FUNC_3(VAR_2.sversion, 0,
           VAR_6, sizeof(VAR_6)));





  FUNC_5();
  FUNC_4();
 }
}
