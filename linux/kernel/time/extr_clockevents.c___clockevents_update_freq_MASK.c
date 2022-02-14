
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {int next_event; } ;


 int VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ) ;
 scalar_t__ FUNC_1 (struct clock_event_device*) ;
 scalar_t__ FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*,int ) ;
 int FUNC_4 (struct clock_event_device*,int ,int) ;

int FUNC_5(struct clock_event_device *VAR_1, u32 VAR_2)
{
 FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_1))
  return FUNC_4(VAR_1, VAR_1->next_event, 0);

 if (FUNC_2(VAR_1))
  return FUNC_0(VAR_1, VAR_0);

 return 0;
}
