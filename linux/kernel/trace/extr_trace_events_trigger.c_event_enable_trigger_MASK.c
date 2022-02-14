
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_event {int dummy; } ;
struct event_trigger_data {struct enable_trigger_data* private_data; } ;
struct enable_trigger_data {TYPE_1__* file; scalar_t__ enable; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct event_trigger_data *VAR_1, void *VAR_2,
       struct ring_buffer_event *VAR_3)
{
 struct enable_trigger_data *VAR_4 = VAR_1->private_data;

 if (VAR_4->enable)
  FUNC_0(VAR_0, &VAR_4->file->flags);
 else
  FUNC_1(VAR_0, &VAR_4->file->flags);
}
