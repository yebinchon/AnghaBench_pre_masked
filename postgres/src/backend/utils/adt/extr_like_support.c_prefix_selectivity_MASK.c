
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_13__ {int stacoll; } ;
struct TYPE_12__ {int constvalue; int consttype; } ;
typedef double Selectivity ;
typedef int PlannerInfo ;
typedef scalar_t__ Oid ;
typedef int FmgrInfo ;
typedef TYPE_2__ Const ;
typedef TYPE_3__ AttStatsSlot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 double FUNC_2 (double,double) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 double FUNC_8 (int *,TYPE_1__*,int *,int,int,int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_2__*,int *,int ) ;
 double FUNC_10 (TYPE_1__*,scalar_t__,int ,int,int,int) ;

__attribute__((used)) static Selectivity
FUNC_11(PlannerInfo *VAR_8, VariableStatData *VAR_9,
       Oid VAR_10, Oid VAR_11, Const *VAR_12)
{
 Selectivity VAR_13;
 Oid VAR_14;
 FmgrInfo VAR_15;
 AttStatsSlot VAR_16;
 Const *VAR_17;
 Selectivity VAR_18;

 VAR_14 = FUNC_7(VAR_11, VAR_10, VAR_10,
         VAR_1);
 if (VAR_14 == VAR_6)
  FUNC_3(VAR_5, "no >= operator for opfamily %u", VAR_11);
 FUNC_4(FUNC_6(VAR_14), &VAR_15);

 VAR_13 = FUNC_8(VAR_8, VAR_9,
             &VAR_15, 1, 1,
             VAR_12->constvalue,
             VAR_12->consttype);

 if (VAR_13 < 0.0)
 {

  return VAR_4;
 }
 if (FUNC_1(VAR_9->statsTuple) &&
  FUNC_5(&VAR_16, VAR_9->statsTuple,
       VAR_7, VAR_6, 0))
                                 ;
 else
  VAR_16.stacoll = VAR_3;
 VAR_14 = FUNC_7(VAR_11, VAR_10, VAR_10,
         VAR_2);
 if (VAR_14 == VAR_6)
  FUNC_3(VAR_5, "no < operator for opfamily %u", VAR_11);
 FUNC_4(FUNC_6(VAR_14), &VAR_15);
 VAR_17 = FUNC_9(VAR_12, &VAR_15, VAR_16.stacoll);
 if (VAR_17)
 {
  Selectivity VAR_19;

  VAR_19 = FUNC_8(VAR_8, VAR_9,
           &VAR_15, 0, 0,
           VAR_17->constvalue,
           VAR_17->consttype);


  FUNC_0(VAR_19 >= 0.0);







  VAR_13 = VAR_19 + VAR_13 - 1.0;
 }
 VAR_14 = FUNC_7(VAR_11, VAR_10, VAR_10,
         VAR_0);
 if (VAR_14 == VAR_6)
  FUNC_3(VAR_5, "no = operator for opfamily %u", VAR_11);
 VAR_18 = FUNC_10(VAR_9, VAR_14, VAR_12->constvalue,
        0, 1, 0);

 VAR_13 = FUNC_2(VAR_13, VAR_18);

 return VAR_13;
}
