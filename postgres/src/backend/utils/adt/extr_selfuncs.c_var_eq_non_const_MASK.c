
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int statsTuple; TYPE_1__* rel; scalar_t__ isunique; } ;
typedef TYPE_2__ VariableStatData ;
struct TYPE_12__ {scalar_t__ nnumbers; double* numbers; } ;
struct TYPE_11__ {double stanullfrac; } ;
struct TYPE_9__ {double tuples; } ;
typedef int Oid ;
typedef int Node ;
typedef TYPE_3__* Form_pg_statistic ;
typedef TYPE_4__ AttStatsSlot ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,int ,int ,int ) ;
 double FUNC_5 (TYPE_2__*,int*) ;

double
FUNC_6(VariableStatData *VAR_3, Oid VAR_4,
     Node *VAR_5,
     bool VAR_6, bool VAR_7)
{
 double VAR_8;
 double VAR_9 = 0.0;
 bool VAR_10;




 if (FUNC_2(VAR_3->statsTuple))
 {
  Form_pg_statistic VAR_11;

  VAR_11 = (Form_pg_statistic) FUNC_1(VAR_3->statsTuple);
  VAR_9 = VAR_11->stanullfrac;
 }
 if (VAR_3->isunique && VAR_3->rel && VAR_3->rel->tuples >= 1.0)
 {
  VAR_8 = 1.0 / VAR_3->rel->tuples;
 }
 else if (FUNC_2(VAR_3->statsTuple))
 {
  double VAR_12;
  AttStatsSlot VAR_13;
  VAR_8 = 1.0 - VAR_9;
  VAR_12 = FUNC_5(VAR_3, &VAR_10);
  if (VAR_12 > 1)
   VAR_8 /= VAR_12;





  if (FUNC_4(&VAR_13, VAR_3->statsTuple,
        VAR_2, VAR_1,
        VAR_0))
  {
   if (VAR_13.nnumbers > 0 && VAR_8 > VAR_13.numbers[0])
    VAR_8 = VAR_13.numbers[0];
   FUNC_3(&VAR_13);
  }
 }
 else
 {





  VAR_8 = 1.0 / FUNC_5(VAR_3, &VAR_10);
 }


 if (VAR_7)
  VAR_8 = 1.0 - VAR_8 - VAR_9;


 FUNC_0(VAR_8);

 return VAR_8;
}
