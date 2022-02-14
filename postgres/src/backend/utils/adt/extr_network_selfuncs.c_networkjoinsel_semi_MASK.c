
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mcv2_slot ;
typedef int mcv1_slot ;
typedef int hist2_slot ;
typedef int hist1_slot ;
struct TYPE_11__ {TYPE_1__* rel; int statsTuple; } ;
typedef TYPE_2__ VariableStatData ;
struct TYPE_13__ {int nvalues; double* numbers; int * values; } ;
struct TYPE_12__ {double stanullfrac; } ;
struct TYPE_10__ {double rows; } ;
typedef double Selectivity ;
typedef int Oid ;
typedef TYPE_3__* Form_pg_statistic ;
typedef int FmgrInfo ;
typedef TYPE_4__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 double FUNC_9 (int ,int,int *,int,int,int *,int,double,int *,int) ;
 double FUNC_10 (double*,int) ;
 int FUNC_11 (TYPE_4__*,int ,int) ;

__attribute__((used)) static Selectivity
FUNC_12(Oid VAR_6,
     VariableStatData *VAR_7, VariableStatData *VAR_8)
{
 Form_pg_statistic VAR_9;
 Selectivity VAR_10 = 0.0,
    VAR_11 = 0.0,
    VAR_12 = 0.0;
 double VAR_13 = 0.0,
    VAR_14 = 0.0,
    VAR_15 = 0.0;
 bool VAR_16 = 0,
    VAR_17 = 0,
    VAR_18 = 0,
    VAR_19 = 0;
 int VAR_20;
 FmgrInfo VAR_21;
 int VAR_22,
    VAR_23 = 0,
    VAR_24 = 0;
 AttStatsSlot VAR_25;
 AttStatsSlot VAR_26;
 AttStatsSlot VAR_27;
 AttStatsSlot VAR_28;

 if (FUNC_2(VAR_7->statsTuple))
 {
  VAR_9 = (Form_pg_statistic) FUNC_1(VAR_7->statsTuple);
  VAR_13 = VAR_9->stanullfrac;

  VAR_16 = FUNC_6(&VAR_25, VAR_7->statsTuple,
            VAR_5, VAR_2,
            VAR_1 | VAR_0);
  VAR_18 = FUNC_6(&VAR_27, VAR_7->statsTuple,
          VAR_4, VAR_2,
          VAR_1);

  VAR_23 = FUNC_3(VAR_25.nvalues, VAR_3);
  if (VAR_16)
   VAR_11 = FUNC_10(VAR_25.numbers, VAR_23);
 }
 else
 {
  FUNC_11(&VAR_25, 0, sizeof(VAR_25));
  FUNC_11(&VAR_27, 0, sizeof(VAR_27));
 }

 if (FUNC_2(VAR_8->statsTuple))
 {
  VAR_9 = (Form_pg_statistic) FUNC_1(VAR_8->statsTuple);
  VAR_14 = VAR_9->stanullfrac;

  VAR_17 = FUNC_6(&VAR_26, VAR_8->statsTuple,
            VAR_5, VAR_2,
            VAR_1 | VAR_0);
  VAR_19 = FUNC_6(&VAR_28, VAR_8->statsTuple,
          VAR_4, VAR_2,
          VAR_1);

  VAR_24 = FUNC_3(VAR_26.nvalues, VAR_3);
  if (VAR_17)
   VAR_12 = FUNC_10(VAR_26.numbers, VAR_24);
 }
 else
 {
  FUNC_11(&VAR_26, 0, sizeof(VAR_26));
  FUNC_11(&VAR_28, 0, sizeof(VAR_28));
 }

 VAR_20 = FUNC_8(VAR_6);
 FUNC_4(FUNC_7(VAR_6), &VAR_21);


 if (VAR_19 && VAR_8->rel)
  VAR_15 = (1.0 - VAR_14 - VAR_12) * VAR_8->rel->rows;





 if (VAR_16 && (VAR_17 || VAR_19))
 {
  for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
  {
   VAR_10 += VAR_25.numbers[VAR_22] *
    FUNC_9(VAR_25.values[VAR_22],
           VAR_17, VAR_26.values, VAR_24,
           VAR_19,
           VAR_28.values, VAR_28.nvalues,
           VAR_15,
           &VAR_21, VAR_20);
  }
 }
 if (VAR_18 && VAR_27.nvalues > 2 && (VAR_17 || VAR_19))
 {
  double VAR_29 = 0.0;
  int VAR_30,
     VAR_31;

  VAR_30 = (VAR_27.nvalues - 3) / VAR_3 + 1;

  VAR_31 = 0;
  for (VAR_22 = 1; VAR_22 < VAR_27.nvalues - 1; VAR_22 += VAR_30)
  {
   VAR_29 +=
    FUNC_9(VAR_27.values[VAR_22],
           VAR_17, VAR_26.values, VAR_24,
           VAR_19,
           VAR_28.values, VAR_28.nvalues,
           VAR_15,
           &VAR_21, VAR_20);
   VAR_31++;
  }

  VAR_10 += (1.0 - VAR_13 - VAR_11) * VAR_29 / VAR_31;
 }





 if ((!VAR_16 && !VAR_18) || (!VAR_17 && !VAR_19))
  VAR_10 = (1.0 - VAR_13) * (1.0 - VAR_14) * FUNC_0(VAR_6);


 FUNC_5(&VAR_25);
 FUNC_5(&VAR_26);
 FUNC_5(&VAR_27);
 FUNC_5(&VAR_28);

 return VAR_10;
}
