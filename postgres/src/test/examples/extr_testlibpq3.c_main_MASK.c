
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int binaryIntVal ;
typedef int PGresult ;
typedef int PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 char* FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*,int,int *,char const**,int*,int*,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_3 ;

int
FUNC_12(int VAR_4, char **VAR_5)
{
 const char *VAR_6;
 PGconn *VAR_7;
 PGresult *VAR_8;
 const char *VAR_9[1];
 int VAR_10[1];
 int VAR_11[1];
 uint32_t VAR_12;






 if (VAR_4 > 1)
  VAR_6 = VAR_5[1];
 else
  VAR_6 = "dbname = postgres";


 VAR_7 = FUNC_1(VAR_6);


 if (FUNC_7(VAR_7) != VAR_0)
 {
  FUNC_9(VAR_3, "Connection to database failed: %s",
    FUNC_2(VAR_7));
  FUNC_8(VAR_7);
 }


 VAR_8 = FUNC_3(VAR_7, "SET search_path = testlibpq3");
 if (FUNC_6(VAR_8) != VAR_1)
 {
  FUNC_9(VAR_3, "SET failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_8(VAR_7);
 }
 FUNC_0(VAR_8);
 VAR_9[0] = "joe's place";

 VAR_8 = FUNC_4(VAR_7,
        "SELECT * FROM test1 WHERE t = $1",
        1,
        ((void*)0),
        VAR_9,
        ((void*)0),
        ((void*)0),
        1);

 if (FUNC_6(VAR_8) != VAR_2)
 {
  FUNC_9(VAR_3, "SELECT failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_8(VAR_7);
 }

 FUNC_11(VAR_8);

 FUNC_0(VAR_8);
 VAR_12 = FUNC_10((uint32_t) 2);


 VAR_9[0] = (char *) &VAR_12;
 VAR_10[0] = sizeof(VAR_12);
 VAR_11[0] = 1;

 VAR_8 = FUNC_4(VAR_7,
        "SELECT * FROM test1 WHERE i = $1::int4",
        1,
        ((void*)0),
        VAR_9,
        VAR_10,
        VAR_11,
        1);

 if (FUNC_6(VAR_8) != VAR_2)
 {
  FUNC_9(VAR_3, "SELECT failed: %s", FUNC_2(VAR_7));
  FUNC_0(VAR_8);
  FUNC_8(VAR_7);
 }

 FUNC_11(VAR_8);

 FUNC_0(VAR_8);


 FUNC_5(VAR_7);

 return 0;
}
