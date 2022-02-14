
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* module; TYPE_2__* realname; TYPE_2__* symbol; } ;
struct probe_trace_event {int nargs; TYPE_2__* args; TYPE_1__ point; TYPE_2__* group; TYPE_2__* event; } ;
struct probe_trace_arg_ref {struct probe_trace_arg_ref* next; } ;
struct TYPE_4__ {struct probe_trace_arg_ref* ref; struct TYPE_4__* type; struct TYPE_4__* value; struct TYPE_4__* name; } ;


 int FUNC_0 (struct probe_trace_arg_ref*) ;
 int FUNC_1 (TYPE_2__**) ;

void FUNC_2(struct probe_trace_event *VAR_0)
{
 struct probe_trace_arg_ref *VAR_1, *VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->event);
 FUNC_1(&VAR_0->group);
 FUNC_1(&VAR_0->point.symbol);
 FUNC_1(&VAR_0->point.realname);
 FUNC_1(&VAR_0->point.module);
 for (VAR_3 = 0; VAR_3 < VAR_0->nargs; VAR_3++) {
  FUNC_1(&VAR_0->args[VAR_3].name);
  FUNC_1(&VAR_0->args[VAR_3].value);
  FUNC_1(&VAR_0->args[VAR_3].type);
  VAR_1 = VAR_0->args[VAR_3].ref;
  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  }
 }
 FUNC_1(&VAR_0->args);
 VAR_0->nargs = 0;
}
