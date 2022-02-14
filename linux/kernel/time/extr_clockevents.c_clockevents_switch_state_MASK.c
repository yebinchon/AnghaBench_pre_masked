
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int mult; } ;
typedef enum clock_event_state { ____Placeholder_clock_event_state } clock_event_state ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct clock_event_device*,int) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*,int) ;
 scalar_t__ FUNC_4 (struct clock_event_device*) ;

void FUNC_5(struct clock_event_device *VAR_0,
         enum clock_event_state VAR_1)
{
 if (FUNC_2(VAR_0) != VAR_1) {
  if (FUNC_1(VAR_0, VAR_1))
   return;

  FUNC_3(VAR_0, VAR_1);





  if (FUNC_4(VAR_0)) {
   if (FUNC_0(!VAR_0->mult))
    VAR_0->mult = 1;
  }
 }
}
