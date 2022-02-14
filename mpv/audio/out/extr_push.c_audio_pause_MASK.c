
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {int paused; int lock; } ;
struct ao {TYPE_1__* driver; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* pause ) (struct ao*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ao*) ;
 int FUNC_3 (struct ao*) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;
    FUNC_0(&VAR_1->lock);
    if (VAR_0->driver->pause)
        VAR_0->driver->pause(VAR_0);
    VAR_1->paused = 1;
    FUNC_3(VAR_0);
    FUNC_1(&VAR_1->lock);
}
