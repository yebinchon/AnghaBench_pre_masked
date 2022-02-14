
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clock_event_device {unsigned long min_delta_ticks; unsigned long max_delta_ticks; } ;


 int FUNC_0 (struct clock_event_device*,int ) ;
 int FUNC_1 (struct clock_event_device*) ;

void FUNC_2(struct clock_event_device *VAR_0,
         u32 VAR_1, unsigned long VAR_2,
         unsigned long VAR_3)
{
 VAR_0->min_delta_ticks = VAR_2;
 VAR_0->max_delta_ticks = VAR_3;
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0);
}
