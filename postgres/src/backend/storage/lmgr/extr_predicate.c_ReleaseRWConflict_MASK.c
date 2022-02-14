
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int availableList; } ;
struct TYPE_4__ {int outLink; int inLink; } ;
typedef TYPE_1__* RWConflict ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(RWConflict VAR_1)
{
 FUNC_0(&VAR_1->inLink);
 FUNC_0(&VAR_1->outLink);
 FUNC_1(&VAR_0->availableList, &VAR_1->outLink);
}
