
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hrtimer {int dummy; } ;
struct TYPE_3__ {struct hrtimer timer; } ;
struct TYPE_4__ {TYPE_1__ real; } ;
struct k_itimer {int it_interval; TYPE_2__ it; } ;
typedef int s64 ;
typedef int ktime_t ;


 int FUNC_0 (struct hrtimer*,int ,int ) ;

__attribute__((used)) static s64 FUNC_1(struct k_itimer *VAR_0, ktime_t VAR_1)
{
 struct hrtimer *VAR_2 = &VAR_0->it.real.timer;

 return FUNC_0(VAR_2, VAR_1, VAR_0->it_interval);
}
