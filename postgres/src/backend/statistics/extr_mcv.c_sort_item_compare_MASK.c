
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * isnull; int * values; } ;
typedef int SortSupport ;
typedef TYPE_1__ SortItem ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 SortSupport VAR_3 = (SortSupport) VAR_2;
 SortItem *VAR_4 = (SortItem *) VAR_0;
 SortItem *VAR_5 = (SortItem *) VAR_1;

 return FUNC_0(VAR_4->values[0], VAR_4->isnull[0],
          VAR_5->values[0], VAR_5->isnull[0],
          VAR_3);
}
