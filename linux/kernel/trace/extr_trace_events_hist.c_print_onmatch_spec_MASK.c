
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_2__ {int event; int event_system; } ;
struct action_data {int action_name; TYPE_1__ match_data; } ;


 int FUNC_0 (struct seq_file*,struct hist_trigger_data*,struct action_data*) ;
 int FUNC_1 (struct seq_file*,char*,int ,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0,
          struct hist_trigger_data *VAR_1,
          struct action_data *VAR_2)
{
 FUNC_1(VAR_0, ":onmatch(%s.%s).", VAR_2->match_data.event_system,
     VAR_2->match_data.event);

 FUNC_1(VAR_0, "%s(", VAR_2->action_name);

 FUNC_0(VAR_0, VAR_1, VAR_2);

 FUNC_2(VAR_0, ")");
}
