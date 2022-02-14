
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {scalar_t__ next_event; } ;
typedef scalar_t__ ktime_t ;
struct TYPE_2__ {int evtdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct clock_event_device* FUNC_0 (int ) ;
 int FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*,scalar_t__,int) ;
 int FUNC_3 (struct clock_event_device*,int ) ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(ktime_t VAR_4, int VAR_5)
{
 struct clock_event_device *VAR_6 = FUNC_0(VAR_3.evtdev);

 if (FUNC_4(VAR_4 == VAR_2)) {



  FUNC_3(VAR_6, VAR_1);
  VAR_6->next_event = VAR_2;
  return 0;
 }

 if (FUNC_4(FUNC_1(VAR_6))) {




  FUNC_3(VAR_6, VAR_0);
 }

 return FUNC_2(VAR_6, VAR_4, VAR_5);
}
