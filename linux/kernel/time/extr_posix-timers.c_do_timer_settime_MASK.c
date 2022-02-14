
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_t ;
struct k_itimer {struct k_clock* kclock; } ;
struct k_clock {int (* timer_set ) (struct k_itimer*,int,struct itimerspec64*,struct itimerspec64*) ;} ;
struct itimerspec64 {int it_value; int it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 struct k_itimer* FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct itimerspec64*,int ,int) ;
 int FUNC_3 (struct k_itimer*,int,struct itimerspec64*,struct itimerspec64*) ;
 struct k_itimer* FUNC_4 (struct k_itimer*,unsigned long*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct k_itimer*,unsigned long) ;

__attribute__((used)) static int FUNC_7(timer_t VAR_2, int VAR_3,
       struct itimerspec64 *VAR_4,
       struct itimerspec64 *VAR_5)
{
 const struct k_clock *VAR_6;
 struct k_itimer *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (!FUNC_5(&VAR_4->it_interval) ||
     !FUNC_5(&VAR_4->it_value))
  return -VAR_0;

 if (VAR_5)
  FUNC_2(VAR_5, 0, sizeof(*VAR_5));

 VAR_7 = FUNC_1(VAR_2, &VAR_8);
retry:
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = VAR_7->kclock;
 if (FUNC_0(!VAR_6 || !VAR_6->timer_set))
  VAR_9 = -VAR_0;
 else
  VAR_9 = VAR_6->timer_set(VAR_7, VAR_3, VAR_4, VAR_5);

 if (VAR_9 == VAR_1) {

  VAR_5 = ((void*)0);

  VAR_7 = FUNC_4(VAR_7, &VAR_8);
  goto retry;
 }
 FUNC_6(VAR_7, VAR_8);

 return VAR_9;
}
