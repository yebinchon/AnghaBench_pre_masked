
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int format; void* grouping_stack; int indent; int str; } ;
typedef TYPE_1__ ExplainState ;






 int FUNC_0 (int ,char) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,void*) ;

void
FUNC_3(ExplainState *VAR_0)
{
 switch (VAR_0->format)
 {
  case 130:

   break;

  case 129:
   FUNC_1(VAR_0->str,
           "<explain xmlns=\"http://www.postgresql.org/2009/explain\">\n");
   VAR_0->indent++;
   break;

  case 131:

   FUNC_0(VAR_0->str, '[');
   VAR_0->grouping_stack = FUNC_2(0, VAR_0->grouping_stack);
   VAR_0->indent++;
   break;

  case 128:
   VAR_0->grouping_stack = FUNC_2(0, VAR_0->grouping_stack);
   break;
 }
}
