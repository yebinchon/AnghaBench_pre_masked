
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 char* VAR_3 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char const*) ;
 scalar_t__ FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (char*,char*) ;

__attribute__((used)) static void
FUNC_13(PGconn *VAR_5)
{
 PGresult *VAR_6;
 int VAR_7;
 VAR_6 = FUNC_3(VAR_5,
        "SELECT datname "
        "FROM pg_database d "
        "WHERE datallowconn "
        "ORDER BY (datname <> 'template1'), datname");

 if (FUNC_2(VAR_6) > 0)
  FUNC_7(VAR_0, "--\n-- Databases\n--\n\n");

 for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_6); VAR_7++)
 {
  char *VAR_8 = FUNC_1(VAR_6, VAR_7, 0);
  const char *VAR_9;
  int VAR_10;


  if (FUNC_12(VAR_8, "template0") == 0)
   continue;


  if (FUNC_11(&VAR_2, VAR_8))
  {
   FUNC_9("excluding database \"%s\"", VAR_8);
   continue;
  }

  FUNC_9("dumping database \"%s\"", VAR_8);

  FUNC_7(VAR_0, "--\n-- Database \"%s\" dump\n--\n\n", VAR_8);
  if (FUNC_12(VAR_8, "template1") == 0 || FUNC_12(VAR_8, "postgres") == 0)
  {
   if (VAR_4)
    VAR_9 = "--clean --create";
   else
   {
    VAR_9 = "";

    FUNC_7(VAR_0, "\\connect %s\n\n", VAR_8);
   }
  }
  else
   VAR_9 = "--create";

  if (VAR_3)
   FUNC_5(VAR_0);

  VAR_10 = FUNC_10(VAR_8, VAR_9);
  if (VAR_10 != 0)
  {
   FUNC_8("pg_dump failed on database \"%s\", exiting", VAR_8);
   FUNC_4(1);
  }

  if (VAR_3)
  {
   VAR_0 = FUNC_6(VAR_3, VAR_1);
   if (!VAR_0)
   {
    FUNC_8("could not re-open the output file \"%s\": %m",
        VAR_3);
    FUNC_4(1);
   }
  }

 }

 FUNC_0(VAR_6);
}
