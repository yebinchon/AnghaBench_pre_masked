
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {int n_field_var_str; int n_save_vars; int save_vars; } ;
struct action_data {int dummy; } ;


 int FUNC_0 (struct tracing_map_elt*,struct ring_buffer_event*,void*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0,
     struct tracing_map_elt *VAR_1, void *VAR_2,
     struct ring_buffer_event *VAR_3, void *VAR_4,
     struct action_data *VAR_5, u64 *VAR_6)
{
 FUNC_0(VAR_1, VAR_3, VAR_2, VAR_0->save_vars,
       VAR_0->n_save_vars, VAR_0->n_field_var_str);
}
