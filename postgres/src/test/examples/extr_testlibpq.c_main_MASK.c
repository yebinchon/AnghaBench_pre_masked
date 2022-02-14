
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,char*) ;
 int FUNC_13 (char*,...) ;
 int VAR_3 ;

int
FUNC_14(int VAR_4, char **VAR_5)
{
 const char *VAR_6;
 PGconn *VAR_7;
 PGresult *VAR_8;
 int VAR_9;
 int VAR_10,
    VAR_11;






 if (VAR_4 > 1)
  VAR_6 = VAR_5[1];
 else
  VAR_6 = "dbname = postgres";


 VAR_7 = FUNC_1(VAR_6);


 if (FUNC_10(VAR_7) != VAR_0)
 {
  FUNC_12(VAR_3, "Connection to database failed: %s",
    FUNC_2(VAR_7));
  FUNC_11(VAR_7);
 }


 VAR_8 = FUNC_3(VAR_7,
     "SELECT pg_catalog.set_config('search_path', '', false)");
 if (FUNC_9(VAR_8) != VAR_2)
 {
  FUNC_12(VAR_3, "SET failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_11(VAR_7);
 }





 FUNC_0(VAR_8);
 VAR_8 = FUNC_3(VAR_7, "BEGIN");
 if (FUNC_9(VAR_8) != VAR_1)
 {
  FUNC_12(VAR_3, "BEGIN command failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_11(VAR_7);
 }
 FUNC_0(VAR_8);




 VAR_8 = FUNC_3(VAR_7, "DECLARE myportal CURSOR FOR select * from pg_database");
 if (FUNC_9(VAR_8) != VAR_1)
 {
  FUNC_12(VAR_3, "DECLARE CURSOR failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_11(VAR_7);
 }
 FUNC_0(VAR_8);

 VAR_8 = FUNC_3(VAR_7, "FETCH ALL in myportal");
 if (FUNC_9(VAR_8) != VAR_2)
 {
  FUNC_12(VAR_3, "FETCH ALL failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_11(VAR_7);
 }


 VAR_9 = FUNC_7(VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  FUNC_13("%-15s", FUNC_5(VAR_8, VAR_10));
 FUNC_13("\n\n");


 for (VAR_10 = 0; VAR_10 < FUNC_8(VAR_8); VAR_10++)
 {
  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
   FUNC_13("%-15s", FUNC_6(VAR_8, VAR_10, VAR_11));
  FUNC_13("\n");
 }

 FUNC_0(VAR_8);


 VAR_8 = FUNC_3(VAR_7, "CLOSE myportal");
 FUNC_0(VAR_8);


 VAR_8 = FUNC_3(VAR_7, "END");
 FUNC_0(VAR_8);


 FUNC_4(VAR_7);

 return 0;
}
