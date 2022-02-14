
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int statsTuple; TYPE_1__* rel; scalar_t__ isunique; } ;
typedef TYPE_2__ VariableStatData ;
struct TYPE_13__ {int nvalues; double* numbers; int nnumbers; int * values; int stacoll; } ;
struct TYPE_12__ {double stanullfrac; } ;
struct TYPE_10__ {double tuples; } ;
typedef int Oid ;
typedef TYPE_3__* Form_pg_statistic ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef TYPE_4__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int ,int ,int ,int) ;
 int FUNC_8 (int ) ;
 double FUNC_9 (TYPE_2__*,int*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ) ;

double
FUNC_11(VariableStatData *VAR_4, Oid VAR_5,
    Datum VAR_6, bool VAR_7,
    bool VAR_8, bool VAR_9)
{
 double VAR_10;
 double VAR_11 = 0.0;
 bool VAR_12;
 Oid VAR_13;





 if (VAR_7)
  return 0.0;





 if (FUNC_4(VAR_4->statsTuple))
 {
  Form_pg_statistic VAR_14;

  VAR_14 = (Form_pg_statistic) FUNC_3(VAR_4->statsTuple);
  VAR_11 = VAR_14->stanullfrac;
 }
 if (VAR_4->isunique && VAR_4->rel && VAR_4->rel->tuples >= 1.0)
 {
  VAR_10 = 1.0 / VAR_4->rel->tuples;
 }
 else if (FUNC_4(VAR_4->statsTuple) &&
    FUNC_10(VAR_4,
             (VAR_13 = FUNC_8(VAR_5))))
 {
  AttStatsSlot VAR_15;
  bool VAR_16 = 0;
  int VAR_17;
  if (FUNC_7(&VAR_15, VAR_4->statsTuple,
        VAR_3, VAR_2,
        VAR_1 | VAR_0))
  {
   FmgrInfo VAR_18;

   FUNC_5(VAR_13, &VAR_18);

   for (VAR_17 = 0; VAR_17 < VAR_15.nvalues; VAR_17++)
   {

    if (VAR_8)
     VAR_16 = FUNC_1(FUNC_2(&VAR_18,
                 VAR_15.stacoll,
                 VAR_15.values[VAR_17],
                 VAR_6));
    else
     VAR_16 = FUNC_1(FUNC_2(&VAR_18,
                 VAR_15.stacoll,
                 VAR_6,
                 VAR_15.values[VAR_17]));
    if (VAR_16)
     break;
   }
  }
  else
  {

   VAR_17 = 0;
  }

  if (VAR_16)
  {




   VAR_10 = VAR_15.numbers[VAR_17];
  }
  else
  {





   double VAR_19 = 0.0;
   double VAR_20;

   for (VAR_17 = 0; VAR_17 < VAR_15.nnumbers; VAR_17++)
    VAR_19 += VAR_15.numbers[VAR_17];
   VAR_10 = 1.0 - VAR_19 - VAR_11;
   FUNC_0(VAR_10);






   VAR_20 = FUNC_9(VAR_4, &VAR_12) -
    VAR_15.nnumbers;
   if (VAR_20 > 1)
    VAR_10 /= VAR_20;





   if (VAR_15.nnumbers > 0 && VAR_10 > VAR_15.numbers[VAR_15.nnumbers - 1])
    VAR_10 = VAR_15.numbers[VAR_15.nnumbers - 1];
  }

  FUNC_6(&VAR_15);
 }
 else
 {





  VAR_10 = 1.0 / FUNC_9(VAR_4, &VAR_12);
 }


 if (VAR_9)
  VAR_10 = 1.0 - VAR_10 - VAR_11;


 FUNC_0(VAR_10);

 return VAR_10;
}
