
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

void FUNC_3(void)
{
 struct clock_event_device *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1, VAR_3);

 VAR_2 = VAR_0.evtdev;
 if (VAR_2)
  FUNC_0(VAR_2);

 FUNC_2(&VAR_1, VAR_3);
}
