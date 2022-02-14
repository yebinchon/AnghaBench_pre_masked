
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {int n_field_var_str; int n_field_vars; struct field_var** field_vars; } ;
struct field_var {TYPE_1__* val; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hist_trigger_data *VAR_1,
      struct field_var *VAR_2)
{
 VAR_1->field_vars[VAR_1->n_field_vars++] = VAR_2;

 if (VAR_2->val->flags & VAR_0)
  VAR_1->n_field_var_str++;
}
