
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ssup; } ;
struct TYPE_6__ {int * isnull; int * values; } ;
typedef TYPE_1__ SortItem ;
typedef TYPE_2__* MultiSortSupport ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

int
FUNC_1(int VAR_0, const SortItem *VAR_1, const SortItem *VAR_2,
        MultiSortSupport VAR_3)
{
 return FUNC_0(VAR_1->values[VAR_0], VAR_1->isnull[VAR_0],
          VAR_2->values[VAR_0], VAR_2->isnull[VAR_0],
          &VAR_3->ssup[VAR_0]);
}
