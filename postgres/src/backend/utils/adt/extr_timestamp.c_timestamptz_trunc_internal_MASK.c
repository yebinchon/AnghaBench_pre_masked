
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
struct pg_tm {int tm_year; int tm_mon; int tm_mday; int tm_sec; int tm_min; int tm_hour; } ;
typedef int pg_tz ;
typedef int fsec_t ;
typedef scalar_t__ TimestampTz ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (struct pg_tm*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int,int) ;
 char* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,int*,int*,int*) ;
 scalar_t__ FUNC_10 (scalar_t__,int*,struct pg_tm*,int*,int *,int *) ;
 scalar_t__ FUNC_11 (struct pg_tm*,int,int*,scalar_t__*) ;

__attribute__((used)) static TimestampTz
FUNC_12(text *VAR_6, TimestampTz VAR_7, pg_tz *VAR_8)
{
 TimestampTz VAR_9;
 int VAR_10;
 int VAR_11,
    VAR_12;
 bool VAR_13 = 0;
 char *VAR_14;
 fsec_t VAR_15;
 struct pg_tm VAR_16,
      *VAR_17 = &VAR_16;

 VAR_14 = FUNC_5(FUNC_2(VAR_6),
           FUNC_3(VAR_6),
           0);

 VAR_11 = FUNC_0(0, VAR_14, &VAR_12);

 if (VAR_11 == VAR_5)
 {
  if (FUNC_10(VAR_7, &VAR_10, VAR_17, &VAR_15, ((void*)0), VAR_8) != 0)
   FUNC_6(VAR_3,
     (FUNC_7(VAR_0),
      FUNC_8("timestamp out of range")));

  switch (VAR_12)
  {
   case 129:
    {
     int VAR_18;

     VAR_18 = FUNC_4(VAR_17->tm_year, VAR_17->tm_mon, VAR_17->tm_mday);






     if (VAR_18 >= 52 && VAR_17->tm_mon == 1)
      --VAR_17->tm_year;
     if (VAR_18 <= 1 && VAR_17->tm_mon == VAR_4)
      ++VAR_17->tm_year;
     FUNC_9(VAR_18, &(VAR_17->tm_year), &(VAR_17->tm_mon), &(VAR_17->tm_mday));
     VAR_17->tm_hour = 0;
     VAR_17->tm_min = 0;
     VAR_17->tm_sec = 0;
     VAR_15 = 0;
     VAR_13 = 1;
     break;
    }

   case 135:






    if (VAR_17->tm_year > 0)
     VAR_17->tm_year = ((VAR_17->tm_year + 999) / 1000) * 1000 - 999;
    else
     VAR_17->tm_year = -((999 - (VAR_17->tm_year - 1)) / 1000) * 1000 + 1;

   case 140:

    if (VAR_17->tm_year > 0)
     VAR_17->tm_year = ((VAR_17->tm_year + 99) / 100) * 100 - 99;
    else
     VAR_17->tm_year = -((99 - (VAR_17->tm_year - 1)) / 100) * 100 + 1;

   case 138:





    if (VAR_12 != 135 && VAR_12 != 140)
    {
     if (VAR_17->tm_year > 0)
      VAR_17->tm_year = (VAR_17->tm_year / 10) * 10;
     else
      VAR_17->tm_year = -((8 - (VAR_17->tm_year - 1)) / 10) * 10;
    }

   case 128:
    VAR_17->tm_mon = 1;

   case 131:
    VAR_17->tm_mon = (3 * ((VAR_17->tm_mon - 1) / 3)) + 1;

   case 132:
    VAR_17->tm_mday = 1;

   case 139:
    VAR_17->tm_hour = 0;
    VAR_13 = 1;

   case 137:
    VAR_17->tm_min = 0;

   case 133:
    VAR_17->tm_sec = 0;

   case 130:
    VAR_15 = 0;
    break;
   case 134:
    VAR_15 = (VAR_15 / 1000) * 1000;
    break;
   case 136:
    break;

   default:
    FUNC_6(VAR_3,
      (FUNC_7(VAR_1),
       FUNC_8("timestamp with time zone units \"%s\" not "
        "supported", VAR_14)));
    VAR_9 = 0;
  }

  if (VAR_13)
   VAR_10 = FUNC_1(VAR_17, VAR_8);

  if (FUNC_11(VAR_17, VAR_15, &VAR_10, &VAR_9) != 0)
   FUNC_6(VAR_3,
     (FUNC_7(VAR_0),
      FUNC_8("timestamp out of range")));
 }
 else
 {
  FUNC_6(VAR_3,
    (FUNC_7(VAR_2),
     FUNC_8("timestamp with time zone units \"%s\" not recognized",
      VAR_14)));
  VAR_9 = 0;
 }

 return VAR_9;
}
