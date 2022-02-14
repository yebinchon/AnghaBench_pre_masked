
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {struct action_data** actions; TYPE_1__* attrs; } ;
struct action_data {scalar_t__ handler; } ;
struct TYPE_2__ {unsigned int n_actions; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hist_trigger_data*,struct action_data*) ;
 int FUNC_1 (struct hist_trigger_data*,struct action_data*) ;

__attribute__((used)) static int FUNC_2(struct hist_trigger_data *VAR_4)
{
 struct action_data *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->attrs->n_actions; VAR_6++) {
  VAR_5 = VAR_4->actions[VAR_6];

  if (VAR_5->handler == VAR_2) {
   VAR_7 = FUNC_0(VAR_4, VAR_5);
   if (VAR_7)
    break;
  } else if (VAR_5->handler == VAR_3 ||
      VAR_5->handler == VAR_1) {
   VAR_7 = FUNC_1(VAR_4, VAR_5);
   if (VAR_7)
    break;
  } else {
   VAR_7 = -VAR_0;
   break;
  }
 }

 return VAR_7;
}
