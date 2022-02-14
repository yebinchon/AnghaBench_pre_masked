
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int costs; int str; } ;
typedef TYPE_1__ ExplainState ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;

ExplainState *
FUNC_2(void)
{
 ExplainState *VAR_0 = (ExplainState *) FUNC_1(sizeof(ExplainState));


 VAR_0->costs = 1;

 VAR_0->str = FUNC_0();

 return VAR_0;
}
