
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;
typedef int ClusterInfo ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,char*) ;
 int * FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(ClusterInfo *VAR_0)
{
 int VAR_1;
 PGconn *VAR_2;
 PGresult *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_9("Checking database connection settings");

 VAR_2 = FUNC_6(VAR_0, "template1");


 VAR_3 = FUNC_7(VAR_2,
         "SELECT	datname, datallowconn "
         "FROM	pg_catalog.pg_database");

 VAR_5 = FUNC_2(VAR_3, "datname");
 VAR_6 = FUNC_2(VAR_3, "datallowconn");

 VAR_4 = FUNC_4(VAR_3);
 for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++)
 {
  char *VAR_7 = FUNC_3(VAR_3, VAR_1, VAR_5);
  char *VAR_8 = FUNC_3(VAR_3, VAR_1, VAR_6);

  if (FUNC_10(VAR_7, "template0") == 0)
  {

   if (FUNC_10(VAR_8, "t") == 0)
    FUNC_8("template0 must not allow connections, "
       "i.e. its pg_database.datallowconn must be false\n");
  }
  else
  {




   if (FUNC_10(VAR_8, "f") == 0)
    FUNC_8("All non-template0 databases must allow connections, "
       "i.e. their pg_database.datallowconn must be true\n");
  }
 }

 FUNC_0(VAR_3);

 FUNC_1(VAR_2);

 FUNC_5();
}
