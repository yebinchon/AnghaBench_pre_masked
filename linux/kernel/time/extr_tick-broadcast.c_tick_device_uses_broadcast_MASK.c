
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; int event_handler; } ;
struct TYPE_2__ {int mode; struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct clock_event_device*) ;
 int FUNC_9 (struct clock_event_device*) ;
 int FUNC_10 (struct clock_event_device*) ;
 int FUNC_11 (struct clock_event_device*) ;
 int VAR_6 ;

int FUNC_12(struct clock_event_device *VAR_7, int VAR_8)
{
 struct clock_event_device *VAR_9 = VAR_2.evtdev;
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_5(&VAR_3, VAR_10);







 if (!FUNC_10(VAR_7)) {
  VAR_7->event_handler = VAR_6;
  FUNC_11(VAR_7);
  FUNC_3(VAR_8, VAR_4);
  if (VAR_2.mode == 128)
   FUNC_9(VAR_9);
  else
   FUNC_8(VAR_9);
  VAR_11 = 1;
 } else {




  if (!(VAR_7->features & VAR_0))
   FUNC_1(VAR_8, VAR_4);
  else
   FUNC_11(VAR_7);





  if (!FUNC_4(VAR_8, VAR_5))
   FUNC_1(VAR_8, VAR_4);

  switch (VAR_2.mode) {
  case 129:
   FUNC_7(VAR_8);
   VAR_11 = 0;
   break;

  case 128:





   if (FUNC_2(VAR_4) && VAR_9)
    FUNC_0(VAR_9);
   if (VAR_9 && !(VAR_9->features & VAR_1))
    VAR_11 = FUNC_4(VAR_8, VAR_4);
   break;
  default:
   break;
  }
 }
 FUNC_6(&VAR_3, VAR_10);
 return VAR_11;
}
