
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hrtimer_cpu_base {scalar_t__ expires_next; scalar_t__ hang_detected; scalar_t__ softirq_expires_next; scalar_t__ softirq_activated; TYPE_1__* next_timer; } ;
typedef scalar_t__ ktime_t ;
struct TYPE_2__ {scalar_t__ is_soft; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hrtimer_cpu_base*,int ) ;
 int FUNC_1 (struct hrtimer_cpu_base*) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3(struct hrtimer_cpu_base *VAR_2, int VAR_3)
{
 ktime_t VAR_4;




 VAR_4 = FUNC_0(VAR_2, VAR_0);

 if (VAR_2->next_timer && VAR_2->next_timer->is_soft) {





  if (VAR_2->softirq_activated)
   VAR_4 = FUNC_0(VAR_2,
        VAR_1);
  else
   VAR_2->softirq_expires_next = VAR_4;
 }

 if (VAR_3 && VAR_4 == VAR_2->expires_next)
  return;

 VAR_2->expires_next = VAR_4;
 if (!FUNC_1(VAR_2) || VAR_2->hang_detected)
  return;

 FUNC_2(VAR_2->expires_next, 1);
}
