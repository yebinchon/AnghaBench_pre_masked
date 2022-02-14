
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_itimer {scalar_t__ it_active; scalar_t__ it_interval; struct k_clock* kclock; } ;
struct k_clock {scalar_t__ (* timer_try_to_cancel ) (struct k_itimer*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct k_itimer*) ;

int FUNC_1(struct k_itimer *VAR_1)
{
 const struct k_clock *VAR_2 = VAR_1->kclock;

 VAR_1->it_interval = 0;
 if (VAR_2->timer_try_to_cancel(VAR_1) < 0)
  return VAR_0;
 VAR_1->it_active = 0;
 return 0;
}
