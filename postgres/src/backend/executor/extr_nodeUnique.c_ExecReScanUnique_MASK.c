
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* lefttree; int ps_ResultTupleSlot; } ;
struct TYPE_6__ {TYPE_1__ ps; } ;
typedef TYPE_2__ UniqueState ;
struct TYPE_7__ {int * chgParam; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;

void
FUNC_2(UniqueState *VAR_0)
{

 FUNC_0(VAR_0->ps.ps_ResultTupleSlot);





 if (VAR_0->ps.lefttree->chgParam == ((void*)0))
  FUNC_1(VAR_0->ps.lefttree);
}
