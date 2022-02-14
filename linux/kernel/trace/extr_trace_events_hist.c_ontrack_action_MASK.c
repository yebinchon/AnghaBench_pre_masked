
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* var_ref; } ;
struct action_data {TYPE_2__ track_data; } ;
struct TYPE_3__ {size_t var_ref_idx; } ;


 scalar_t__ FUNC_0 (struct tracing_map_elt*,struct action_data*,int ) ;
 int FUNC_1 (struct hist_trigger_data*,struct tracing_map_elt*,void*,struct ring_buffer_event*,void*,struct action_data*,int *) ;
 int FUNC_2 (struct hist_trigger_data*,struct tracing_map_elt*,struct action_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct hist_trigger_data *VAR_0,
      struct tracing_map_elt *VAR_1, void *VAR_2,
      struct ring_buffer_event *VAR_3, void *VAR_4,
      struct action_data *VAR_5, u64 *VAR_6)
{
 u64 VAR_7 = VAR_6[VAR_5->track_data.var_ref->var_ref_idx];

 if (FUNC_0(VAR_1, VAR_5, VAR_7)) {
  FUNC_2(VAR_0, VAR_1, VAR_5, VAR_7);
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
