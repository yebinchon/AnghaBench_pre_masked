
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_11__ {int val; int len; } ;
struct TYPE_12__ {TYPE_1__ string; void* numeric; } ;
struct TYPE_13__ {TYPE_2__ val; void* type; } ;
typedef int SV ;
typedef TYPE_3__ JsonbValue ;
typedef int JsonbParseState ;
typedef int IV ;
typedef int HV ;
typedef int AV ;


 TYPE_3__* FUNC_0 (int *,int **) ;
 int FUNC_1 (char const*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (double) ;
 TYPE_3__* FUNC_6 (int *,int **) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;


 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 double FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 char* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_24 (double) ;
 int FUNC_25 (double) ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 TYPE_3__* FUNC_26 (int ,TYPE_3__*,int) ;
 int VAR_12 ;
 int FUNC_27 (int) ;
 TYPE_3__* FUNC_28 (int **,int ,TYPE_3__*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int *) ;

__attribute__((used)) static JsonbValue *
FUNC_31(SV *VAR_13, JsonbParseState **VAR_14, bool VAR_15)
{
 VAR_6;
 JsonbValue VAR_16;


 while (FUNC_17(VAR_13))
  VAR_13 = FUNC_18(VAR_13);

 switch (FUNC_19(VAR_13))
 {
  case 129:
   return FUNC_0((AV *) VAR_13, VAR_14);

  case 128:
   return FUNC_6((HV *) VAR_13, VAR_14);

  default:
   if (!FUNC_14(VAR_13))
   {
    VAR_16.type = VAR_9;
   }
   else if (FUNC_20(VAR_13))
   {






    const char *VAR_17 = FUNC_16(VAR_13);

    VAR_16.type = VAR_10;
    VAR_16.val.numeric =
     FUNC_2(FUNC_4(VAR_12,
              FUNC_1(VAR_17),
              FUNC_9(VAR_3),
              FUNC_7(-1)));
   }
   else if (FUNC_10(VAR_13))
   {
    IV VAR_18 = FUNC_11(VAR_13);

    VAR_16.type = VAR_10;
    VAR_16.val.numeric =
     FUNC_2(FUNC_3(VAR_8,
              FUNC_8((int64) VAR_18)));
   }
   else if (FUNC_12(VAR_13))
   {
    double VAR_19 = FUNC_13(VAR_13);
    if (FUNC_24(VAR_19))
     FUNC_21(VAR_2,
       (FUNC_22(VAR_1),
        (FUNC_23("cannot convert infinity to jsonb"))));
    if (FUNC_25(VAR_19))
     FUNC_21(VAR_2,
       (FUNC_22(VAR_1),
        (FUNC_23("cannot convert NaN to jsonb"))));

    VAR_16.type = VAR_10;
    VAR_16.val.numeric =
     FUNC_2(FUNC_3(VAR_7,
              FUNC_5(VAR_19)));
   }
   else if (FUNC_15(VAR_13))
   {
    VAR_16.type = VAR_11;
    VAR_16.val.string.val = FUNC_30(VAR_13);
    VAR_16.val.string.len = FUNC_29(VAR_16.val.string.val);
   }
   else
   {




    FUNC_21(VAR_2,
      (FUNC_22(VAR_0),
       (FUNC_23("cannot transform this Perl type to jsonb"))));
    return ((void*)0);
   }
 }


 return *VAR_14
  ? FUNC_28(VAR_14, VAR_15 ? VAR_4 : VAR_5, &VAR_16)
  : FUNC_26(FUNC_27(sizeof(JsonbValue)), &VAR_16, sizeof(JsonbValue));
}
