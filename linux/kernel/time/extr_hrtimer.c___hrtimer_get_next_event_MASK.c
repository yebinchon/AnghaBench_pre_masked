
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {unsigned int active_bases; struct hrtimer* next_timer; struct hrtimer* softirq_next_timer; int softirq_activated; } ;
struct hrtimer {int dummy; } ;
typedef int ktime_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hrtimer_cpu_base*,int *,unsigned int,int ) ;

__attribute__((used)) static ktime_t
FUNC_1(struct hrtimer_cpu_base *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 struct hrtimer *VAR_6 = ((void*)0);
 ktime_t VAR_7 = VAR_2;

 if (!VAR_3->softirq_activated && (VAR_4 & VAR_1)) {
  VAR_5 = VAR_3->active_bases & VAR_1;
  VAR_3->softirq_next_timer = ((void*)0);
  VAR_7 = FUNC_0(VAR_3, ((void*)0),
        VAR_5, VAR_2);

  VAR_6 = VAR_3->softirq_next_timer;
 }

 if (VAR_4 & VAR_0) {
  VAR_5 = VAR_3->active_bases & VAR_0;
  VAR_3->next_timer = VAR_6;
  VAR_7 = FUNC_0(VAR_3, ((void*)0), VAR_5,
        VAR_7);
 }

 return VAR_7;
}
