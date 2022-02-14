
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*,int*) ;

__attribute__((used)) static bool
FUNC_12(PGconn *VAR_2)
{
 PGresult *VAR_3;
 int VAR_4;


 FUNC_0(VAR_2 != ((void*)0));


 if (FUNC_8(VAR_2) < VAR_0)
  return 1;

 VAR_3 = FUNC_3(VAR_2, "SHOW data_directory_mode");
 if (FUNC_7(VAR_3) != VAR_1)
 {
  FUNC_10("could not send replication command \"%s\": %s",
      "SHOW data_directory_mode", FUNC_2(VAR_2));

  FUNC_1(VAR_3);
  return 0;
 }
 if (FUNC_6(VAR_3) != 1 || FUNC_5(VAR_3) < 1)
 {
  FUNC_10("could not fetch group access flag: got %d rows and %d fields, expected %d rows and %d or more fields",
      FUNC_6(VAR_3), FUNC_5(VAR_3), 1, 1);

  FUNC_1(VAR_3);
  return 0;
 }

 if (FUNC_11(FUNC_4(VAR_3, 0, 0), "%o", &VAR_4) != 1)
 {
  FUNC_10("group access flag could not be parsed: %s",
      FUNC_4(VAR_3, 0, 0));

  FUNC_1(VAR_3);
  return 0;
 }

 FUNC_9(VAR_4);

 FUNC_1(VAR_3);
 return 1;
}
