
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_probe_event {int nargs; TYPE_1__* args; int point; TYPE_1__* target; TYPE_1__* group; TYPE_1__* event; } ;
struct perf_probe_arg_field {TYPE_1__* name; struct perf_probe_arg_field* next; } ;
struct TYPE_2__ {struct perf_probe_arg_field* field; struct TYPE_2__* type; struct TYPE_2__* var; struct TYPE_2__* name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_probe_arg_field*) ;
 int FUNC_2 (TYPE_1__**) ;

void FUNC_3(struct perf_probe_event *VAR_0)
{
 struct perf_probe_arg_field *VAR_1, *VAR_2;
 int VAR_3;

 FUNC_2(&VAR_0->event);
 FUNC_2(&VAR_0->group);
 FUNC_2(&VAR_0->target);
 FUNC_0(&VAR_0->point);

 for (VAR_3 = 0; VAR_3 < VAR_0->nargs; VAR_3++) {
  FUNC_2(&VAR_0->args[VAR_3].name);
  FUNC_2(&VAR_0->args[VAR_3].var);
  FUNC_2(&VAR_0->args[VAR_3].type);
  VAR_1 = VAR_0->args[VAR_3].field;
  while (VAR_1) {
   VAR_2 = VAR_1->next;
   FUNC_2(&VAR_1->name);
   FUNC_1(VAR_1);
   VAR_1 = VAR_2;
  }
 }
 VAR_0->nargs = 0;
 FUNC_2(&VAR_0->args);
}
