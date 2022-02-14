
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_save_vars; TYPE_3__** save_vars; } ;
struct action_data {scalar_t__ action; unsigned int n_params; int * params; scalar_t__ use_trace_keyword; int synth_event_name; } ;
struct TYPE_6__ {TYPE_2__* var; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_5__ {TYPE_1__ var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,int ) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2,
         struct hist_trigger_data *VAR_3,
         struct action_data *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->action == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_3->n_save_vars; VAR_5++) {
   FUNC_0(VAR_2, "%s", VAR_3->save_vars[VAR_5]->var->var.name);
   if (VAR_5 < VAR_3->n_save_vars - 1)
    FUNC_1(VAR_2, ",");
  }
 } else if (VAR_4->action == VAR_1) {
  if (VAR_4->use_trace_keyword)
   FUNC_0(VAR_2, "%s", VAR_4->synth_event_name);
  for (VAR_5 = 0; VAR_5 < VAR_4->n_params; VAR_5++) {
   if (VAR_5 || VAR_4->use_trace_keyword)
    FUNC_1(VAR_2, ",");
   FUNC_0(VAR_2, "%s", VAR_4->params[VAR_5]);
  }
 }
}
