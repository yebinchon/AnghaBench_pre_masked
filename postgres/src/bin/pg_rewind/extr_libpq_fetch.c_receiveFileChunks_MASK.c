
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char int64 ;
typedef int PGresult ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 char* FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char const*,int ,int *,int *,int *,int *,int) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*,...) ;
 char* FUNC_19 (int) ;
 char FUNC_20 (char) ;
 int FUNC_21 (char*,int) ;
 int FUNC_22 (char*,char,int) ;

__attribute__((used)) static void
FUNC_23(const char *VAR_4)
{
 PGresult *VAR_5;

 if (FUNC_12(VAR_3, VAR_4, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 1) != 1)
  FUNC_16("could not send query: %s", FUNC_1(VAR_3));

 FUNC_18("getting file chunks");

 if (FUNC_13(VAR_3) != 1)
  FUNC_16("could not set libpq connection to single row mode");

 while ((VAR_5 = FUNC_4(VAR_3)) != ((void*)0))
 {
  char *VAR_6;
  int VAR_7;
  int64 VAR_8;
  int VAR_9;
  char *VAR_10;

  switch (FUNC_11(VAR_5))
  {
   case 129:
    break;

   case 128:
    FUNC_0(VAR_5);
    continue;

   default:
    FUNC_16("unexpected result while fetching remote files: %s",
       FUNC_10(VAR_5));
  }


  if (FUNC_8(VAR_5) != 3 || FUNC_9(VAR_5) != 1)
   FUNC_16("unexpected result set size while fetching remote files");

  if (FUNC_3(VAR_5, 0) != VAR_2 ||
   FUNC_3(VAR_5, 1) != VAR_1 ||
   FUNC_3(VAR_5, 2) != VAR_0)
  {
   FUNC_16("unexpected data types in result set while fetching remote files: %u %u %u",
      FUNC_3(VAR_5, 0), FUNC_3(VAR_5, 1), FUNC_3(VAR_5, 2));
  }

  if (FUNC_2(VAR_5, 0) != 1 &&
   FUNC_2(VAR_5, 1) != 1 &&
   FUNC_2(VAR_5, 2) != 1)
  {
   FUNC_16("unexpected result format while fetching remote files");
  }

  if (FUNC_5(VAR_5, 0, 0) ||
   FUNC_5(VAR_5, 0, 1))
  {
   FUNC_16("unexpected null values in result while fetching remote files");
  }

  if (FUNC_6(VAR_5, 0, 1) != sizeof(int64))
   FUNC_16("unexpected result length while fetching remote files");


  FUNC_14(&VAR_8, FUNC_7(VAR_5, 0, 1), sizeof(int64));
  VAR_8 = FUNC_20(VAR_8);
  VAR_9 = FUNC_6(VAR_5, 0, 2);

  VAR_7 = FUNC_6(VAR_5, 0, 0);
  VAR_6 = FUNC_19(VAR_7 + 1);
  FUNC_14(VAR_6, FUNC_7(VAR_5, 0, 0), VAR_7);
  VAR_6[VAR_7] = '\0';

  VAR_10 = FUNC_7(VAR_5, 0, 2);
  if (FUNC_5(VAR_5, 0, 2))
  {
   FUNC_18("received null value for chunk for file \"%s\", file has been deleted",
       VAR_6);
   FUNC_21(VAR_6, 1);
   FUNC_17(VAR_6);
   FUNC_0(VAR_5);
   continue;
  }

  FUNC_18("received chunk for file \"%s\", offset %lld, size %d",
      VAR_6, (long long int) VAR_8, VAR_9);

  FUNC_15(VAR_6, 0);

  FUNC_22(VAR_10, VAR_8, VAR_9);

  FUNC_17(VAR_6);

  FUNC_0(VAR_5);
 }
}
