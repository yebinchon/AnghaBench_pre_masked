
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int action_state; int (* action ) (int ,char*,int ) ;} ;
typedef TYPE_1__ IterateJsonStringValuesState ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, char *VAR_2, bool VAR_3)
{
 IterateJsonStringValuesState *VAR_4 = (IterateJsonStringValuesState *) VAR_1;

 if (VAR_4->flags & VAR_0)
 {
  char *VAR_5 = FUNC_0(VAR_2);

  VAR_4->action(VAR_4->action_state, VAR_5, FUNC_1(VAR_5));
 }
}
