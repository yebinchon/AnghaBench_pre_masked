
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_event_file {int dummy; } ;
struct trace_array {int dummy; } ;
struct hist_trigger_data {unsigned int n_actions; struct action_data** actions; TYPE_2__* event_file; } ;
struct hist_field {int dummy; } ;
struct TYPE_3__ {char* event_system; char* event; } ;
struct action_data {scalar_t__ handler; TYPE_1__ match_data; } ;
struct TYPE_4__ {struct trace_array* tr; } ;


 int VAR_0 ;
 struct hist_field* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct hist_field* FUNC_2 (struct trace_event_file*,char*) ;
 struct trace_event_file* FUNC_3 (struct trace_array*,char*,char*,char*) ;
 int FUNC_4 (struct trace_array*,int ,int ) ;

__attribute__((used)) static struct hist_field *
FUNC_5(struct hist_trigger_data *VAR_3, char *VAR_4)
{
 struct trace_array *VAR_5 = VAR_3->event_file->tr;
 struct hist_field *VAR_6, *VAR_7 = ((void*)0);
 struct trace_event_file *VAR_8;
 unsigned int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_3->n_actions; VAR_9++) {
  struct action_data *VAR_10 = VAR_3->actions[VAR_9];

  if (VAR_10->handler == VAR_1) {
   char *VAR_11 = VAR_10->match_data.event_system;
   char *VAR_12 = VAR_10->match_data.event;

   VAR_8 = FUNC_3(VAR_5, VAR_11, VAR_12, VAR_4);
   if (!VAR_8)
    continue;
   VAR_6 = FUNC_2(VAR_8, VAR_4);
   if (VAR_6) {
    if (VAR_7) {
     FUNC_4(VAR_5, VAR_2,
       FUNC_1(VAR_4));
     return FUNC_0(-VAR_0);
    }

    VAR_7 = VAR_6;
   }
  }
 }
 return VAR_7;
}
