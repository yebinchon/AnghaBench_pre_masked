
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; } ;
struct TYPE_2__ {int evtdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct clock_event_device* FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;

int FUNC_2(void)
{
 struct clock_event_device *VAR_3 = FUNC_0(VAR_2.evtdev);

 if (!VAR_3 || !(VAR_3->features & VAR_1))
  return 0;
 if (!(VAR_3->features & VAR_0))
  return 1;
 return FUNC_1();
}
