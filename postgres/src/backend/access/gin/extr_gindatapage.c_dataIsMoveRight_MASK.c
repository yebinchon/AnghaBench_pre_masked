
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int itemptr; } ;
typedef int Page ;
typedef int ItemPointer ;
typedef TYPE_1__* GinBtree ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static bool
FUNC_3(GinBtree VAR_0, Page VAR_1)
{
 ItemPointer VAR_2 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1))
  return 0;

 return (FUNC_2(&VAR_0->itemptr, VAR_2) > 0) ? 1 : 0;
}
