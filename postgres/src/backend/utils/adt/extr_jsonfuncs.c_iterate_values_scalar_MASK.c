
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int action_state; int (* action ) (int ,char*,int ) ;} ;
typedef int JsonTokenType ;
typedef TYPE_1__ IterateJsonStringValuesState ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, char *VAR_4, JsonTokenType VAR_5)
{
 IterateJsonStringValuesState *VAR_6 = (IterateJsonStringValuesState *) VAR_3;

 switch (VAR_5)
 {
  case 129:
   if (VAR_6->flags & VAR_2)
    VAR_6->action(VAR_6->action_state, VAR_4, FUNC_0(VAR_4));
   break;
  case 130:
   if (VAR_6->flags & VAR_1)
    VAR_6->action(VAR_6->action_state, VAR_4, FUNC_0(VAR_4));
   break;
  case 128:
  case 131:
   if (VAR_6->flags & VAR_0)
    VAR_6->action(VAR_6->action_state, VAR_4, FUNC_0(VAR_4));
   break;
  default:

   break;
 }
}
