
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct synth_event* system; } ;
struct synth_event {unsigned int n_fields; int call; int tp; TYPE_1__ class; struct synth_event* name; struct synth_event* fields; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct synth_event) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct synth_event*) ;

__attribute__((used)) static void FUNC_4(struct synth_event *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_fields; VAR_1++)
  FUNC_1(VAR_0->fields[VAR_1]);

 FUNC_3(VAR_0->fields);
 FUNC_3(VAR_0->name);
 FUNC_3(VAR_0->class.system);
 FUNC_2(VAR_0->tp);
 FUNC_0(&VAR_0->call);
 FUNC_3(VAR_0);
}
