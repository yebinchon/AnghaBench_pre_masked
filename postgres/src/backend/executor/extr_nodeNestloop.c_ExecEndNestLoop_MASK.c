
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ps_ResultTupleSlot; } ;
struct TYPE_7__ {TYPE_5__ ps; } ;
struct TYPE_8__ {TYPE_1__ js; } ;
typedef TYPE_2__ NestLoopState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(NestLoopState *VAR_0)
{
 FUNC_3("ExecEndNestLoop: %s\n",
      "ending node processing");




 FUNC_2(&VAR_0->js.ps);




 FUNC_0(VAR_0->js.ps.ps_ResultTupleSlot);




 FUNC_1(FUNC_5(VAR_0));
 FUNC_1(FUNC_4(VAR_0));

 FUNC_3("ExecEndNestLoop: %s\n",
      "node processing ended");
}
