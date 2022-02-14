
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_14__ {int nnumbers; int numbers; int nvalues; int values; } ;
struct TYPE_13__ {double stanullfrac; } ;
struct TYPE_12__ {scalar_t__ size; } ;
typedef TYPE_2__* TSQuery ;
typedef double Selectivity ;
typedef TYPE_3__* Form_pg_statistic ;
typedef int Datum ;
typedef TYPE_4__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ,int ,int) ;
 double FUNC_5 (TYPE_2__*,int ,int ,int ,int ) ;
 double FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static Selectivity
FUNC_7(VariableStatData *VAR_4, Datum VAR_5)
{
 Selectivity VAR_6;
 TSQuery VAR_7;


 VAR_7 = FUNC_0(VAR_5);


 if (VAR_7->size == 0)
  return (Selectivity) 0.0;

 if (FUNC_2(VAR_4->statsTuple))
 {
  Form_pg_statistic VAR_8;
  AttStatsSlot VAR_9;

  VAR_8 = (Form_pg_statistic) FUNC_1(VAR_4->statsTuple);


  if (FUNC_4(&VAR_9, VAR_4->statsTuple,
        VAR_3, VAR_2,
        VAR_1 | VAR_0))
  {




   VAR_6 = FUNC_5(VAR_7, VAR_9.values, VAR_9.nvalues,
           VAR_9.numbers, VAR_9.nnumbers);
   FUNC_3(&VAR_9);
  }
  else
  {

   VAR_6 = FUNC_6(VAR_7);
  }




  VAR_6 *= (1.0 - VAR_8->stanullfrac);
 }
 else
 {

  VAR_6 = FUNC_6(VAR_7);

 }

 return VAR_6;
}
