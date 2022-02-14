
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {int dummy; } ;
struct TYPE_2__ {int (* save_data ) (struct hist_trigger_data*,struct tracing_map_elt*,void*,struct ring_buffer_event*,void*,struct action_data*,int *) ;} ;
struct action_data {TYPE_1__ track_data; } ;


 int FUNC_0 (struct hist_trigger_data*,struct tracing_map_elt*,void*,struct ring_buffer_event*,void*,struct action_data*,int *) ;

__attribute__((used)) static void FUNC_1(struct hist_trigger_data *VAR_0,
       struct tracing_map_elt *VAR_1, void *VAR_2,
       struct ring_buffer_event *VAR_3, void *VAR_4,
       struct action_data *VAR_5, u64 *VAR_6)
{
 if (VAR_5->track_data.save_data)
  VAR_5->track_data.save_data(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
