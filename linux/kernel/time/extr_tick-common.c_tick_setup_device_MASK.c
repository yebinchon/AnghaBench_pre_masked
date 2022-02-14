
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tick_device {scalar_t__ mode; struct clock_event_device* evtdev; } ;
struct cpumask {int dummy; } ;
struct clock_event_device {void (* event_handler ) (struct clock_event_device*) ;int irq; int cpumask; int next_event; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (int ,struct cpumask const*) ;
 int FUNC_3 (int ,struct cpumask const*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct clock_event_device*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (struct clock_event_device*,void (*) (struct clock_event_device*),int ) ;
 int FUNC_8 (struct clock_event_device*,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct tick_device *VAR_8,
         struct clock_event_device *VAR_9, int VAR_10,
         const struct cpumask *VAR_11)
{
 void (*VAR_12)(struct clock_event_device *) = ((void*)0);
 ktime_t VAR_13 = 0;




 if (!VAR_8->evtdev) {




  if (VAR_5 == VAR_3) {
   VAR_5 = VAR_10;

   VAR_6 = FUNC_4();
   VAR_7 = VAR_1 / VAR_0;
  }




  VAR_8->mode = VAR_2;
 } else {
  VAR_12 = VAR_8->evtdev->event_handler;
  VAR_13 = VAR_8->evtdev->next_event;
  VAR_8->evtdev->event_handler = FUNC_1;
 }

 VAR_8->evtdev = VAR_9;





 if (!FUNC_2(VAR_9->cpumask, VAR_11))
  FUNC_3(VAR_9->irq, VAR_11);
 if (FUNC_5(VAR_9, VAR_10))
  return;

 if (VAR_8->mode == VAR_2)
  FUNC_8(VAR_9, 0);
 else
  FUNC_7(VAR_9, VAR_12, VAR_13);
}
