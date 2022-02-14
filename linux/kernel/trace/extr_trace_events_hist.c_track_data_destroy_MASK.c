
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct track_data {struct hist_trigger_data* hist_data; } ;
struct trace_event_file {int tr; } ;
struct hist_trigger_data {struct trace_event_file* event_file; } ;
struct TYPE_2__ {int var_str; int track_var; } ;
struct action_data {scalar_t__ action; TYPE_1__ track_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct action_data*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct track_data* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct track_data*) ;

__attribute__((used)) static void FUNC_6(struct hist_trigger_data *VAR_1,
          struct action_data *VAR_2)
{
 struct trace_event_file *VAR_3 = VAR_1->event_file;

 FUNC_1(VAR_2->track_data.track_var, 0);

 if (VAR_2->action == VAR_0) {
  struct track_data *VAR_4;

  VAR_4 = FUNC_3(VAR_3->tr);
  if (VAR_4 && VAR_4->hist_data == VAR_1) {
   FUNC_4(VAR_3->tr);
   FUNC_5(VAR_4);
  }
 }

 FUNC_2(VAR_2->track_data.var_str);

 FUNC_0(VAR_2);
}
