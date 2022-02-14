
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* rel; int statsTuple; } ;
typedef TYPE_2__ VariableStatData ;
struct TYPE_13__ {scalar_t__ nnumbers; double* numbers; } ;
struct TYPE_12__ {double stanullfrac; } ;
struct TYPE_10__ {double tuples; double rows; } ;
typedef double Selectivity ;
typedef int PlannerInfo ;
typedef int Node ;
typedef TYPE_3__* Form_pg_statistic ;
typedef TYPE_4__ AttStatsSlot ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (double,double) ;
 int FUNC_3 (TYPE_2__) ;
 int VAR_2 ;
 double FUNC_4 (double) ;
 int FUNC_5 (int *,int *,int ,TYPE_2__*) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ,int ,int ) ;
 double FUNC_8 (TYPE_2__*,int*) ;

void
FUNC_9(PlannerInfo *VAR_3, Node *VAR_4, double VAR_5,
         Selectivity *VAR_6,
         Selectivity *VAR_7)
{
 VariableStatData VAR_8;
 double VAR_9,
    VAR_10,
    VAR_11,
    VAR_12;
 bool VAR_13;
 AttStatsSlot VAR_14;

 FUNC_5(VAR_3, VAR_4, 0, &VAR_8);


 *VAR_6 = 0.0;

 if (FUNC_1(VAR_8.statsTuple))
 {
  if (FUNC_7(&VAR_14, VAR_8.statsTuple,
        VAR_2, VAR_1,
        VAR_0))
  {



   if (VAR_14.nnumbers > 0)
    *VAR_6 = VAR_14.numbers[0];
   FUNC_6(&VAR_14);
  }
 }


 VAR_10 = FUNC_8(&VAR_8, &VAR_13);





 if (VAR_13)
 {
  *VAR_7 = (Selectivity) FUNC_2(0.1, *VAR_6);
  FUNC_3(VAR_8);
  return;
 }


 if (FUNC_1(VAR_8.statsTuple))
 {
  Form_pg_statistic VAR_15;

  VAR_15 = (Form_pg_statistic) FUNC_0(VAR_8.statsTuple);
  VAR_11 = VAR_15->stanullfrac;
 }
 else
  VAR_11 = 0.0;


 VAR_12 = (1.0 - VAR_11) / VAR_10;
 if (VAR_8.rel && VAR_8.rel->tuples > 0)
 {
  VAR_10 *= VAR_8.rel->rows / VAR_8.rel->tuples;
  VAR_10 = FUNC_4(VAR_10);
 }






 if (VAR_10 > VAR_5)
  VAR_9 = 1.0 / VAR_5;
 else
  VAR_9 = 1.0 / VAR_10;




 if (VAR_12 > 0.0 && *VAR_6 > VAR_12)
  VAR_9 *= *VAR_6 / VAR_12;






 if (VAR_9 < 1.0e-6)
  VAR_9 = 1.0e-6;
 else if (VAR_9 > 1.0)
  VAR_9 = 1.0;

 *VAR_7 = (Selectivity) VAR_9;

 FUNC_3(VAR_8);
}
