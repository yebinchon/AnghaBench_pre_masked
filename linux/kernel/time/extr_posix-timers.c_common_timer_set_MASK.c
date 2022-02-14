
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct k_itimer {int it_active; int it_requeue_pending; scalar_t__ it_sigev_notify; void* it_interval; scalar_t__ it_overrun_last; struct k_clock* kclock; } ;
struct k_clock {scalar_t__ (* timer_try_to_cancel ) (struct k_itimer*) ;int (* timer_arm ) (struct k_itimer*,void*,int,int) ;} ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct itimerspec64 {TYPE_1__ it_value; TYPE_1__ it_interval; } ;
typedef void* ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct k_itimer*,struct itimerspec64*) ;
 scalar_t__ FUNC_1 (struct k_itimer*) ;
 int FUNC_2 (struct k_itimer*,void*,int,int) ;
 void* FUNC_3 (TYPE_1__) ;

int FUNC_4(struct k_itimer *VAR_4, int VAR_5,
       struct itimerspec64 *VAR_6,
       struct itimerspec64 *VAR_7)
{
 const struct k_clock *VAR_8 = VAR_4->kclock;
 bool VAR_9;
 ktime_t VAR_10;

 if (VAR_7)
  FUNC_0(VAR_4, VAR_7);


 VAR_4->it_interval = 0;




 if (VAR_8->timer_try_to_cancel(VAR_4) < 0)
  return VAR_3;

 VAR_4->it_active = 0;
 VAR_4->it_requeue_pending = (VAR_4->it_requeue_pending + 2) &
  ~VAR_0;
 VAR_4->it_overrun_last = 0;


 if (!VAR_6->it_value.tv_sec && !VAR_6->it_value.tv_nsec)
  return 0;

 VAR_4->it_interval = FUNC_3(VAR_6->it_interval);
 VAR_10 = FUNC_3(VAR_6->it_value);
 VAR_9 = VAR_4->it_sigev_notify == VAR_1;

 VAR_8->timer_arm(VAR_4, VAR_10, VAR_5 & VAR_2, VAR_9);
 VAR_4->it_active = !VAR_9;
 return 0;
}
