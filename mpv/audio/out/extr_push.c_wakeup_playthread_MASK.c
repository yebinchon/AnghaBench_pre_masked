
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {int need_wakeup; int wakeup; } ;
struct ao {TYPE_1__* driver; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* wakeup ) (struct ao*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ao*) ;

__attribute__((used)) static void FUNC_2(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;
    if (VAR_0->driver->wakeup)
        VAR_0->driver->wakeup(VAR_0);
    VAR_1->need_wakeup = 1;
    FUNC_0(&VAR_1->wakeup);
}
