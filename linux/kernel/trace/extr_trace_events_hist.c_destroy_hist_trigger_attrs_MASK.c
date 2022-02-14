
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_attrs {unsigned int n_assignments; unsigned int n_actions; struct hist_trigger_attrs* clock; struct hist_trigger_attrs* vals_str; struct hist_trigger_attrs* keys_str; struct hist_trigger_attrs* sort_key_str; struct hist_trigger_attrs* name; struct hist_trigger_attrs** action_str; struct hist_trigger_attrs** assignment_str; } ;


 int FUNC_0 (struct hist_trigger_attrs*) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_attrs *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_assignments; VAR_1++)
  FUNC_0(VAR_0->assignment_str[VAR_1]);

 for (VAR_1 = 0; VAR_1 < VAR_0->n_actions; VAR_1++)
  FUNC_0(VAR_0->action_str[VAR_1]);

 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->sort_key_str);
 FUNC_0(VAR_0->keys_str);
 FUNC_0(VAR_0->vals_str);
 FUNC_0(VAR_0->clock);
 FUNC_0(VAR_0);
}
