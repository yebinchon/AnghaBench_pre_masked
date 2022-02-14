
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {int softirq_next_timer; } ;
typedef scalar_t__ ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct hrtimer_cpu_base*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct hrtimer_cpu_base *VAR_2, bool VAR_3)
{
 ktime_t VAR_4;




 VAR_4 = FUNC_0(VAR_2, VAR_0);






 if (VAR_4 == VAR_1)
  return;





 FUNC_1(VAR_2->softirq_next_timer, VAR_3);
}
