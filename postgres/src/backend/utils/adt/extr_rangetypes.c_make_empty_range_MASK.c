
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_4__ {int infinite; int inclusive; int lower; void* val; } ;
typedef int RangeType ;
typedef TYPE_1__ RangeBound ;
typedef void* Datum ;


 int * FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int) ;

RangeType *
FUNC_1(TypeCacheEntry *VAR_0)
{
 RangeBound VAR_1;
 RangeBound VAR_2;

 VAR_1.val = (Datum) 0;
 VAR_1.infinite = 0;
 VAR_1.inclusive = 0;
 VAR_1.lower = 1;

 VAR_2.val = (Datum) 0;
 VAR_2.infinite = 0;
 VAR_2.inclusive = 0;
 VAR_2.lower = 0;

 return FUNC_0(VAR_0, &VAR_1, &VAR_2, 1);
}
