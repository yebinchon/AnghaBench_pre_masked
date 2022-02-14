
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_vals; TYPE_2__* attrs; } ;
struct TYPE_3__ {unsigned int n_vars; char** name; char** expr; } ;
struct TYPE_4__ {TYPE_1__ var_defs; } ;


 int FUNC_0 (struct hist_trigger_data*,int ,struct trace_event_file*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct hist_trigger_data *VAR_0,
        struct trace_event_file *VAR_1)
{
 unsigned int VAR_2, VAR_3 = VAR_0->n_vals;
 int VAR_4 = 0;

 unsigned int VAR_5 = VAR_0->attrs->var_defs.n_vars;

 for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++) {
  char *VAR_6 = VAR_0->attrs->var_defs.name[VAR_2];
  char *VAR_7 = VAR_0->attrs->var_defs.expr[VAR_2];

  VAR_4 = FUNC_0(VAR_0, VAR_3++, VAR_1, VAR_6, VAR_7);
  if (VAR_4)
   goto out;
 }
 out:
 return VAR_4;
}
