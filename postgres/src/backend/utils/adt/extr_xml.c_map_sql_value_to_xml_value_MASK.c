
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int * xmlTextWriterPtr ;
typedef int * xmlBufferPtr ;
struct pg_tm {int tm_mday; int tm_mon; int tm_year; } ;
typedef int int16 ;
typedef int fsec_t ;
typedef int bytea ;
typedef int TimestampTz ;
typedef int Timestamp ;
struct TYPE_9__ {int err_occurred; } ;
struct TYPE_8__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ PgXmlErrorContext ;
typedef int Oid ;
typedef int Datum ;
typedef scalar_t__ DateADT ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;



 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct pg_tm*,int ,char*) ;
 int FUNC_8 (struct pg_tm*,int ,int,int,char const*,int ,char*) ;
 int VAR_3 ;
 char* FUNC_9 (int,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 int FUNC_14 (int ) ;
 int VAR_6 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (TYPE_1__*,char*) ;
 int FUNC_18 (int *,int,int ,int,char,int**,int**,int*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*) ;
 char* FUNC_23 (char*) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int,int*,int*) ;
 int FUNC_26 (int,int *,int*,char*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (scalar_t__,int *,int *,int *) ;
 int FUNC_29 (int*) ;
 int FUNC_30 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_31 (int ) ;
 char* FUNC_32 (char const*) ;
 int FUNC_33 (int ,int*,struct pg_tm*,int *,char const**,int *) ;
 scalar_t__ FUNC_34 (int) ;
 scalar_t__ FUNC_35 (int * volatile) ;
 int * FUNC_36 () ;
 int FUNC_37 (int * volatile) ;
 int FUNC_38 (int * volatile) ;
 int * FUNC_39 (int * volatile,int ) ;
 int FUNC_40 (int * volatile,int ,int ,int ) ;
 int FUNC_41 (int * volatile,int ,int ,int ) ;
 int FUNC_42 (TYPE_2__*,int ,int ,char*) ;
 int VAR_9 ;

char *
FUNC_43(Datum VAR_10, Oid VAR_11, bool VAR_12)
{
 if (FUNC_34(VAR_11))
 {
  ArrayType *VAR_13;
  Oid VAR_14;
  int16 VAR_15;
  bool VAR_16;
  char VAR_17;
  int VAR_18;
  Datum *VAR_19;
  bool *VAR_20;
  StringInfoData VAR_21;
  int VAR_22;

  VAR_13 = FUNC_2(VAR_10);
  VAR_14 = FUNC_0(VAR_13);
  FUNC_26(VAR_14, &VAR_15, &VAR_16, &VAR_17);

  FUNC_18(VAR_13, VAR_14,
        VAR_15, VAR_16, VAR_17,
        &VAR_19, &VAR_20,
        &VAR_18);

  FUNC_27(&VAR_21);

  for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++)
  {
   if (VAR_20[VAR_22])
    continue;
   FUNC_17(&VAR_21, "<element>");
   FUNC_17(&VAR_21,
           FUNC_43(VAR_19[VAR_22],
                 VAR_14, 1));
   FUNC_17(&VAR_21, "</element>");
  }

  FUNC_29(VAR_19);
  FUNC_29(VAR_20);

  return VAR_21.data;
 }
 else
 {
  Oid VAR_23;
  bool VAR_24;
  char *VAR_25;





  VAR_11 = FUNC_24(VAR_11);




  switch (VAR_11)
  {
   case 132:
    if (FUNC_3(VAR_10))
     return "true";
    else
     return "false";

   case 130:
    {
     DateADT VAR_26;
     struct pg_tm VAR_27;
     char VAR_28[VAR_3 + 1];

     VAR_26 = FUNC_5(VAR_10);

     if (FUNC_1(VAR_26))
      FUNC_19(VAR_2,
        (FUNC_20(VAR_0),
         FUNC_22("date out of range"),
         FUNC_21("XML does not support infinite date values.")));
     FUNC_28(VAR_26 + VAR_5,
         &(VAR_27.tm_year), &(VAR_27.tm_mon), &(VAR_27.tm_mday));
     FUNC_7(&VAR_27, VAR_6, VAR_28);

     return FUNC_32(VAR_28);
    }

   case 129:
    {
     Timestamp VAR_29;
     struct pg_tm VAR_30;
     fsec_t VAR_31;
     char VAR_32[VAR_3 + 1];

     VAR_29 = FUNC_6(VAR_10);


     if (FUNC_14(VAR_29))
      FUNC_19(VAR_2,
        (FUNC_20(VAR_0),
         FUNC_22("timestamp out of range"),
         FUNC_21("XML does not support infinite timestamp values.")));
     else if (FUNC_33(VAR_29, ((void*)0), &VAR_30, &VAR_31, ((void*)0), ((void*)0)) == 0)
      FUNC_8(&VAR_30, VAR_31, 0, 0, ((void*)0), VAR_6, VAR_32);
     else
      FUNC_19(VAR_2,
        (FUNC_20(VAR_0),
         FUNC_22("timestamp out of range")));

     return FUNC_32(VAR_32);
    }

   case 128:
    {
     TimestampTz VAR_33;
     struct pg_tm VAR_34;
     int VAR_35;
     fsec_t VAR_36;
     const char *VAR_37 = ((void*)0);
     char VAR_38[VAR_3 + 1];

     VAR_33 = FUNC_6(VAR_10);


     if (FUNC_14(VAR_33))
      FUNC_19(VAR_2,
        (FUNC_20(VAR_0),
         FUNC_22("timestamp out of range"),
         FUNC_21("XML does not support infinite timestamp values.")));
     else if (FUNC_33(VAR_33, &VAR_35, &VAR_34, &VAR_36, &VAR_37, ((void*)0)) == 0)
      FUNC_8(&VAR_34, VAR_36, 1, VAR_35, VAR_37, VAR_6, VAR_38);
     else
      FUNC_19(VAR_2,
        (FUNC_20(VAR_0),
         FUNC_22("timestamp out of range")));

     return FUNC_32(VAR_38);
    }
  }




  FUNC_25(VAR_11, &VAR_23, &VAR_24);
  VAR_25 = FUNC_9(VAR_23, VAR_10);


  if (VAR_11 == VAR_8 || !VAR_12)
   return VAR_25;


  return FUNC_23(VAR_25);
 }
}
