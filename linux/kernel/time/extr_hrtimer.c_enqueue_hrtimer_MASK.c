
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hrtimer_clock_base {int index; int active; TYPE_1__* cpu_base; } ;
struct hrtimer {int node; int state; } ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;
struct TYPE_2__ {int active_bases; } ;


 int VAR_0 ;
 int FUNC_0 (struct hrtimer*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct hrtimer *VAR_1,
      struct hrtimer_clock_base *VAR_2,
      enum hrtimer_mode VAR_3)
{
 FUNC_0(VAR_1, VAR_3);

 VAR_2->cpu_base->active_bases |= 1 << VAR_2->index;

 VAR_1->state = VAR_0;

 return FUNC_1(&VAR_2->active, &VAR_1->node);
}
