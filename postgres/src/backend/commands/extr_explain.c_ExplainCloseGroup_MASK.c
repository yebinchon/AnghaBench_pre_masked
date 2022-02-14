
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; int indent; void* grouping_stack; int str; } ;
typedef TYPE_1__ ExplainState ;






 int FUNC_0 (char const*,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ,int) ;
 void* FUNC_3 (void*) ;

void
FUNC_4(const char *VAR_1, const char *VAR_2,
      bool VAR_3, ExplainState *VAR_4)
{
 switch (VAR_4->format)
 {
  case 130:

   break;

  case 129:
   VAR_4->indent--;
   FUNC_0(VAR_1, VAR_0, VAR_4);
   break;

  case 131:
   VAR_4->indent--;
   FUNC_1(VAR_4->str, '\n');
   FUNC_2(VAR_4->str, 2 * VAR_4->indent);
   FUNC_1(VAR_4->str, VAR_3 ? '}' : ']');
   VAR_4->grouping_stack = FUNC_3(VAR_4->grouping_stack);
   break;

  case 128:
   VAR_4->indent--;
   VAR_4->grouping_stack = FUNC_3(VAR_4->grouping_stack);
   break;
 }
}
