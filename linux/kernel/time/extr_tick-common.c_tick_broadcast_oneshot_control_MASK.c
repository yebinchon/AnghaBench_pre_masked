
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tick_device {TYPE_1__* evtdev; } ;
typedef enum tick_broadcast_state { ____Placeholder_tick_broadcast_state } tick_broadcast_state ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct tick_device* FUNC_1 (int *) ;
 int VAR_1 ;

int FUNC_2(enum tick_broadcast_state VAR_2)
{
 struct tick_device *VAR_3 = FUNC_1(&VAR_1);

 if (!(VAR_3->evtdev->features & VAR_0))
  return 0;

 return FUNC_0(VAR_2);
}
