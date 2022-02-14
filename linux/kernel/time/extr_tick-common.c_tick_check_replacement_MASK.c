
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct clock_event_device*,struct clock_event_device*,int ) ;
 int FUNC_2 (struct clock_event_device*,struct clock_event_device*) ;

bool FUNC_3(struct clock_event_device *VAR_0,
       struct clock_event_device *VAR_1)
{
 if (!FUNC_1(VAR_0, VAR_1, FUNC_0()))
  return 0;

 return FUNC_2(VAR_0, VAR_1);
}
