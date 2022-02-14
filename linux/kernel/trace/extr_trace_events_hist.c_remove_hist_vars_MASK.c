
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_array {int dummy; } ;
struct hist_var_data {int list; } ;
struct hist_trigger_data {TYPE_1__* event_file; } ;
struct TYPE_2__ {struct trace_array* tr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hist_trigger_data*) ;
 struct hist_var_data* FUNC_2 (struct hist_trigger_data*) ;
 int FUNC_3 (struct hist_var_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct trace_array*) ;

__attribute__((used)) static void FUNC_6(struct hist_trigger_data *VAR_0)
{
 struct trace_array *VAR_1 = VAR_0->event_file->tr;
 struct hist_var_data *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return;

 if (FUNC_0(FUNC_1(VAR_0)))
  return;

 FUNC_4(&VAR_2->list);

 FUNC_3(VAR_2);

 FUNC_5(VAR_1);
}
