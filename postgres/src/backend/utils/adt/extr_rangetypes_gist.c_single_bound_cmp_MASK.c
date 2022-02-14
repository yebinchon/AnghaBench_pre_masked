
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TypeCacheEntry ;
struct TYPE_2__ {int bound; } ;
typedef TYPE_1__ SingleBoundSortItem ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 SingleBoundSortItem *VAR_3 = (SingleBoundSortItem *) VAR_0;
 SingleBoundSortItem *VAR_4 = (SingleBoundSortItem *) VAR_1;
 TypeCacheEntry *VAR_5 = (TypeCacheEntry *) VAR_2;

 return FUNC_0(VAR_5, &VAR_3->bound, &VAR_4->bound);
}
