
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;
struct event_trigger_data {int count; } ;


 int FUNC_0 (struct event_trigger_data*,void*,struct ring_buffer_event*) ;

__attribute__((used)) static void
FUNC_1(struct event_trigger_data *VAR_0, void *VAR_1,
     struct ring_buffer_event *VAR_2)
{
 if (!VAR_0->count)
  return;

 if (VAR_0->count != -1)
  (VAR_0->count)--;

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
