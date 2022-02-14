
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_7__ {int rng_collation; int rng_cmp_proc_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_8__ {int inclusive; int val; int infinite; } ;
typedef int RangeType ;
typedef TYPE_2__ RangeBound ;
typedef int Datum ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int const*,TYPE_2__*,TYPE_2__*,int*) ;

bool
FUNC_3(TypeCacheEntry *VAR_0, const RangeType *VAR_1, Datum VAR_2)
{
 RangeBound VAR_3;
 RangeBound VAR_4;
 bool VAR_5;
 int32 VAR_6;

 FUNC_2(VAR_0, VAR_1, &VAR_3, &VAR_4, &VAR_5);

 if (VAR_5)
  return 0;

 if (!VAR_3.infinite)
 {
  VAR_6 = FUNC_0(FUNC_1(&VAR_0->rng_cmp_proc_finfo,
             VAR_0->rng_collation,
             VAR_3.val, VAR_2));
  if (VAR_6 > 0)
   return 0;
  if (VAR_6 == 0 && !VAR_3.inclusive)
   return 0;
 }

 if (!VAR_4.infinite)
 {
  VAR_6 = FUNC_0(FUNC_1(&VAR_0->rng_cmp_proc_finfo,
             VAR_0->rng_collation,
             VAR_4.val, VAR_2));
  if (VAR_6 < 0)
   return 0;
  if (VAR_6 == 0 && !VAR_4.inclusive)
   return 0;
 }

 return 1;
}
