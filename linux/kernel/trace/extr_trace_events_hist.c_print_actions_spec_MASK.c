
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_actions; struct action_data** actions; } ;
struct action_data {scalar_t__ handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct seq_file*,struct hist_trigger_data*,struct action_data*) ;
 int FUNC_1 (struct seq_file*,struct hist_trigger_data*,struct action_data*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_3,
          struct hist_trigger_data *VAR_4)
{
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4->n_actions; VAR_5++) {
  struct action_data *VAR_6 = VAR_4->actions[VAR_5];

  if (VAR_6->handler == VAR_1)
   FUNC_0(VAR_3, VAR_4, VAR_6);
  else if (VAR_6->handler == VAR_2 ||
    VAR_6->handler == VAR_0)
   FUNC_1(VAR_3, VAR_4, VAR_6);
 }
}
