
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tick_device {struct clock_event_device* evtdev; } ;
struct clock_event_device {int features; } ;
typedef enum tick_broadcast_mode { ____Placeholder_tick_broadcast_mode } tick_broadcast_mode ;
struct TYPE_2__ {scalar_t__ mode; struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;
 struct tick_device* FUNC_9 (int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (struct clock_event_device*) ;
 int FUNC_11 (struct clock_event_device*) ;
 int VAR_8 ;
 int FUNC_12 (struct clock_event_device*) ;
 int FUNC_13 (struct clock_event_device*,int ) ;

void FUNC_14(enum tick_broadcast_mode VAR_9)
{
 struct clock_event_device *VAR_10, *VAR_11;
 struct tick_device *VAR_12;
 int VAR_13, VAR_14;
 unsigned long VAR_15;


 FUNC_6(&VAR_5, VAR_15);
 VAR_12 = FUNC_9(&VAR_8);
 VAR_11 = VAR_12->evtdev;




 if (!VAR_11 || !(VAR_11->features & VAR_0))
  goto out;

 if (!FUNC_12(VAR_11))
  goto out;

 VAR_13 = FUNC_8();
 VAR_10 = VAR_3.evtdev;
 VAR_14 = FUNC_2(VAR_6);

 switch (VAR_9) {
 case 130:
  VAR_4 = 1;

 case 128:
  FUNC_3(VAR_13, VAR_7);
  if (!FUNC_5(VAR_13, VAR_6)) {
   if (VAR_10 && !(VAR_10->features & VAR_1) &&
       VAR_3.mode == VAR_2)
    FUNC_0(VAR_11);
  }
  break;

 case 129:
  if (VAR_4)
   break;
  FUNC_1(VAR_13, VAR_7);
  if (FUNC_4(VAR_13, VAR_6)) {
   if (VAR_3.mode ==
       VAR_2)
    FUNC_13(VAR_11, 0);
  }
  break;
 }

 if (VAR_10) {
  if (FUNC_2(VAR_6)) {
   if (!VAR_14)
    FUNC_0(VAR_10);
  } else if (VAR_14) {
   if (VAR_3.mode == VAR_2)
    FUNC_11(VAR_10);
   else
    FUNC_10(VAR_10);
  }
 }
out:
 FUNC_7(&VAR_5, VAR_15);
}
