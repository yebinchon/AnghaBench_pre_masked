
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ event_handler; int next_event; } ;
typedef int ktime_t ;


 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (struct clock_event_device*,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;

void FUNC_6(struct clock_event_device *VAR_1)
{
 int VAR_2 = FUNC_3();
 ktime_t VAR_3 = VAR_1->next_event;

 FUNC_4(VAR_2);
 if (!FUNC_0(VAR_1))
  return;
 for (;;) {




  VAR_3 = FUNC_2(VAR_3, VAR_0);

  if (!FUNC_1(VAR_1, VAR_3, 0))
   return;
  if (FUNC_5())
   FUNC_4(VAR_2);
 }
}
