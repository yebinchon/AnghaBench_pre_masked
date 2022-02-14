
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int text ;
struct TYPE_2__ {int strval; int action_state; int * (* action ) (int ,char*,int ) ;} ;
typedef TYPE_1__ TransformJsonStringValuesState ;
typedef scalar_t__ JsonTokenType ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, char *VAR_2, JsonTokenType VAR_3)
{
 TransformJsonStringValuesState *VAR_4 = (TransformJsonStringValuesState *) VAR_1;

 if (VAR_3 == VAR_0)
 {
  text *VAR_5 = VAR_4->action(VAR_4->action_state, VAR_2, FUNC_2(VAR_2));

  FUNC_1(VAR_4->strval, FUNC_4(VAR_5));
 }
 else
  FUNC_0(VAR_4->strval, VAR_2);
}
