
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; int event_handler; int owner; } ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,struct clock_event_device*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*,struct clock_event_device*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

void FUNC_6(struct clock_event_device *VAR_4)
{
 struct clock_event_device *VAR_5 = VAR_2.evtdev;

 if (!FUNC_3(VAR_5, VAR_4))
  return;

 if (!FUNC_5(VAR_4->owner))
  return;

 FUNC_0(VAR_5, VAR_4);
 if (VAR_5)
  VAR_5->event_handler = VAR_1;
 VAR_2.evtdev = VAR_4;
 if (!FUNC_1(VAR_3))
  FUNC_2(VAR_4);
 if (VAR_4->features & VAR_0)
  FUNC_4();
}
