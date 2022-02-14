
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int uint32 ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;
typedef int PGresult ;
typedef int PGconn ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,int*,int*) ;

bool
FUNC_14(PGconn *VAR_1, char **VAR_2, TimeLineID *VAR_3,
      XLogRecPtr *VAR_4, char **VAR_5)
{
 PGresult *VAR_6;
 uint32 VAR_7,
    VAR_8;


 FUNC_0(VAR_1 != ((void*)0));

 VAR_6 = FUNC_3(VAR_1, "IDENTIFY_SYSTEM");
 if (FUNC_8(VAR_6) != VAR_0)
 {
  FUNC_11("could not send replication command \"%s\": %s",
      "IDENTIFY_SYSTEM", FUNC_2(VAR_1));

  FUNC_1(VAR_6);
  return 0;
 }
 if (FUNC_7(VAR_6) != 1 || FUNC_6(VAR_6) < 3)
 {
  FUNC_11("could not identify system: got %d rows and %d fields, expected %d rows and %d or more fields",
      FUNC_7(VAR_6), FUNC_6(VAR_6), 1, 3);

  FUNC_1(VAR_6);
  return 0;
 }


 if (VAR_2 != ((void*)0))
  *VAR_2 = FUNC_12(FUNC_5(VAR_6, 0, 0));


 if (VAR_3 != ((void*)0))
  *VAR_3 = FUNC_10(FUNC_5(VAR_6, 0, 1));


 if (VAR_4 != ((void*)0))
 {
  if (FUNC_13(FUNC_5(VAR_6, 0, 2), "%X/%X", &VAR_7, &VAR_8) != 2)
  {
   FUNC_11("could not parse write-ahead log location \"%s\"",
       FUNC_5(VAR_6, 0, 2));

   FUNC_1(VAR_6);
   return 0;
  }
  *VAR_4 = ((uint64) VAR_7) << 32 | VAR_8;
 }


 if (VAR_5 != ((void*)0))
 {
  *VAR_5 = ((void*)0);
  if (FUNC_9(VAR_1) >= 90400)
  {
   if (FUNC_6(VAR_6) < 4)
   {
    FUNC_11("could not identify system: got %d rows and %d fields, expected %d rows and %d or more fields",
        FUNC_7(VAR_6), FUNC_6(VAR_6), 1, 4);

    FUNC_1(VAR_6);
    return 0;
   }
   if (!FUNC_4(VAR_6, 0, 3))
    *VAR_5 = FUNC_12(FUNC_5(VAR_6, 0, 3));
  }
 }

 FUNC_1(VAR_6);
 return 1;
}
