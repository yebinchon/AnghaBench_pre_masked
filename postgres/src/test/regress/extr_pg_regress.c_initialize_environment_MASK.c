
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*) ;
 char* VAR_0 ;
 void* FUNC_4 (char*) ;
 char* VAR_1 ;
 int FUNC_5 () ;
 char* FUNC_6 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (char*,char const*,char const*) ;
 int FUNC_9 (char*) ;
 char* VAR_4 ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (char*) ;
 char* VAR_6 ;

__attribute__((used)) static void
FUNC_12(void)
{




 FUNC_9("PGAPPNAME=pg_regress");

 if (VAR_2)
 {



  FUNC_11("LC_COLLATE");
  FUNC_11("LC_CTYPE");
  FUNC_11("LC_MONETARY");
  FUNC_11("LC_NUMERIC");
  FUNC_11("LC_TIME");
  FUNC_11("LANG");
 }







 FUNC_11("LANGUAGE");
 FUNC_11("LC_ALL");
 FUNC_9("LC_MESSAGES=C");




 if (VAR_0)
  FUNC_3("PGCLIENTENCODING", VAR_0);
 else
  FUNC_11("PGCLIENTENCODING");




 FUNC_9("PGTZ=PST8PDT");
 FUNC_9("PGDATESTYLE=Postgres, MDY");






 {
  const char *VAR_7 = "-c intervalstyle=postgres_verbose";
  const char *VAR_8 = FUNC_4("PGOPTIONS");
  char *VAR_9;

  if (!VAR_8)
   VAR_8 = "";
  VAR_9 = FUNC_8("PGOPTIONS=%s %s",
         VAR_8, VAR_7);
  FUNC_9(VAR_9);
 }

 if (VAR_5)
 {







  FUNC_11("PGDATABASE");
  FUNC_11("PGUSER");
  FUNC_11("PGSERVICE");
  FUNC_11("PGSSLMODE");
  FUNC_11("PGREQUIRESSL");
  FUNC_11("PGCONNECT_TIMEOUT");
  FUNC_11("PGDATA");
  FUNC_0(VAR_1 != ((void*)0));
  FUNC_3("PGHOST", VAR_1);

  FUNC_11("PGHOSTADDR");
  if (VAR_3 != -1)
  {
   char VAR_10[16];

   FUNC_10(VAR_10, "%d", VAR_3);
   FUNC_3("PGPORT", VAR_10);
  }
 }
 else
 {
  const char *VAR_11;
  const char *VAR_12;





  if (VAR_1 != ((void*)0))
  {
   FUNC_3("PGHOST", VAR_1);
   FUNC_11("PGHOSTADDR");
  }
  if (VAR_3 != -1)
  {
   char VAR_13[16];

   FUNC_10(VAR_13, "%d", VAR_3);
   FUNC_3("PGPORT", VAR_13);
  }
  if (VAR_6 != ((void*)0))
   FUNC_3("PGUSER", VAR_6);







  FUNC_11("PGDATABASE");




  VAR_11 = FUNC_4("PGHOST");
  VAR_12 = FUNC_4("PGPORT");

  if (!VAR_11)
   VAR_11 = "localhost";


  if (VAR_11 && VAR_12)
   FUNC_7(FUNC_1("(using postmaster on %s, port %s)\n"), VAR_11, VAR_12);
  if (VAR_11 && !VAR_12)
   FUNC_7(FUNC_1("(using postmaster on %s, default port)\n"), VAR_11);
  if (!VAR_11 && VAR_12)
   FUNC_7(FUNC_1("(using postmaster on Unix socket, port %s)\n"), VAR_12);
  if (!VAR_11 && !VAR_12)
   FUNC_7(FUNC_1("(using postmaster on Unix socket, default port)\n"));
 }

 FUNC_2();
 FUNC_5();
}
