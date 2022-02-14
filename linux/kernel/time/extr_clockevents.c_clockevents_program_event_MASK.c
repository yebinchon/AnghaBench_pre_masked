
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; int (* set_next_ktime ) (scalar_t__,struct clock_event_device*) ;unsigned long long mult; unsigned long long shift; int (* set_next_event ) (unsigned long,struct clock_event_device*) ;scalar_t__ min_delta_ns; scalar_t__ max_delta_ns; scalar_t__ next_event; } ;
typedef scalar_t__ ktime_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (struct clock_event_device*) ;
 scalar_t__ FUNC_4 (struct clock_event_device*) ;
 int FUNC_5 (struct clock_event_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,struct clock_event_device*) ;
 int FUNC_12 (unsigned long,struct clock_event_device*) ;

int FUNC_13(struct clock_event_device *VAR_2, ktime_t VAR_3,
         bool VAR_4)
{
 unsigned long long VAR_5;
 int64_t VAR_6;
 int VAR_7;

 if (FUNC_1(VAR_3 < 0))
  return -VAR_1;

 VAR_2->next_event = VAR_3;

 if (FUNC_4(VAR_2))
  return 0;


 FUNC_0(!FUNC_3(VAR_2), "Current state: %d\n",
    FUNC_2(VAR_2));


 if (VAR_2->features & VAR_0)
  return VAR_2->set_next_ktime(VAR_3, VAR_2);

 VAR_6 = FUNC_8(FUNC_7(VAR_3, FUNC_6()));
 if (VAR_6 <= 0)
  return VAR_4 ? FUNC_5(VAR_2) : -VAR_1;

 VAR_6 = FUNC_10(VAR_6, (int64_t) VAR_2->max_delta_ns);
 VAR_6 = FUNC_9(VAR_6, (int64_t) VAR_2->min_delta_ns);

 VAR_5 = ((unsigned long long) VAR_6 * VAR_2->mult) >> VAR_2->shift;
 VAR_7 = VAR_2->set_next_event((unsigned long) VAR_5, VAR_2);

 return (VAR_7 && VAR_4) ? FUNC_5(VAR_2) : VAR_7;
}
