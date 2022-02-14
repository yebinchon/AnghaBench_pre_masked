
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ps_ResultTupleSlot; } ;
struct TYPE_6__ {TYPE_4__ ps; } ;
typedef TYPE_1__ GatherMergeState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(GatherMergeState *VAR_0)
{
 FUNC_1(FUNC_4(VAR_0));
 FUNC_3(VAR_0);
 FUNC_2(&VAR_0->ps);
 if (VAR_0->ps.ps_ResultTupleSlot)
  FUNC_0(VAR_0->ps.ps_ResultTupleSlot);
}
