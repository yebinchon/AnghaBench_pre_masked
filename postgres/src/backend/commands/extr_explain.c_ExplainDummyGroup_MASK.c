
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int format; int indent; int str; } ;
typedef TYPE_1__ ExplainState ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_1, const char *VAR_2, ExplainState *VAR_3)
{
 switch (VAR_3->format)
 {
  case 130:

   break;

  case 129:
   FUNC_1(VAR_1, VAR_0, VAR_3);
   break;

  case 131:
   FUNC_0(VAR_3);
   FUNC_3(VAR_3->str, 2 * VAR_3->indent);
   if (VAR_2)
   {
    FUNC_5(VAR_3->str, VAR_2);
    FUNC_4(VAR_3->str, ": ");
   }
   FUNC_5(VAR_3->str, VAR_1);
   break;

  case 128:
   FUNC_2(VAR_3);
   if (VAR_2)
   {
    FUNC_6(VAR_3->str, VAR_2);
    FUNC_4(VAR_3->str, ": ");
   }
   else
   {
    FUNC_4(VAR_3->str, "- ");
   }
   FUNC_6(VAR_3->str, VAR_1);
   break;
 }
}
