
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {int n_field_vars; int field_vars; } ;


 int FUNC_0 (struct tracing_map_elt*,struct ring_buffer_event*,void*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0,
         struct tracing_map_elt *VAR_1,
         struct ring_buffer_event *VAR_2,
         void *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0->field_vars,
       VAR_0->n_field_vars, 0);
}
