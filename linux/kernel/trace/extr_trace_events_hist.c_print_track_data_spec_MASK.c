
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_2__ {int var_str; } ;
struct action_data {scalar_t__ handler; int action_name; TYPE_1__ track_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,struct hist_trigger_data*,struct action_data*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_2,
      struct hist_trigger_data *VAR_3,
      struct action_data *VAR_4)
{
 if (VAR_4->handler == VAR_1)
  FUNC_2(VAR_2, ":onmax(");
 else if (VAR_4->handler == VAR_0)
  FUNC_2(VAR_2, ":onchange(");
 FUNC_1(VAR_2, "%s", VAR_4->track_data.var_str);
 FUNC_1(VAR_2, ").%s(", VAR_4->action_name);

 FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_2, ")");
}
