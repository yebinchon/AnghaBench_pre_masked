
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hrtimer_cpu_base {int active_bases; struct hrtimer* next_timer; } ;
struct hrtimer_clock_base {int index; int active; struct hrtimer_cpu_base* cpu_base; } ;
struct hrtimer {int state; int node; } ;


 int VAR_0 ;
 int FUNC_0 (struct hrtimer_cpu_base*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct hrtimer *VAR_1,
        struct hrtimer_clock_base *VAR_2,
        u8 VAR_3, int VAR_4)
{
 struct hrtimer_cpu_base *VAR_5 = VAR_2->cpu_base;
 u8 VAR_6 = VAR_1->state;

 VAR_1->state = VAR_3;
 if (!(VAR_6 & VAR_0))
  return;

 if (!FUNC_1(&VAR_2->active, &VAR_1->node))
  VAR_5->active_bases &= ~(1 << VAR_2->index);
 if (VAR_4 && VAR_1 == VAR_5->next_timer)
  FUNC_0(VAR_5, 1);
}
