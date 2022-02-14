
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_4__ {int gcmark; struct TYPE_4__* outer; TYPE_2__* variables; } ;
typedef TYPE_1__ js_Environment ;
struct TYPE_5__ {int gcmark; } ;


 int FUNC_0 (int *,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(js_State *VAR_0, int VAR_1, js_Environment *VAR_2)
{
 do {
  VAR_2->gcmark = VAR_1;
  if (VAR_2->variables->gcmark != VAR_1)
   FUNC_0(VAR_0, VAR_1, VAR_2->variables);
  VAR_2 = VAR_2->outer;
 } while (VAR_2 && VAR_2->gcmark != VAR_1);
}
