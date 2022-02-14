
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct clock_event_device {int features; int max_delta_ticks; scalar_t__ min_delta_ticks; void* max_delta_ns; void* min_delta_ns; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,struct clock_event_device*,int) ;
 int FUNC_1 (struct clock_event_device*,int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct clock_event_device *VAR_2, u32 VAR_3)
{
 u64 VAR_4;

 if (!(VAR_2->features & VAR_0))
  return;






 VAR_4 = VAR_2->max_delta_ticks;
 FUNC_2(VAR_4, VAR_3);
 if (!VAR_4)
  VAR_4 = 1;
 else if (VAR_4 > 600 && VAR_2->max_delta_ticks > VAR_1)
  VAR_4 = 600;

 FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_2->min_delta_ns = FUNC_0(VAR_2->min_delta_ticks, VAR_2, 0);
 VAR_2->max_delta_ns = FUNC_0(VAR_2->max_delta_ticks, VAR_2, 1);
}
