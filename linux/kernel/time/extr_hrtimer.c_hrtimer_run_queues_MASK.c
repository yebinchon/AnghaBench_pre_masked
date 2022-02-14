
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {int softirq_activated; int lock; int softirq_expires_next; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hrtimer_cpu_base*) ;
 int FUNC_1 (struct hrtimer_cpu_base*,int ,unsigned long,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct hrtimer_cpu_base*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 struct hrtimer_cpu_base* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(void)
{
 struct hrtimer_cpu_base *VAR_4 = FUNC_9(&VAR_3);
 unsigned long VAR_5;
 ktime_t VAR_6;

 if (FUNC_0(VAR_4))
  return;
 if (FUNC_10(!FUNC_2())) {
  FUNC_3();
  return;
 }

 FUNC_7(&VAR_4->lock, VAR_5);
 VAR_6 = FUNC_4(VAR_4);

 if (!FUNC_5(VAR_6, VAR_4->softirq_expires_next)) {
  VAR_4->softirq_expires_next = VAR_2;
  VAR_4->softirq_activated = 1;
  FUNC_6(VAR_1);
 }

 FUNC_1(VAR_4, VAR_6, VAR_5, VAR_0);
 FUNC_8(&VAR_4->lock, VAR_5);
}
