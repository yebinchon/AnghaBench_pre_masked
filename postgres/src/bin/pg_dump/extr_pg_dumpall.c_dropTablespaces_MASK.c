
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_6(PGconn *VAR_2)
{
 PGresult *VAR_3;
 int VAR_4;





 VAR_3 = FUNC_3(VAR_2, "SELECT spcname "
        "FROM pg_catalog.pg_tablespace "
        "WHERE spcname !~ '^pg_' "
        "ORDER BY 1");

 if (FUNC_2(VAR_3) > 0)
  FUNC_5(VAR_0, "--\n-- Drop tablespaces\n--\n\n");

 for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3); VAR_4++)
 {
  char *VAR_5 = FUNC_1(VAR_3, VAR_4, 0);

  FUNC_5(VAR_0, "DROP TABLESPACE %s%d;\n",
    VAR_1 ? "IF EXISTS " : "",
    FUNC_4(VAR_5));
 }

 FUNC_0(VAR_3);

 FUNC_5(VAR_0, "\n\n");
}
