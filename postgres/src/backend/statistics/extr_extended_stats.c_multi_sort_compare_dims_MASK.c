
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
FUNC_1(int VAR_0, int VAR_1,
      const SortItem *VAR_2, const SortItem *VAR_3,
      MultiSortSupport VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_0; VAR_5 <= VAR_1; VAR_5++)
 {
  int VAR_6 = FUNC_0(VAR_2->values[VAR_5], VAR_2->isnull[VAR_5],
           VAR_3->values[VAR_5], VAR_3->isnull[VAR_5],
           &VAR_4->ssup[VAR_5]);

  if (VAR_6 != 0)
   return VAR_6;
 }

 return 0;
}
