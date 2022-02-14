
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_cpu_base {struct hrtimer_clock_base* clock_base; } ;
struct hrtimer_clock_base {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;

__attribute__((used)) static struct hrtimer_clock_base *
FUNC_1(struct hrtimer_cpu_base *VAR_0, unsigned int *VAR_1)
{
 unsigned int VAR_2;

 if (!*VAR_1)
  return ((void*)0);

 VAR_2 = FUNC_0(*VAR_1);
 *VAR_1 &= ~(1U << VAR_2);

 return &VAR_0->clock_base[VAR_2];
}
