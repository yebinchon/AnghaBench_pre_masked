
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rng_collation; int rng_cmp_proc_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_7__ {scalar_t__ lower; int val; scalar_t__ infinite; } ;
typedef TYPE_2__ RangeBound ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

int
FUNC_2(TypeCacheEntry *VAR_0, const RangeBound *VAR_1,
        const RangeBound *VAR_2)
{




 if (VAR_1->infinite && VAR_2->infinite)
 {




  if (VAR_1->lower == VAR_2->lower)
   return 0;
  else
   return VAR_1->lower ? -1 : 1;
 }
 else if (VAR_1->infinite)
  return VAR_1->lower ? -1 : 1;
 else if (VAR_2->infinite)
  return VAR_2->lower ? 1 : -1;




 return FUNC_0(FUNC_1(&VAR_0->rng_cmp_proc_finfo,
             VAR_0->rng_collation,
             VAR_1->val, VAR_2->val));
}
