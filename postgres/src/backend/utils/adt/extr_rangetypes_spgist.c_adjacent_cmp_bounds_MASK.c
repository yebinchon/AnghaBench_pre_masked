
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_8__ {scalar_t__ lower; } ;
typedef TYPE_1__ RangeBound ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_1__ const,TYPE_1__ const) ;
 int FUNC_2 (int *,TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static int
FUNC_3(TypeCacheEntry *VAR_0, const RangeBound *VAR_1,
     const RangeBound *VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->lower != VAR_2->lower);

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_2->lower)
 {
  if (VAR_3 < 0 && !FUNC_1(VAR_0, *VAR_1, *VAR_2))
   return -1;
  else
   return 1;
 }
 else
 {
  if (VAR_3 <= 0)
   return -1;
  else
   return 1;
 }
}
