
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortItem ;
typedef int MultiSortSupport ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, SortItem *VAR_1, MultiSortSupport VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = 1;
 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
 {

  FUNC_0(FUNC_1(&VAR_1[VAR_3], &VAR_1[VAR_3 - 1], VAR_2) >= 0);

  if (FUNC_1(&VAR_1[VAR_3], &VAR_1[VAR_3 - 1], VAR_2) != 0)
   VAR_4 += 1;
 }

 return VAR_4;
}
