
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {int mode; struct clock_event_device* evtdev; } ;




 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct clock_event_device*) ;
 int FUNC_5 (struct clock_event_device*) ;

void FUNC_6(void)
{
 struct clock_event_device *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_1, VAR_4);

 VAR_3 = VAR_0.evtdev;

 if (VAR_3) {
  FUNC_0(VAR_3);

  switch (VAR_0.mode) {
  case 128:
   if (!FUNC_1(VAR_2))
    FUNC_4(VAR_3);
   break;
  case 129:
   if (!FUNC_1(VAR_2))
    FUNC_5(VAR_3);
   break;
  }
 }
 FUNC_3(&VAR_1, VAR_4);
}
