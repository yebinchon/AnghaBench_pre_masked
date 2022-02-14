
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {struct TYPE_20__* gcnext; } ;
typedef TYPE_2__ js_String ;
struct TYPE_19__ {TYPE_2__* text; } ;
struct TYPE_21__ {int actx; int (* alloc ) (int ,TYPE_3__*,int ) ;struct TYPE_21__* stack; TYPE_1__ lexbuf; TYPE_2__* gcstr; TYPE_4__* gcobj; TYPE_5__* gcfun; TYPE_6__* gcenv; } ;
typedef TYPE_3__ js_State ;
struct TYPE_22__ {struct TYPE_22__* gcnext; } ;
typedef TYPE_4__ js_Object ;
struct TYPE_23__ {struct TYPE_23__* gcnext; } ;
typedef TYPE_5__ js_Function ;
struct TYPE_24__ {struct TYPE_24__* gcnext; } ;
typedef TYPE_6__ js_Environment ;


 int FUNC_0 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;

void FUNC_7(js_State *VAR_0)
{
 js_Function *VAR_1, *VAR_2;
 js_Object *VAR_3, *VAR_4;
 js_Environment *VAR_5, *VAR_6;
 js_String *VAR_7, *VAR_8;

 if (!VAR_0)
  return;

 for (VAR_5 = VAR_0->gcenv; VAR_5; VAR_5 = VAR_6)
  VAR_6 = VAR_5->gcnext, FUNC_0(VAR_0, VAR_5);
 for (VAR_1 = VAR_0->gcfun; VAR_1; VAR_1 = VAR_2)
  VAR_2 = VAR_1->gcnext, FUNC_1(VAR_0, VAR_1);
 for (VAR_3 = VAR_0->gcobj; VAR_3; VAR_3 = VAR_4)
  VAR_4 = VAR_3->gcnext, FUNC_2(VAR_0, VAR_3);
 for (VAR_7 = VAR_0->gcstr; VAR_7; VAR_7 = VAR_8)
  VAR_8 = VAR_7->gcnext, FUNC_4(VAR_0, VAR_7);

 FUNC_3(VAR_0);

 FUNC_4(VAR_0, VAR_0->lexbuf.text);
 VAR_0->alloc(VAR_0->actx, VAR_0->stack, 0);
 VAR_0->alloc(VAR_0->actx, VAR_0, 0);
}
