
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hrtimer {TYPE_1__* base; int function; } ;
struct TYPE_6__ {struct hrtimer timer; } ;
struct TYPE_5__ {TYPE_3__ real; } ;
struct k_itimer {scalar_t__ it_clock; TYPE_2__ it; int * kclock; } ;
typedef int ktime_t ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;
struct TYPE_4__ {int (* get_time ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hrtimer*,scalar_t__,int) ;
 int FUNC_1 (struct hrtimer*,int ) ;
 int FUNC_2 (struct hrtimer*,int) ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct k_itimer *VAR_6, ktime_t VAR_7,
          bool VAR_8, bool VAR_9)
{
 struct hrtimer *VAR_10 = &VAR_6->it.real.timer;
 enum hrtimer_mode VAR_11;

 VAR_11 = VAR_8 ? VAR_1 : VAR_2;
 if (VAR_6->it_clock == VAR_0)
  VAR_6->kclock = VAR_8 ? &VAR_4 : &VAR_3;

 FUNC_0(&VAR_6->it.real.timer, VAR_6->it_clock, VAR_11);
 VAR_6->it.real.timer.function = VAR_5;

 if (!VAR_8)
  VAR_7 = FUNC_3(VAR_7, VAR_10->base->get_time());
 FUNC_1(VAR_10, VAR_7);

 if (!VAR_9)
  FUNC_2(VAR_10, VAR_1);
}
