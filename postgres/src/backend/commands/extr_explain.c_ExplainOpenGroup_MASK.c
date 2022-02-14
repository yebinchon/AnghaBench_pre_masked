
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int format; int indent; void* grouping_stack; int str; } ;
typedef TYPE_1__ ExplainState ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,char) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char const*) ;
 void* FUNC_8 (int,void*) ;

void
FUNC_9(const char *VAR_1, const char *VAR_2,
     bool VAR_3, ExplainState *VAR_4)
{
 switch (VAR_4->format)
 {
  case 130:

   break;

  case 129:
   FUNC_1(VAR_1, VAR_0, VAR_4);
   VAR_4->indent++;
   break;

  case 131:
   FUNC_0(VAR_4);
   FUNC_5(VAR_4->str, 2 * VAR_4->indent);
   if (VAR_2)
   {
    FUNC_7(VAR_4->str, VAR_2);
    FUNC_6(VAR_4->str, ": ");
   }
   FUNC_4(VAR_4->str, VAR_3 ? '{' : '[');







   VAR_4->grouping_stack = FUNC_8(0, VAR_4->grouping_stack);
   VAR_4->indent++;
   break;

  case 128:







   FUNC_2(VAR_4);
   if (VAR_2)
   {
    FUNC_3(VAR_4->str, "%s: ", VAR_2);
    VAR_4->grouping_stack = FUNC_8(1, VAR_4->grouping_stack);
   }
   else
   {
    FUNC_6(VAR_4->str, "- ");
    VAR_4->grouping_stack = FUNC_8(0, VAR_4->grouping_stack);
   }
   VAR_4->indent++;
   break;
 }
}
