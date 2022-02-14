
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ordered_events_buffer {TYPE_1__* event; } ;
struct ordered_events {scalar_t__ copy_on_queue; } ;
struct TYPE_2__ {int event; } ;


 int FUNC_0 (struct ordered_events*,int ) ;
 int FUNC_1 (struct ordered_events_buffer*) ;

__attribute__((used)) static void
FUNC_2(struct ordered_events_buffer *VAR_0,
       unsigned int VAR_1, struct ordered_events *VAR_2)
{
 if (VAR_2->copy_on_queue) {
  unsigned int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_0(VAR_2, VAR_0->event[VAR_3].event);
 }

 FUNC_1(VAR_0);
}
