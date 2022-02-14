
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_hard; } ;
struct hrtimer_sleeper {TYPE_1__ timer; } ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(struct hrtimer_sleeper *VAR_2,
       enum hrtimer_mode VAR_3)
{







 if (FUNC_0(VAR_0) && VAR_2->timer.is_hard)
  VAR_3 |= VAR_1;

 FUNC_1(&VAR_2->timer, VAR_3);
}
