
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int gccounter; TYPE_2__* gcenv; } ;
typedef TYPE_1__ js_State ;
typedef int js_Object ;
struct TYPE_9__ {int * variables; struct TYPE_9__* outer; struct TYPE_9__* gcnext; scalar_t__ gcmark; } ;
typedef TYPE_2__ js_Environment ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int) ;

js_Environment *FUNC_1(js_State *VAR_0, js_Object *VAR_1, js_Environment *VAR_2)
{
 js_Environment *VAR_3 = FUNC_0(VAR_0, sizeof *VAR_3);
 VAR_3->gcmark = 0;
 VAR_3->gcnext = VAR_0->gcenv;
 VAR_0->gcenv = VAR_3;
 ++VAR_0->gccounter;

 VAR_3->outer = VAR_2;
 VAR_3->variables = VAR_1;
 return VAR_3;
}
