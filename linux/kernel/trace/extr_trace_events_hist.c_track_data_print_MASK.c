
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char* u64 ;
struct tracing_map_elt {int dummy; } ;
struct seq_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_save_vars; TYPE_1__** save_vars; } ;
struct TYPE_4__ {unsigned int idx; int name; } ;
struct hist_field {int flags; TYPE_2__ var; } ;
struct action_data {scalar_t__ handler; scalar_t__ action; } ;
struct TYPE_3__ {struct hist_field* var; struct hist_field* val; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (struct hist_trigger_data*,struct tracing_map_elt*,struct action_data*) ;
 int FUNC_1 (struct seq_file*,char*,char*,...) ;
 char* FUNC_2 (struct tracing_map_elt*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_4,
        struct hist_trigger_data *VAR_5,
        struct tracing_map_elt *VAR_6,
        struct action_data *VAR_7)
{
 u64 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7);
 unsigned int VAR_9, VAR_10;

 if (VAR_7->handler == VAR_2)
  FUNC_1(VAR_4, "\n\tmax: %10llu", VAR_8);
 else if (VAR_7->handler == VAR_1)
  FUNC_1(VAR_4, "\n\tchanged: %10llu", VAR_8);

 if (VAR_7->action == VAR_0)
  return;

 for (VAR_9 = 0; VAR_9 < VAR_5->n_save_vars; VAR_9++) {
  struct hist_field *VAR_11 = VAR_5->save_vars[VAR_9]->val;
  struct hist_field *VAR_12 = VAR_5->save_vars[VAR_9]->var;
  u64 VAR_13;

  VAR_10 = VAR_12->var.idx;

  VAR_13 = FUNC_2(VAR_6, VAR_10);

  if (VAR_11->flags & VAR_3) {
   FUNC_1(VAR_4, "  %s: %-32s", VAR_12->var.name,
       (char *)(uintptr_t)(VAR_13));
  } else
   FUNC_1(VAR_4, "  %s: %10llu", VAR_12->var.name, VAR_13);
 }
}
