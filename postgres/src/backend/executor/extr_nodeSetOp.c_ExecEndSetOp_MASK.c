
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ps_ResultTupleSlot; } ;
struct TYPE_5__ {TYPE_3__ ps; scalar_t__ tableContext; } ;
typedef TYPE_1__ SetOpState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(SetOpState *VAR_0)
{

 FUNC_0(VAR_0->ps.ps_ResultTupleSlot);


 if (VAR_0->tableContext)
  FUNC_3(VAR_0->tableContext);
 FUNC_2(&VAR_0->ps);

 FUNC_1(FUNC_4(VAR_0));
}
