
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ndims; int * ssup; } ;
struct TYPE_3__ {int * isnull; int * values; } ;
typedef TYPE_1__ SortItem ;
typedef TYPE_2__* MultiSortSupport ;


 int FUNC_0 (int ,int ,int ,int ,int *) ;

int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 MultiSortSupport VAR_3 = (MultiSortSupport) VAR_2;
 SortItem *VAR_4 = (SortItem *) VAR_0;
 SortItem *VAR_5 = (SortItem *) VAR_1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->ndims; VAR_6++)
 {
  int VAR_7;

  VAR_7 = FUNC_0(VAR_4->values[VAR_6], VAR_4->isnull[VAR_6],
           VAR_5->values[VAR_6], VAR_5->isnull[VAR_6],
           &VAR_3->ssup[VAR_6]);

  if (VAR_7 != 0)
   return VAR_7;
 }


 return 0;
}
