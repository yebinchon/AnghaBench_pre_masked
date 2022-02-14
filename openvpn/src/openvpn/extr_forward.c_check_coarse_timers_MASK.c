
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ const coarse_timer_wakeup; } ;
struct context {TYPE_1__ c2; } ;


 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*,scalar_t__ const) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_2(struct context *VAR_1)
{
    const time_t VAR_2 = VAR_0;
    if (VAR_2 >= VAR_1->c2.coarse_timer_wakeup)
    {
        FUNC_0(VAR_1);
    }
    else
    {
        FUNC_1(VAR_1, VAR_1->c2.coarse_timer_wakeup - VAR_2);
    }
}
