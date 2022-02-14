
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {unsigned int n_actions; struct action_data** actions; } ;
struct action_data {scalar_t__ handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct action_data*) ;
 int FUNC_1 (struct action_data*) ;
 int FUNC_2 (struct hist_trigger_data*,struct action_data*) ;

__attribute__((used)) static void FUNC_3(struct hist_trigger_data *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->n_actions; VAR_4++) {
  struct action_data *VAR_5 = VAR_3->actions[VAR_4];

  if (VAR_5->handler == VAR_1)
   FUNC_1(VAR_5);
  else if (VAR_5->handler == VAR_2 ||
    VAR_5->handler == VAR_0)
   FUNC_2(VAR_3, VAR_5);
  else
   FUNC_0(VAR_5);
 }
}
