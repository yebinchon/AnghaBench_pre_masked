
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct k_itimer {struct k_clock* kclock; } ;
struct k_clock {int (* timer_del ) (struct k_itimer*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct k_itimer*) ;

__attribute__((used)) static inline int FUNC_2(struct k_itimer *VAR_1)
{
 const struct k_clock *VAR_2 = VAR_1->kclock;

 if (FUNC_0(!VAR_2 || !VAR_2->timer_del))
  return -VAR_0;
 return VAR_2->timer_del(VAR_1);
}
