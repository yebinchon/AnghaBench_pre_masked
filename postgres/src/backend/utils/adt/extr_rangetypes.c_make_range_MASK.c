
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int fn_oid; } ;
struct TYPE_5__ {TYPE_4__ rng_canonical_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int RangeType ;
typedef int RangeBound ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,int *,int *,int) ;

RangeType *
FUNC_6(TypeCacheEntry *VAR_0, RangeBound *VAR_1, RangeBound *VAR_2,
     bool VAR_3)
{
 RangeType *VAR_4;

 VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);


 if (FUNC_2(VAR_0->rng_canonical_finfo.fn_oid) &&
  !FUNC_3(VAR_4))
  VAR_4 = FUNC_0(FUNC_1(&VAR_0->rng_canonical_finfo,
             FUNC_4(VAR_4)));

 return VAR_4;
}
