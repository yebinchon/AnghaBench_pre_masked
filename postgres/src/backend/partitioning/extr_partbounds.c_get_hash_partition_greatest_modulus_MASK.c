
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ strategy; int ndatums; int ** datums; } ;
typedef TYPE_1__* PartitionBoundInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

int
FUNC_2(PartitionBoundInfo VAR_1)
{
 FUNC_0(VAR_1 && VAR_1->strategy == VAR_0);
 FUNC_0(VAR_1->datums && VAR_1->ndatums > 0);
 FUNC_0(FUNC_1(VAR_1->datums[VAR_1->ndatums - 1][0]) > 0);

 return FUNC_1(VAR_1->datums[VAR_1->ndatums - 1][0]);
}
