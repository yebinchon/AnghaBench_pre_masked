
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; } ;
typedef TYPE_1__ SortItem ;
typedef int MultiSortSupport ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (void*,int,int,int ) ;

__attribute__((used)) static SortItem *
FUNC_5(int VAR_1, SortItem *VAR_2, MultiSortSupport VAR_3,
       int *VAR_4)
{
 int VAR_5,
    VAR_6;
 int VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);

 SortItem *VAR_8 = (SortItem *) FUNC_3(VAR_7 * sizeof(SortItem));

 VAR_6 = 0;
 VAR_8[0] = VAR_2[0];
 VAR_8[0].count = 1;

 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++)
 {

  FUNC_0(FUNC_2(&VAR_2[VAR_5], &VAR_2[VAR_5 - 1], VAR_3) >= 0);


  if (FUNC_2(&VAR_2[VAR_5], &VAR_2[VAR_5 - 1], VAR_3) != 0)
  {
   VAR_8[++VAR_6] = VAR_2[VAR_5];
   VAR_8[VAR_6].count = 0;
  }

  VAR_8[VAR_6].count++;
 }


 FUNC_0(VAR_6 + 1 == VAR_7);


 FUNC_4((void *) VAR_8, VAR_7, sizeof(SortItem),
    VAR_0);

 *VAR_4 = VAR_7;
 return VAR_8;
}
