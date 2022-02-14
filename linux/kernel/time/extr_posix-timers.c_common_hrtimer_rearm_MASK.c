
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hrtimer {TYPE_3__* base; } ;
struct TYPE_4__ {struct hrtimer timer; } ;
struct TYPE_5__ {TYPE_1__ real; } ;
struct k_itimer {int it_interval; int it_overrun; TYPE_2__ it; } ;
struct TYPE_6__ {int (* get_time ) () ;} ;


 scalar_t__ FUNC_0 (struct hrtimer*,int ,int ) ;
 int FUNC_1 (struct hrtimer*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct k_itimer *VAR_0)
{
 struct hrtimer *VAR_1 = &VAR_0->it.real.timer;

 VAR_0->it_overrun += FUNC_0(VAR_1, VAR_1->base->get_time(),
         VAR_0->it_interval);
 FUNC_1(VAR_1);
}
