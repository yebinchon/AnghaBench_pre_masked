
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_3__ {int gcmark; int funlen; struct TYPE_3__** funtab; } ;
typedef TYPE_1__ js_Function ;



__attribute__((used)) static void FUNC_0(js_State *VAR_0, int VAR_1, js_Function *VAR_2)
{
 int VAR_3;
 VAR_2->gcmark = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2->funlen; ++VAR_3)
  if (VAR_2->funtab[VAR_3]->gcmark != VAR_1)
   FUNC_0(VAR_0, VAR_1, VAR_2->funtab[VAR_3]);
}
