
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hist_trigger_data {unsigned int n_actions; struct action_data** actions; } ;
struct TYPE_4__ {char* var_str; } ;
struct TYPE_3__ {char* event_system; char* event; } ;
struct action_data {scalar_t__ handler; scalar_t__ action; unsigned int n_params; char** params; char* synth_event_name; char* action_name; TYPE_2__ track_data; TYPE_1__ match_data; scalar_t__ use_trace_keyword; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static bool FUNC_1(struct hist_trigger_data *VAR_3,
     struct hist_trigger_data *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 if (VAR_3->n_actions != VAR_4->n_actions)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->n_actions; VAR_5++) {
  struct action_data *VAR_7 = VAR_3->actions[VAR_5];
  struct action_data *VAR_8 = VAR_4->actions[VAR_5];
  char *VAR_9, *VAR_10;

  if (VAR_7->handler != VAR_8->handler)
   return 0;
  if (VAR_7->action != VAR_8->action)
   return 0;

  if (VAR_7->n_params != VAR_8->n_params)
   return 0;

  for (VAR_6 = 0; VAR_6 < VAR_7->n_params; VAR_6++) {
   if (FUNC_0(VAR_7->params[VAR_6], VAR_8->params[VAR_6]) != 0)
    return 0;
  }

  if (VAR_7->use_trace_keyword)
   VAR_9 = VAR_7->synth_event_name;
  else
   VAR_9 = VAR_7->action_name;

  if (VAR_8->use_trace_keyword)
   VAR_10 = VAR_8->synth_event_name;
  else
   VAR_10 = VAR_8->action_name;

  if (FUNC_0(VAR_9, VAR_10) != 0)
   return 0;

  if (VAR_7->handler == VAR_1) {
   if (FUNC_0(VAR_7->match_data.event_system,
       VAR_8->match_data.event_system) != 0)
    return 0;
   if (FUNC_0(VAR_7->match_data.event,
       VAR_8->match_data.event) != 0)
    return 0;
  } else if (VAR_7->handler == VAR_2 ||
      VAR_7->handler == VAR_0) {
   if (FUNC_0(VAR_7->track_data.var_str,
       VAR_8->track_data.var_str) != 0)
    return 0;
  }
 }

 return 1;
}
