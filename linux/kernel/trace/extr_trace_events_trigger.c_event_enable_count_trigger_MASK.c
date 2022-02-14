
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_event {int dummy; } ;
struct event_trigger_data {int count; struct enable_trigger_data* private_data; } ;
struct enable_trigger_data {int enable; TYPE_1__* file; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct event_trigger_data*,void*,struct ring_buffer_event*) ;

__attribute__((used)) static void
FUNC_1(struct event_trigger_data *VAR_1, void *VAR_2,
      struct ring_buffer_event *VAR_3)
{
 struct enable_trigger_data *VAR_4 = VAR_1->private_data;

 if (!VAR_1->count)
  return;


 if (VAR_4->enable == !(VAR_4->file->flags & VAR_0))
  return;

 if (VAR_1->count != -1)
  (VAR_1->count)--;

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
