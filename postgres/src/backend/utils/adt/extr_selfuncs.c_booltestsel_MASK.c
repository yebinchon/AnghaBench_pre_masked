
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_10__ {scalar_t__ nnumbers; double* numbers; int * values; } ;
struct TYPE_9__ {double stanullfrac; } ;
typedef int SpecialJoinInfo ;
typedef int Selectivity ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int JoinType ;
typedef TYPE_2__* Form_pg_statistic ;
typedef int BoolTestType ;
typedef TYPE_3__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 double VAR_2 ;
 double VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;






 int VAR_5 ;
 int FUNC_4 (TYPE_1__) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *,int *,int,int ,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,int *,int,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,int ,int ,int ,int) ;

Selectivity
FUNC_10(PlannerInfo *VAR_7, BoolTestType VAR_8, Node *VAR_9,
   int VAR_10, JoinType VAR_11, SpecialJoinInfo *VAR_12)
{
 VariableStatData VAR_13;
 double VAR_14;

 FUNC_7(VAR_7, VAR_9, VAR_10, &VAR_13);

 if (FUNC_3(VAR_13.statsTuple))
 {
  Form_pg_statistic VAR_15;
  double VAR_16;
  AttStatsSlot VAR_17;

  VAR_15 = (Form_pg_statistic) FUNC_2(VAR_13.statsTuple);
  VAR_16 = VAR_15->stanullfrac;

  if (FUNC_9(&VAR_17, VAR_13.statsTuple,
        VAR_6, VAR_5,
        VAR_1 | VAR_0)
   && VAR_17.nnumbers > 0)
  {
   double VAR_18;
   double VAR_19;




   if (FUNC_1(VAR_17.values[0]))
    VAR_18 = VAR_17.numbers[0];
   else
    VAR_18 = 1.0 - VAR_17.numbers[0] - VAR_16;





   VAR_19 = 1.0 - VAR_18 - VAR_16;

   switch (VAR_8)
   {
    case 128:

     VAR_14 = VAR_16;
     break;
    case 130:

     VAR_14 = 1.0 - VAR_16;
     break;
    case 129:

     VAR_14 = VAR_18;
     break;
    case 131:

     VAR_14 = 1.0 - VAR_18;
     break;
    case 133:

     VAR_14 = VAR_19;
     break;
    case 132:

     VAR_14 = 1.0 - VAR_19;
     break;
    default:
     FUNC_6(VAR_4, "unrecognized booltesttype: %d",
       (int) VAR_8);
     VAR_14 = 0.0;
     break;
   }

   FUNC_8(&VAR_17);
  }
  else
  {





   switch (VAR_8)
   {
    case 128:

     VAR_14 = VAR_16;
     break;
    case 130:

     VAR_14 = 1.0 - VAR_16;
     break;
    case 129:
    case 133:

     VAR_14 = (1.0 - VAR_16) / 2.0;
     break;
    case 131:
    case 132:


     VAR_14 = (VAR_16 + 1.0) / 2.0;
     break;
    default:
     FUNC_6(VAR_4, "unrecognized booltesttype: %d",
       (int) VAR_8);
     VAR_14 = 0.0;
     break;
   }
  }
 }
 else
 {






  switch (VAR_8)
  {
   case 128:
    VAR_14 = VAR_3;
    break;
   case 130:
    VAR_14 = VAR_2;
    break;
   case 129:
   case 132:
    VAR_14 = (double) FUNC_5(VAR_7, VAR_9,
             VAR_10,
             VAR_11, VAR_12);
    break;
   case 133:
   case 131:
    VAR_14 = 1.0 - (double) FUNC_5(VAR_7, VAR_9,
                VAR_10,
                VAR_11, VAR_12);
    break;
   default:
    FUNC_6(VAR_4, "unrecognized booltesttype: %d",
      (int) VAR_8);
    VAR_14 = 0.0;
    break;
  }
 }

 FUNC_4(VAR_13);


 FUNC_0(VAR_14);

 return (Selectivity) VAR_14;
}
