
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* timer_t ;
struct k_itimer {int it_id; int kclock; } ;
struct k_clock {int (* timer_wait_running ) (struct k_itimer*) ;} ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct k_itimer* FUNC_2 (void*,unsigned long*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct k_itimer*) ;
 int FUNC_6 (struct k_itimer*,unsigned long) ;

__attribute__((used)) static struct k_itimer *FUNC_7(struct k_itimer *VAR_0,
        unsigned long *VAR_1)
{
 const struct k_clock *VAR_2 = FUNC_0(VAR_0->kclock);
 timer_t VAR_3 = FUNC_0(VAR_0->it_id);


 FUNC_3();
 FUNC_6(VAR_0, *VAR_1);

 if (!FUNC_1(!VAR_2->timer_wait_running))
  VAR_2->timer_wait_running(VAR_0);

 FUNC_4();

 return FUNC_2(VAR_3, VAR_1);
}
