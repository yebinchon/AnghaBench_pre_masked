
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_elt {int dummy; } ;
struct seq_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_actions; struct action_data** actions; } ;
struct action_data {scalar_t__ action; scalar_t__ handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct seq_file*,struct hist_trigger_data*,struct tracing_map_elt*,struct action_data*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_3,
     struct hist_trigger_data *VAR_4,
     struct tracing_map_elt *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->n_actions; VAR_6++) {
  struct action_data *VAR_7 = VAR_4->actions[VAR_6];

  if (VAR_7->action == VAR_0)
   continue;

  if (VAR_7->handler == VAR_2 ||
      VAR_7->handler == VAR_1)
   FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7);
 }
}
