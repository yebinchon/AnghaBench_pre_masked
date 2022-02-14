
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; int (* set_state_shutdown ) (struct clock_event_device*) ;int (* set_state_periodic ) (struct clock_event_device*) ;int (* set_state_oneshot ) (struct clock_event_device*) ;int (* set_state_oneshot_stopped ) (struct clock_event_device*) ;} ;
typedef enum clock_event_state { ____Placeholder_clock_event_state } clock_event_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*) ;
 int FUNC_4 (struct clock_event_device*) ;
 int FUNC_5 (struct clock_event_device*) ;
 int FUNC_6 (struct clock_event_device*) ;

__attribute__((used)) static int FUNC_7(struct clock_event_device *VAR_5,
          enum clock_event_state VAR_6)
{
 if (VAR_5->features & VAR_0)
  return 0;


 switch (VAR_6) {
 case 132:


 case 128:
  if (VAR_5->set_state_shutdown)
   return VAR_5->set_state_shutdown(VAR_5);
  return 0;

 case 129:

  if (!(VAR_5->features & VAR_2))
   return -VAR_4;
  if (VAR_5->set_state_periodic)
   return VAR_5->set_state_periodic(VAR_5);
  return 0;

 case 131:

  if (!(VAR_5->features & VAR_1))
   return -VAR_4;
  if (VAR_5->set_state_oneshot)
   return VAR_5->set_state_oneshot(VAR_5);
  return 0;

 case 130:

  if (FUNC_0(!FUNC_2(VAR_5),
         "Current state: %d\n",
         FUNC_1(VAR_5)))
   return -VAR_3;

  if (VAR_5->set_state_oneshot_stopped)
   return VAR_5->set_state_oneshot_stopped(VAR_5);
  else
   return -VAR_4;

 default:
  return -VAR_4;
 }
}
