
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tick_device {int mode; struct clock_event_device* evtdev; } ;
struct clock_event_device {int features; void (* event_handler ) (struct clock_event_device*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct clock_event_device*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 struct tick_device* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (struct clock_event_device*) ;

int FUNC_6(void (*VAR_5)(struct clock_event_device *))
{
 struct tick_device *VAR_6 = FUNC_3(&VAR_4);
 struct clock_event_device *VAR_7 = VAR_6->evtdev;

 if (!VAR_7 || !(VAR_7->features & VAR_0) ||
      !FUNC_5(VAR_7)) {

  FUNC_2("Clockevents: could not switch to one-shot mode:");
  if (!VAR_7) {
   FUNC_1(" no tick device\n");
  } else {
   if (!FUNC_5(VAR_7))
    FUNC_1(" %s is not functional.\n", VAR_7->name);
   else
    FUNC_1(" %s does not support one-shot mode.\n",
     VAR_7->name);
  }
  return -VAR_2;
 }

 VAR_6->mode = VAR_3;
 VAR_7->event_handler = VAR_5;
 FUNC_0(VAR_7, VAR_1);
 FUNC_4();
 return 0;
}
