
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_9__ {int fn_oid; } ;
struct TYPE_7__ {int rng_collation; TYPE_6__ rng_subdiff_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_8__ {scalar_t__ lower; scalar_t__ infinite; int val; } ;
typedef TYPE_2__ RangeBound ;


 double FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 double FUNC_3 () ;

__attribute__((used)) static float8
FUNC_4(TypeCacheEntry *VAR_0, const RangeBound *VAR_1, const RangeBound *VAR_2)
{
 bool VAR_3 = FUNC_2(VAR_0->rng_subdiff_finfo.fn_oid);

 if (!VAR_1->infinite && !VAR_2->infinite)
 {




  if (VAR_3)
   return
    FUNC_0(FUNC_1(&VAR_0->rng_subdiff_finfo,
             VAR_0->rng_collation,
             VAR_2->val,
             VAR_1->val));
  else
   return 1.0;
 }
 else if (VAR_1->infinite && VAR_2->infinite)
 {

  if (VAR_1->lower == VAR_2->lower)
   return 0.0;
  else
   return FUNC_3();
 }
 else
 {

  return FUNC_3();
 }
}
