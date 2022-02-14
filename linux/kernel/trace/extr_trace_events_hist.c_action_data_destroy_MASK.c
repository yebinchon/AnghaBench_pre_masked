
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct action_data {unsigned int n_params; struct action_data* synth_event_name; TYPE_1__* synth_event; struct action_data** params; struct action_data* action_name; } ;
struct TYPE_2__ {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (struct action_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct action_data *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(&VAR_0);

 FUNC_0(VAR_1->action_name);

 for (VAR_2 = 0; VAR_2 < VAR_1->n_params; VAR_2++)
  FUNC_0(VAR_1->params[VAR_2]);

 if (VAR_1->synth_event)
  VAR_1->synth_event->ref--;

 FUNC_0(VAR_1->synth_event_name);

 FUNC_0(VAR_1);
}
