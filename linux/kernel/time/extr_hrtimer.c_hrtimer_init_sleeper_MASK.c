
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hrtimer_sleeper {int timer; } ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;
typedef int clockid_t ;


 int FUNC_0 (struct hrtimer_sleeper*,int ,int) ;
 int FUNC_1 (int *,int ,int) ;

void FUNC_2(struct hrtimer_sleeper *VAR_0, clockid_t VAR_1,
     enum hrtimer_mode VAR_2)
{
 FUNC_1(&VAR_0->timer, VAR_1, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2);

}
