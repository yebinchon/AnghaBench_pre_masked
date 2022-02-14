
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tick_device {int evtdev; } ;
struct clock_event_device {int features; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct clock_event_device*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct tick_device* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (struct tick_device*,struct clock_event_device*,int,int ) ;

void FUNC_6(struct clock_event_device *VAR_2)
{
 struct tick_device *VAR_3 = FUNC_3(&VAR_1);
 int VAR_4 = FUNC_2();

 FUNC_0(VAR_3->evtdev, VAR_2);
 FUNC_5(VAR_3, VAR_2, VAR_4, FUNC_1(VAR_4));
 if (VAR_2->features & VAR_0)
  FUNC_4();
}
