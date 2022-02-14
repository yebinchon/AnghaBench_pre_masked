
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tracing_map_elt {int dummy; } ;
struct trace_array {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct hist_trigger_data {TYPE_2__* attrs; TYPE_1__* event_file; } ;
struct hist_field {struct hist_trigger_data* hist_data; } ;
struct TYPE_4__ {scalar_t__ ts_in_usecs; } ;
struct TYPE_3__ {struct trace_array* tr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ring_buffer_event*) ;
 scalar_t__ FUNC_2 (struct trace_array*) ;

__attribute__((used)) static u64 FUNC_3(struct hist_field *VAR_0,
    struct tracing_map_elt *VAR_1,
    struct ring_buffer_event *VAR_2,
    void *VAR_3)
{
 struct hist_trigger_data *VAR_4 = VAR_0->hist_data;
 struct trace_array *VAR_5 = VAR_4->event_file->tr;

 u64 VAR_6 = FUNC_1(VAR_2);

 if (VAR_4->attrs->ts_in_usecs && FUNC_2(VAR_5))
  VAR_6 = FUNC_0(VAR_6);

 return VAR_6;
}
