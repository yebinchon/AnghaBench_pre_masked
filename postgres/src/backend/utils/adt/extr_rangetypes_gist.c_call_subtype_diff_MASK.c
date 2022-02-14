
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double float8 ;
struct TYPE_3__ {int rng_collation; int rng_subdiff_finfo; } ;
typedef TYPE_1__ TypeCacheEntry ;
typedef int Datum ;


 double FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static float8
FUNC_2(TypeCacheEntry *VAR_0, Datum VAR_1, Datum VAR_2)
{
 float8 VAR_3;

 VAR_3 = FUNC_0(FUNC_1(&VAR_0->rng_subdiff_finfo,
            VAR_0->rng_collation,
            VAR_1, VAR_2));

 if (VAR_3 >= 0.0)
  return VAR_3;
 return 0.0;
}
