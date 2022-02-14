
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_10__ {int fn_oid; } ;
struct TYPE_8__ {int rng_collation; TYPE_7__ rng_subdiff_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_9__ {scalar_t__ lower; scalar_t__ infinite; int val; } ;
typedef TYPE_2__ RangeBound ;


 double FUNC_0 (int ) ;
 int FUNC_1 (TYPE_7__*,int ,int ,int ) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (double,double) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static float8
FUNC_5(TypeCacheEntry *VAR_0, const RangeBound *VAR_1, const RangeBound *VAR_2,
    const RangeBound *VAR_3)
{
 bool VAR_4 = FUNC_4(VAR_0->rng_subdiff_finfo.fn_oid);
 float8 VAR_5;

 if (!VAR_2->infinite && !VAR_3->infinite)
 {
  float8 VAR_6;






  if (VAR_1->infinite)
   return 0.5;


  if (!VAR_4)
   return 0.5;


  VAR_6 = FUNC_0(FUNC_1(
              &VAR_0->rng_subdiff_finfo,
              VAR_0->rng_collation,
              VAR_3->val,
              VAR_2->val));
  if (VAR_6 <= 0.0)
   return 0.5;

  VAR_5 = FUNC_0(FUNC_1(
             &VAR_0->rng_subdiff_finfo,
             VAR_0->rng_collation,
             VAR_1->val,
             VAR_2->val))
   / VAR_6;


  VAR_5 = FUNC_2(VAR_5, 0.0);
  VAR_5 = FUNC_3(VAR_5, 1.0);
  return VAR_5;
 }
 else if (VAR_2->infinite && !VAR_3->infinite)
 {






  return ((VAR_1->infinite && VAR_1->lower) ? 0.0 : 1.0);
 }
 else if (!VAR_2->infinite && VAR_3->infinite)
 {

  return ((VAR_1->infinite && !VAR_1->lower) ? 1.0 : 0.0);
 }
 else
 {
  return 0.5;
 }
}
