
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {struct TYPE_3__* outer; int variables; } ;
typedef TYPE_1__ js_Environment ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(js_State *VAR_0, js_Environment *VAR_1, int VAR_2)
{
 FUNC_1("scope %d ", VAR_2);
 FUNC_0(VAR_0, VAR_1->variables);
 if (VAR_1->outer)
  FUNC_2(VAR_0, VAR_1->outer, VAR_2+1);
}
