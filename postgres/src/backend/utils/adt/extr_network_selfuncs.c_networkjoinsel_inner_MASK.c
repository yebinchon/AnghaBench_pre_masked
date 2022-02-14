
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int mcv2_slot ;
typedef int mcv1_slot ;
typedef int hist2_slot ;
typedef int hist1_slot ;
struct TYPE_9__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_11__ {int nvalues; int values; int numbers; } ;
struct TYPE_10__ {double stanullfrac; } ;
typedef double Selectivity ;
typedef int Oid ;
typedef TYPE_2__* Form_pg_statistic ;
typedef TYPE_3__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ,int) ;
 double FUNC_6 (int ,int ,int ,int ,int) ;
 double FUNC_7 (int ,int ,int,int ,int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,int,int ,int ,int,int ) ;
 int FUNC_9 (int ) ;
 double FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_3__*,int ,int) ;

__attribute__((used)) static Selectivity
FUNC_12(Oid VAR_6,
      VariableStatData *VAR_7, VariableStatData *VAR_8)
{
 Form_pg_statistic VAR_9;
 double VAR_10 = 0.0,
    VAR_11 = 0.0;
 Selectivity VAR_12 = 0.0,
    VAR_13 = 0.0,
    VAR_14 = 0.0;
 bool VAR_15 = 0,
    VAR_16 = 0,
    VAR_17 = 0,
    VAR_18 = 0;
 int VAR_19;
 int VAR_20 = 0,
    VAR_21 = 0;
 AttStatsSlot VAR_22;
 AttStatsSlot VAR_23;
 AttStatsSlot VAR_24;
 AttStatsSlot VAR_25;

 if (FUNC_2(VAR_7->statsTuple))
 {
  VAR_9 = (Form_pg_statistic) FUNC_1(VAR_7->statsTuple);
  VAR_10 = VAR_9->stanullfrac;

  VAR_15 = FUNC_5(&VAR_22, VAR_7->statsTuple,
            VAR_5, VAR_2,
            VAR_1 | VAR_0);
  VAR_17 = FUNC_5(&VAR_24, VAR_7->statsTuple,
          VAR_4, VAR_2,
          VAR_1);

  VAR_20 = FUNC_3(VAR_22.nvalues, VAR_3);
  if (VAR_15)
   VAR_13 = FUNC_10(VAR_22.numbers, VAR_20);
 }
 else
 {
  FUNC_11(&VAR_22, 0, sizeof(VAR_22));
  FUNC_11(&VAR_24, 0, sizeof(VAR_24));
 }

 if (FUNC_2(VAR_8->statsTuple))
 {
  VAR_9 = (Form_pg_statistic) FUNC_1(VAR_8->statsTuple);
  VAR_11 = VAR_9->stanullfrac;

  VAR_16 = FUNC_5(&VAR_23, VAR_8->statsTuple,
            VAR_5, VAR_2,
            VAR_1 | VAR_0);
  VAR_18 = FUNC_5(&VAR_25, VAR_8->statsTuple,
          VAR_4, VAR_2,
          VAR_1);

  VAR_21 = FUNC_3(VAR_23.nvalues, VAR_3);
  if (VAR_16)
   VAR_14 = FUNC_10(VAR_23.numbers, VAR_21);
 }
 else
 {
  FUNC_11(&VAR_23, 0, sizeof(VAR_23));
  FUNC_11(&VAR_25, 0, sizeof(VAR_25));
 }

 VAR_19 = FUNC_9(VAR_6);




 if (VAR_15 && VAR_16)
  VAR_12 += FUNC_8(VAR_22.values, VAR_22.numbers,
           VAR_20,
           VAR_23.values, VAR_23.numbers,
           VAR_21,
           VAR_6);






 if (VAR_15 && VAR_18)
  VAR_12 += (1.0 - VAR_11 - VAR_14) *
   FUNC_7(VAR_22.values, VAR_22.numbers, VAR_20,
         VAR_25.values, VAR_25.nvalues,
         VAR_19);
 if (VAR_16 && VAR_17)
  VAR_12 += (1.0 - VAR_10 - VAR_13) *
   FUNC_7(VAR_23.values, VAR_23.numbers, VAR_21,
         VAR_24.values, VAR_24.nvalues,
         -VAR_19);





 if (VAR_17 && VAR_18)
  VAR_12 += (1.0 - VAR_10 - VAR_13) *
   (1.0 - VAR_11 - VAR_14) *
   FUNC_6(VAR_24.values, VAR_24.nvalues,
           VAR_25.values, VAR_25.nvalues,
           VAR_19);





 if ((!VAR_15 && !VAR_17) || (!VAR_16 && !VAR_18))
  VAR_12 = (1.0 - VAR_10) * (1.0 - VAR_11) * FUNC_0(VAR_6);


 FUNC_4(&VAR_22);
 FUNC_4(&VAR_23);
 FUNC_4(&VAR_24);
 FUNC_4(&VAR_25);

 return VAR_12;
}
