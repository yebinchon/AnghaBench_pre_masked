
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct hrtimer_sleeper {int task; TYPE_1__ timer; } ;
typedef enum hrtimer_mode { ____Placeholder_hrtimer_mode } hrtimer_mode ;
typedef int clockid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hrtimer_sleeper *VAR_5,
       clockid_t VAR_6, enum hrtimer_mode VAR_7)
{
 if (FUNC_0(VAR_0)) {
  if (FUNC_2(VAR_3) && !(VAR_7 & VAR_2))
   VAR_7 |= VAR_1;
 }

 FUNC_1(&VAR_5->timer, VAR_6, VAR_7);
 VAR_5->timer.function = VAR_4;
 VAR_5->task = VAR_3;
}
