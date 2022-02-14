
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_10__ {scalar_t__ stanullfrac; } ;
struct TYPE_9__ {int opno; } ;
typedef double Selectivity ;
typedef int PlannerInfo ;
typedef TYPE_2__ OpExpr ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_3__* Form_pg_statistic ;
typedef int Expr ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int const VAR_1 ;

 int const VAR_2 ;

 int FUNC_1 (double) ;
 double VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int *,int *,int ,TYPE_1__*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int,int*,int *,int *) ;
 int FUNC_9 (int ,int ,int ,int const) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_1__*,int ,int *,int *) ;
 int FUNC_12 (int *) ;
 double FUNC_13 (int *,int ,int,int,TYPE_1__*,int ,int ) ;

void
FUNC_14(PlannerInfo *VAR_4, Node *VAR_5,
     Oid VAR_6, int VAR_7, bool VAR_8,
     Selectivity *VAR_9, Selectivity *VAR_10,
     Selectivity *VAR_11, Selectivity *VAR_12)
{
 Node *VAR_13,
      *VAR_14;
 VariableStatData VAR_15,
    VAR_16;
 int VAR_17;
 Oid VAR_18;
 Oid VAR_19;
 Oid VAR_20,
    VAR_21,
    VAR_22,
    VAR_23,
    VAR_24,
    VAR_25,
    VAR_26,
    VAR_27,
    VAR_28;
 bool VAR_29;
 Datum VAR_30,
    VAR_31,
    VAR_32,
    VAR_33;
 double VAR_34;



 *VAR_9 = *VAR_11 = 0.0;
 *VAR_10 = *VAR_12 = 1.0;


 if (!FUNC_12(VAR_5))
  return;
 VAR_20 = ((OpExpr *) VAR_5)->opno;
 VAR_13 = FUNC_7((Expr *) VAR_5);
 VAR_14 = FUNC_10((Expr *) VAR_5);
 if (!VAR_14)
  return;


 FUNC_6(VAR_4, VAR_13, 0, &VAR_15);
 FUNC_6(VAR_4, VAR_14, 0, &VAR_16);


 FUNC_8(VAR_20, VAR_6, 0,
          &VAR_17,
          &VAR_18,
          &VAR_19);
 FUNC_0(VAR_17 == VAR_0);
 switch (VAR_7)
 {
  case 128:
   VAR_29 = 0;
   if (VAR_18 == VAR_19)
   {

    VAR_25 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             128);
    VAR_26 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             VAR_2);
    VAR_21 = VAR_25;
    VAR_22 = VAR_25;
    VAR_23 = VAR_21;
    VAR_24 = VAR_22;
    VAR_27 = VAR_25;
    VAR_28 = VAR_26;
   }
   else
   {
    VAR_25 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             128);
    VAR_26 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             VAR_2);
    VAR_21 = FUNC_9(VAR_6,
             VAR_18, VAR_18,
             128);
    VAR_22 = FUNC_9(VAR_6,
             VAR_19, VAR_19,
             128);
    VAR_23 = VAR_21;
    VAR_24 = VAR_22;
    VAR_27 = FUNC_9(VAR_6,
             VAR_19, VAR_18,
             128);
    VAR_28 = FUNC_9(VAR_6,
             VAR_19, VAR_18,
             VAR_2);
   }
   break;
  case 129:

   VAR_29 = 1;
   if (VAR_18 == VAR_19)
   {

    VAR_25 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             129);
    VAR_26 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             VAR_1);
    VAR_21 = VAR_25;
    VAR_22 = VAR_25;
    VAR_23 = FUNC_9(VAR_6,
             VAR_18, VAR_18,
             128);
    VAR_24 = VAR_23;
    VAR_27 = VAR_25;
    VAR_28 = VAR_26;
   }
   else
   {
    VAR_25 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             129);
    VAR_26 = FUNC_9(VAR_6,
             VAR_18, VAR_19,
             VAR_1);
    VAR_21 = FUNC_9(VAR_6,
             VAR_18, VAR_18,
             129);
    VAR_22 = FUNC_9(VAR_6,
             VAR_19, VAR_19,
             129);
    VAR_23 = FUNC_9(VAR_6,
             VAR_18, VAR_18,
             128);
    VAR_24 = FUNC_9(VAR_6,
             VAR_19, VAR_19,
             128);
    VAR_27 = FUNC_9(VAR_6,
             VAR_19, VAR_18,
             129);
    VAR_28 = FUNC_9(VAR_6,
             VAR_19, VAR_18,
             VAR_1);
   }
   break;
  default:
   goto fail;
 }

 if (!FUNC_4(VAR_21) ||
  !FUNC_4(VAR_22) ||
  !FUNC_4(VAR_23) ||
  !FUNC_4(VAR_24) ||
  !FUNC_4(VAR_25) ||
  !FUNC_4(VAR_26) ||
  !FUNC_4(VAR_27) ||
  !FUNC_4(VAR_28))
  goto fail;


 if (!VAR_29)
 {
  if (!FUNC_11(VAR_4, &VAR_15, VAR_23,
        &VAR_30, &VAR_31))
   goto fail;
  if (!FUNC_11(VAR_4, &VAR_16, VAR_24,
        &VAR_32, &VAR_33))
   goto fail;
 }
 else
 {

  if (!FUNC_11(VAR_4, &VAR_15, VAR_23,
        &VAR_31, &VAR_30))
   goto fail;
  if (!FUNC_11(VAR_4, &VAR_16, VAR_24,
        &VAR_33, &VAR_32))
   goto fail;
 }






 VAR_34 = FUNC_13(VAR_4, VAR_26, VAR_29, 1, &VAR_15,
        VAR_33, VAR_19);
 if (VAR_34 != VAR_3)
  *VAR_10 = VAR_34;


 VAR_34 = FUNC_13(VAR_4, VAR_28, VAR_29, 1, &VAR_16,
        VAR_31, VAR_18);
 if (VAR_34 != VAR_3)
  *VAR_12 = VAR_34;







 if (*VAR_10 > *VAR_12)
  *VAR_10 = 1.0;
 else if (*VAR_10 < *VAR_12)
  *VAR_12 = 1.0;
 else
  *VAR_10 = *VAR_12 = 1.0;







 VAR_34 = FUNC_13(VAR_4, VAR_25, VAR_29, 0, &VAR_15,
        VAR_32, VAR_19);
 if (VAR_34 != VAR_3)
  *VAR_9 = VAR_34;


 VAR_34 = FUNC_13(VAR_4, VAR_27, VAR_29, 0, &VAR_16,
        VAR_30, VAR_18);
 if (VAR_34 != VAR_3)
  *VAR_11 = VAR_34;







 if (*VAR_9 < *VAR_11)
  *VAR_9 = 0.0;
 else if (*VAR_9 > *VAR_11)
  *VAR_11 = 0.0;
 else
  *VAR_9 = *VAR_11 = 0.0;







 if (VAR_8)
 {
  Form_pg_statistic VAR_35;

  if (FUNC_3(VAR_15.statsTuple))
  {
   VAR_35 = (Form_pg_statistic) FUNC_2(VAR_15.statsTuple);
   *VAR_9 += VAR_35->stanullfrac;
   FUNC_1(*VAR_9);
   *VAR_10 += VAR_35->stanullfrac;
   FUNC_1(*VAR_10);
  }
  if (FUNC_3(VAR_16.statsTuple))
  {
   VAR_35 = (Form_pg_statistic) FUNC_2(VAR_16.statsTuple);
   *VAR_11 += VAR_35->stanullfrac;
   FUNC_1(*VAR_11);
   *VAR_12 += VAR_35->stanullfrac;
   FUNC_1(*VAR_12);
  }
 }


 if (*VAR_9 >= *VAR_10)
 {
  *VAR_9 = 0.0;
  *VAR_10 = 1.0;
 }
 if (*VAR_11 >= *VAR_12)
 {
  *VAR_11 = 0.0;
  *VAR_12 = 1.0;
 }

fail:
 FUNC_5(VAR_15);
 FUNC_5(VAR_16);
}
