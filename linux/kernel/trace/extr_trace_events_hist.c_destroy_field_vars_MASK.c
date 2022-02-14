
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {unsigned int n_field_vars; int * field_vars; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->n_field_vars; VAR_1++)
  FUNC_0(VAR_0->field_vars[VAR_1]);
}
