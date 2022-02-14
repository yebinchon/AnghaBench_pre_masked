
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_isdst; int tm_mday; int tm_mon; int tm_year; } ;
typedef int fsec_t ;
typedef int TimestampTz ;
typedef int Timestamp ;
typedef int TimeTzADT ;
typedef int TimeADT ;
typedef int Oid ;
typedef int Datum ;
typedef scalar_t__ DateADT ;



 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct pg_tm*,int ,char*) ;
 int FUNC_7 (struct pg_tm*,int ,int,int,char const*,int ,char*) ;
 int FUNC_8 (scalar_t__,char*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (struct pg_tm*,int ,int,int,int ,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int FUNC_11 (int) ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (scalar_t__,int *,int *,int *) ;
 char* FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,struct pg_tm*,int *) ;
 int FUNC_19 (int,int*,struct pg_tm*,int *,char const**,int *) ;
 int FUNC_20 (int *,struct pg_tm*,int *,int*) ;

char *
FUNC_21(char *VAR_6, Datum VAR_7, Oid VAR_8, const int *VAR_9)
{
 if (!VAR_6)
  VAR_6 = FUNC_17(VAR_2 + 1);

 switch (VAR_8)
 {
  case 132:
   {
    DateADT VAR_10;
    struct pg_tm VAR_11;

    VAR_10 = FUNC_1(VAR_7);


    if (FUNC_0(VAR_10))
     FUNC_8(VAR_10, VAR_6);
    else
    {
     FUNC_16(VAR_10 + VAR_3,
         &(VAR_11.tm_year), &(VAR_11.tm_mon), &(VAR_11.tm_mday));
     FUNC_6(&VAR_11, VAR_5, VAR_6);
    }
   }
   break;
  case 131:
   {
    TimeADT VAR_12 = FUNC_2(VAR_7);
    struct pg_tm VAR_13,
         *VAR_14 = &VAR_13;
    fsec_t VAR_15;


    FUNC_18(VAR_12, VAR_14, &VAR_15);
    FUNC_10(VAR_14, VAR_15, 0, 0, VAR_5, VAR_6);
   }
   break;
  case 128:
   {
    TimeTzADT *VAR_16 = FUNC_3(VAR_7);
    struct pg_tm VAR_17,
         *VAR_18 = &VAR_17;
    fsec_t VAR_19;
    int VAR_20;


    FUNC_20(VAR_16, VAR_18, &VAR_19, &VAR_20);
    FUNC_10(VAR_18, VAR_19, 1, VAR_20, VAR_5, VAR_6);
   }
   break;
  case 130:
   {
    Timestamp VAR_21;
    struct pg_tm VAR_22;
    fsec_t VAR_23;

    VAR_21 = FUNC_4(VAR_7);

    if (FUNC_11(VAR_21))
     FUNC_9(VAR_21, VAR_6);
    else if (FUNC_19(VAR_21, ((void*)0), &VAR_22, &VAR_23, ((void*)0), ((void*)0)) == 0)
     FUNC_7(&VAR_22, VAR_23, 0, 0, ((void*)0), VAR_5, VAR_6);
    else
     FUNC_13(VAR_1,
       (FUNC_14(VAR_0),
        FUNC_15("timestamp out of range")));
   }
   break;
  case 129:
   {
    TimestampTz VAR_24;
    struct pg_tm VAR_25;
    int VAR_26;
    fsec_t VAR_27;
    const char *VAR_28 = ((void*)0);

    VAR_24 = FUNC_5(VAR_7);







    if (VAR_9)
    {
     VAR_26 = *VAR_9;
     VAR_24 -= (TimestampTz) VAR_26 * VAR_4;
    }


    if (FUNC_11(VAR_24))
     FUNC_9(VAR_24, VAR_6);
    else if (FUNC_19(VAR_24, VAR_9 ? ((void*)0) : &VAR_26, &VAR_25, &VAR_27,
           VAR_9 ? ((void*)0) : &VAR_28, ((void*)0)) == 0)
    {
     if (VAR_9)
      VAR_25.tm_isdst = 1;

     FUNC_7(&VAR_25, VAR_27, 1, VAR_26, VAR_28, VAR_5, VAR_6);
    }
    else
     FUNC_13(VAR_1,
       (FUNC_14(VAR_0),
        FUNC_15("timestamp out of range")));
   }
   break;
  default:
   FUNC_12(VAR_1, "unknown jsonb value datetime type oid %d", VAR_8);
   return ((void*)0);
 }

 return VAR_6;
}
