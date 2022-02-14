
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {unsigned int n_actions; struct action_data** actions; } ;
struct action_data {int (* fn ) (struct hist_trigger_data*,struct tracing_map_elt*,void*,struct ring_buffer_event*,void*,struct action_data*,int *) ;} ;


 int FUNC_0 (struct hist_trigger_data*,struct tracing_map_elt*,void*,struct ring_buffer_event*,void*,struct action_data*,int *) ;

__attribute__((used)) static void
FUNC_1(struct hist_trigger_data *VAR_0,
       struct tracing_map_elt *VAR_1, void *VAR_2,
       struct ring_buffer_event *VAR_3, void *VAR_4,
       u64 *VAR_5)
{
 struct action_data *VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->n_actions; VAR_7++) {
  VAR_6 = VAR_0->actions[VAR_7];
  VAR_6->fn(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, VAR_5);
 }
}
