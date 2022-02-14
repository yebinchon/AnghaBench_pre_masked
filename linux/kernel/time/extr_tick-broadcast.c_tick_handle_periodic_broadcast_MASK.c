
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tick_device {TYPE_2__* evtdev; } ;
struct clock_event_device {int next_event; } ;
typedef int ktime_t ;
struct TYPE_4__ {int (* event_handler ) (TYPE_2__*) ;} ;
struct TYPE_3__ {int evtdev; } ;


 scalar_t__ FUNC_0 (struct clock_event_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct clock_event_device*,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 struct tick_device* FUNC_7 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(struct clock_event_device *VAR_4)
{
 struct tick_device *VAR_5 = FUNC_7(&VAR_2);
 bool VAR_6;

 FUNC_4(&VAR_1);


 if (FUNC_1(VAR_0.evtdev)) {
  FUNC_5(&VAR_1);
  return;
 }

 VAR_6 = FUNC_8();

 if (FUNC_0(VAR_4)) {
  ktime_t VAR_7 = FUNC_3(VAR_4->next_event, VAR_3);

  FUNC_2(VAR_4, VAR_7, 1);
 }
 FUNC_5(&VAR_1);






 if (VAR_6)
  VAR_5->evtdev->event_handler(VAR_5->evtdev);
}
