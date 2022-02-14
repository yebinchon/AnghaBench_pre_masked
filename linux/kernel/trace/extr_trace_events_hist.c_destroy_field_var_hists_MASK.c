
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hist_trigger_data {unsigned int n_field_var_hists; TYPE_1__** field_var_hists; } ;
struct TYPE_2__ {struct TYPE_2__* cmd; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_field_var_hists; VAR_1++) {
  FUNC_0(VAR_0->field_var_hists[VAR_1]->cmd);
  FUNC_0(VAR_0->field_var_hists[VAR_1]);
 }
}
