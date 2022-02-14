
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timer_t ;
struct k_itimer {struct k_clock* kclock; } ;
struct k_clock {int (* timer_get ) (struct k_itimer*,struct itimerspec64*) ;} ;
struct itimerspec64 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct k_itimer* FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct itimerspec64*,int ,int) ;
 int FUNC_3 (struct k_itimer*,struct itimerspec64*) ;
 int FUNC_4 (struct k_itimer*,unsigned long) ;

__attribute__((used)) static int FUNC_5(timer_t VAR_1, struct itimerspec64 *VAR_2)
{
 struct k_itimer *VAR_3;
 const struct k_clock *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = 0;

 VAR_3 = FUNC_1(VAR_1, &VAR_5);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_4 = VAR_3->kclock;
 if (FUNC_0(!VAR_4 || !VAR_4->timer_get))
  VAR_6 = -VAR_0;
 else
  VAR_4->timer_get(VAR_3, VAR_2);

 FUNC_4(VAR_3, VAR_5);
 return VAR_6;
}
