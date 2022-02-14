
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int hslot ;
struct TYPE_13__ {int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_16__ {int fn_oid; } ;
struct TYPE_14__ {TYPE_4__ cmp_proc_finfo; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_17__ {int nnumbers; int * numbers; int nvalues; int * values; } ;
struct TYPE_15__ {double stanullfrac; } ;
typedef double Selectivity ;
typedef int Oid ;
typedef TYPE_3__* Form_pg_statistic ;
typedef TYPE_4__ FmgrInfo ;
typedef scalar_t__ Datum ;
typedef TYPE_5__ AttStatsSlot ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*,int ,int ,int ,int) ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 double FUNC_9 (int *,TYPE_2__*,int *,int ,int *,int ,int *,int ,int ) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static Selectivity
FUNC_13(VariableStatData *VAR_7, Datum VAR_8,
      Oid VAR_9, Oid VAR_10)
{
 Selectivity VAR_11;
 TypeCacheEntry *VAR_12;
 FmgrInfo *VAR_13;
 ArrayType *VAR_14;


 VAR_12 = FUNC_8(VAR_9, VAR_6);
 if (!FUNC_4(VAR_12->cmp_proc_finfo.fn_oid))
  return FUNC_0(VAR_10);
 VAR_13 = &VAR_12->cmp_proc_finfo;





 VAR_14 = FUNC_1(VAR_8);

 if (FUNC_3(VAR_7->statsTuple) &&
  FUNC_12(VAR_7, VAR_13->fn_oid))
 {
  Form_pg_statistic VAR_15;
  AttStatsSlot VAR_16;
  AttStatsSlot VAR_17;

  VAR_15 = (Form_pg_statistic) FUNC_2(VAR_7->statsTuple);


  if (FUNC_7(&VAR_16, VAR_7->statsTuple,
        VAR_5, VAR_2,
        VAR_1 | VAR_0))
  {




   if (VAR_10 != VAR_3 ||
    !FUNC_7(&VAR_17, VAR_7->statsTuple,
          VAR_4, VAR_2,
          VAR_0))
    FUNC_10(&VAR_17, 0, sizeof(VAR_17));


   VAR_11 = FUNC_9(VAR_14, VAR_12,
            VAR_16.values, VAR_16.nvalues,
            VAR_16.numbers, VAR_16.nnumbers,
            VAR_17.numbers, VAR_17.nnumbers,
            VAR_10);

   FUNC_6(&VAR_17);
   FUNC_6(&VAR_16);
  }
  else
  {

   VAR_11 = FUNC_9(VAR_14, VAR_12,
            ((void*)0), 0, ((void*)0), 0, ((void*)0), 0,
            VAR_10);
  }




  VAR_11 *= (1.0 - VAR_15->stanullfrac);
 }
 else
 {

  VAR_11 = FUNC_9(VAR_14, VAR_12,
           ((void*)0), 0, ((void*)0), 0, ((void*)0), 0,
           VAR_10);

 }


 if (FUNC_5(VAR_14) != VAR_8)
  FUNC_11(VAR_14);

 return VAR_11;
}
