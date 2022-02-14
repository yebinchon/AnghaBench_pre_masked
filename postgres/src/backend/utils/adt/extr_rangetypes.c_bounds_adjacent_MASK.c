
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int fn_oid; } ;
struct TYPE_14__ {TYPE_1__ rng_canonical_finfo; } ;
typedef TYPE_2__ TypeCacheEntry ;
struct TYPE_15__ {int lower; int inclusive; } ;
typedef int RangeType ;
typedef TYPE_3__ RangeBound ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;

bool
FUNC_5(TypeCacheEntry *VAR_0, RangeBound VAR_1, RangeBound VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_1.lower && VAR_2.lower);

 VAR_3 = FUNC_4(VAR_0, &VAR_1, &VAR_2);
 if (VAR_3 < 0)
 {
  RangeType *VAR_4;






  if (!FUNC_1(VAR_0->rng_canonical_finfo.fn_oid))
   return 0;







  VAR_1.inclusive = !VAR_1.inclusive;
  VAR_2.inclusive = !VAR_2.inclusive;

  VAR_1.lower = 1;
  VAR_2.lower = 0;
  VAR_4 = FUNC_3(VAR_0, &VAR_1, &VAR_2, 0);
  return FUNC_2(VAR_4);
 }
 else if (VAR_3 == 0)
  return VAR_1.inclusive != VAR_2.inclusive;
 else
  return 0;
}
