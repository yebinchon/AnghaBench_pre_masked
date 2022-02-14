
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; } ;
typedef enum tick_broadcast_state { ____Placeholder_tick_broadcast_state } tick_broadcast_state ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

int FUNC_0(enum tick_broadcast_state VAR_3)
{
 struct clock_event_device *VAR_4 = VAR_2.evtdev;

 if (!VAR_4 || (VAR_4->features & VAR_0))
  return -VAR_1;

 return 0;
}
