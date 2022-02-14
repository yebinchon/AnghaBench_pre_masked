
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct hist_trigger_data {unsigned int n_field_var_hists; TYPE_2__** field_var_hists; } ;
struct TYPE_4__ {char* cmd; TYPE_1__* hist_data; } ;
struct TYPE_3__ {struct trace_event_file* event_file; } ;


 int FUNC_0 (int *,struct trace_event_file*,char*,char*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_1)
{
 struct trace_event_file *VAR_2;
 unsigned int VAR_3;
 char *VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_field_var_hists; VAR_3++) {
  VAR_2 = VAR_1->field_var_hists[VAR_3]->hist_data->event_file;
  VAR_4 = VAR_1->field_var_hists[VAR_3]->cmd;
  VAR_5 = FUNC_0(&VAR_0, VAR_2,
           "!hist", "hist", VAR_4);
 }
}
