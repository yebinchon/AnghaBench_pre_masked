
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {scalar_t__ softirq_expires_next; scalar_t__ expires_next; scalar_t__ hang_detected; struct hrtimer* next_timer; scalar_t__ in_hrtirq; struct hrtimer* softirq_next_timer; scalar_t__ softirq_activated; } ;
struct hrtimer_clock_base {struct hrtimer_cpu_base* cpu_base; int offset; } ;
struct hrtimer {scalar_t__ is_soft; struct hrtimer_clock_base* base; } ;
typedef scalar_t__ ktime_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hrtimer_cpu_base*) ;
 int VAR_0 ;
 int FUNC_2 (struct hrtimer*) ;
 scalar_t__ FUNC_3 (struct hrtimer*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 struct hrtimer_cpu_base* FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_8(struct hrtimer *VAR_1, bool VAR_2)
{
 struct hrtimer_cpu_base *VAR_3 = FUNC_6(&VAR_0);
 struct hrtimer_clock_base *VAR_4 = VAR_1->base;
 ktime_t VAR_5 = FUNC_5(FUNC_2(VAR_1), VAR_4->offset);

 FUNC_0(FUNC_3(VAR_1) < 0);





 if (VAR_5 < 0)
  VAR_5 = 0;

 if (VAR_1->is_soft) {







  struct hrtimer_cpu_base *VAR_6 = VAR_4->cpu_base;

  if (VAR_6->softirq_activated)
   return;

  if (!FUNC_4(VAR_5, VAR_6->softirq_expires_next))
   return;

  VAR_6->softirq_next_timer = VAR_1;
  VAR_6->softirq_expires_next = VAR_5;

  if (!FUNC_4(VAR_5, VAR_6->expires_next) ||
      !VAR_2)
   return;
 }





 if (VAR_4->cpu_base != VAR_3)
  return;
 if (VAR_3->in_hrtirq)
  return;

 if (VAR_5 >= VAR_3->expires_next)
  return;


 VAR_3->next_timer = VAR_1;
 VAR_3->expires_next = VAR_5;
 if (!FUNC_1(VAR_3) || VAR_3->hang_detected)
  return;





 FUNC_7(VAR_5, 1);
}
