
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct synth_event {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct action_data {int var_ref_idx; struct synth_event* synth_event; } ;


 int FUNC_0 (struct synth_event*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0,
    struct tracing_map_elt *VAR_1, void *VAR_2,
    struct ring_buffer_event *VAR_3, void *VAR_4,
    struct action_data *VAR_5, u64 *VAR_6)
{
 struct synth_event *VAR_7 = VAR_5->synth_event;

 FUNC_0(VAR_7, VAR_6, VAR_5->var_ref_idx);
}
