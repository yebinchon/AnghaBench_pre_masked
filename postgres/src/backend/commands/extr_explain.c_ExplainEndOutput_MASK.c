
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; void* grouping_stack; int str; int indent; } ;
typedef TYPE_1__ ExplainState ;






 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (void*) ;

void
FUNC_2(ExplainState *VAR_0)
{
 switch (VAR_0->format)
 {
  case 130:

   break;

  case 129:
   VAR_0->indent--;
   FUNC_0(VAR_0->str, "</explain>");
   break;

  case 131:
   VAR_0->indent--;
   FUNC_0(VAR_0->str, "\n]");
   VAR_0->grouping_stack = FUNC_1(VAR_0->grouping_stack);
   break;

  case 128:
   VAR_0->grouping_stack = FUNC_1(VAR_0->grouping_stack);
   break;
 }
}
