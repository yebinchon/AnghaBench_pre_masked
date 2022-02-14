
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int lslot ;
struct TYPE_29__ {int statsTuple; } ;
typedef TYPE_3__ VariableStatData ;
struct TYPE_28__ {int fn_oid; } ;
struct TYPE_27__ {int fn_oid; } ;
struct TYPE_30__ {TYPE_2__ rng_subdiff_finfo; TYPE_1__ rng_cmp_proc_finfo; } ;
typedef TYPE_4__ TypeCacheEntry ;
struct TYPE_32__ {int nvalues; int * values; } ;
struct TYPE_31__ {int infinite; } ;
typedef int RangeType ;
typedef TYPE_5__ RangeBound ;
typedef int Oid ;
typedef TYPE_6__ AttStatsSlot ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int const* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 double FUNC_4 (TYPE_4__*,TYPE_5__*,TYPE_5__*,TYPE_5__*,int,int *,int) ;
 double FUNC_5 (TYPE_4__*,TYPE_5__*,TYPE_5__*,TYPE_5__*,int,int *,int) ;
 double FUNC_6 (TYPE_4__*,TYPE_5__*,TYPE_5__*,int,int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_6__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_6__*,int ,int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (TYPE_4__*,int const*,TYPE_5__*,TYPE_5__*,int*) ;
 int FUNC_13 (TYPE_3__*,int ) ;

__attribute__((used)) static double
FUNC_14(TypeCacheEntry *VAR_5, VariableStatData *VAR_6,
       const RangeType *VAR_7, Oid VAR_8)
{
 AttStatsSlot VAR_9;
 AttStatsSlot VAR_10;
 int VAR_11;
 RangeBound *VAR_12;
 RangeBound *VAR_13;
 int VAR_14;
 RangeBound VAR_15;
 RangeBound VAR_16;
 bool VAR_17;
 double VAR_18;


 if (!FUNC_13(VAR_6,
            VAR_5->rng_cmp_proc_finfo.fn_oid))
  return -1;
 if (FUNC_3(VAR_5->rng_subdiff_finfo.fn_oid) &&
  !FUNC_13(VAR_6,
            VAR_5->rng_subdiff_finfo.fn_oid))
  return -1;


 if (!(FUNC_2(VAR_6->statsTuple) &&
    FUNC_9(&VAR_9, VAR_6->statsTuple,
         VAR_3, VAR_2,
         VAR_0)))
  return -1.0;





 VAR_11 = VAR_9.nvalues;
 VAR_12 = (RangeBound *) FUNC_11(sizeof(RangeBound) * VAR_11);
 VAR_13 = (RangeBound *) FUNC_11(sizeof(RangeBound) * VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
 {
  FUNC_12(VAR_5, FUNC_1(VAR_9.values[VAR_14]),
        &VAR_12[VAR_14], &VAR_13[VAR_14], &VAR_17);

  if (VAR_17)
   FUNC_7(VAR_1, "bounds histogram contains an empty range");
 }


 if (VAR_8 == 137 ||
  VAR_8 == 139)
 {
  if (!(FUNC_2(VAR_6->statsTuple) &&
     FUNC_9(&VAR_10, VAR_6->statsTuple,
          VAR_4,
          VAR_2,
          VAR_0)))
  {
   FUNC_8(&VAR_9);
   return -1.0;
  }


  if (VAR_10.nvalues < 2)
  {
   FUNC_8(&VAR_10);
   FUNC_8(&VAR_9);
   return -1.0;
  }
 }
 else
  FUNC_10(&VAR_10, 0, sizeof(VAR_10));


 FUNC_12(VAR_5, VAR_7, &VAR_15, &VAR_16, &VAR_17);
 FUNC_0(!VAR_17);





 switch (VAR_8)
 {
  case 132:
   VAR_18 =
    FUNC_6(VAR_5, &VAR_15,
            VAR_12, VAR_11, 0);
   break;

  case 133:
   VAR_18 =
    FUNC_6(VAR_5, &VAR_15,
            VAR_12, VAR_11, 1);
   break;

  case 135:
   VAR_18 =
    1 - FUNC_6(VAR_5, &VAR_15,
             VAR_12, VAR_11, 0);
   break;

  case 136:
   VAR_18 =
    1 - FUNC_6(VAR_5, &VAR_15,
             VAR_12, VAR_11, 1);
   break;

  case 134:

   VAR_18 =
    FUNC_6(VAR_5, &VAR_15,
            VAR_13, VAR_11, 0);
   break;

  case 128:

   VAR_18 =
    1 - FUNC_6(VAR_5, &VAR_16,
             VAR_12, VAR_11, 1);
   break;

  case 130:

   VAR_18 =
    1 - FUNC_6(VAR_5, &VAR_15,
             VAR_12, VAR_11, 0);
   break;

  case 131:

   VAR_18 =
    FUNC_6(VAR_5, &VAR_16,
            VAR_13, VAR_11, 1);
   break;

  case 129:
  case 138:
   VAR_18 =
    FUNC_6(VAR_5, &VAR_15, VAR_13,
            VAR_11, 0);
   VAR_18 +=
    (1.0 - FUNC_6(VAR_5, &VAR_16, VAR_12,
             VAR_11, 1));
   VAR_18 = 1.0 - VAR_18;
   break;

  case 137:
   VAR_18 =
    FUNC_5(VAR_5, &VAR_15,
              &VAR_16, VAR_12, VAR_11,
              VAR_10.values, VAR_10.nvalues);
   break;

  case 139:
   if (VAR_15.infinite)
   {




    VAR_18 =
     FUNC_6(VAR_5, &VAR_16,
             VAR_13, VAR_11, 1);
   }
   else if (VAR_16.infinite)
   {
    VAR_18 =
     1.0 - FUNC_6(VAR_5, &VAR_15,
                VAR_12, VAR_11, 0);
   }
   else
   {
    VAR_18 =
     FUNC_4(VAR_5, &VAR_15,
             &VAR_16, VAR_12, VAR_11,
             VAR_10.values, VAR_10.nvalues);
   }
   break;

  default:
   FUNC_7(VAR_1, "unknown range operator %u", VAR_8);
   VAR_18 = -1.0;
   break;
 }

 FUNC_8(&VAR_10);
 FUNC_8(&VAR_9);

 return VAR_18;
}
