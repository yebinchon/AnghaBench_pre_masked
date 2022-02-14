
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {int paused; int lock; scalar_t__ expected_end_time; } ;
struct ao {TYPE_1__* driver; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* resume ) (struct ao*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ao*) ;
 int FUNC_3 (struct ao*) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;
    FUNC_0(&VAR_1->lock);
    if (VAR_0->driver->resume)
        VAR_0->driver->resume(VAR_0);
    VAR_1->paused = 0;
    VAR_1->expected_end_time = 0;
    FUNC_3(VAR_0);
    FUNC_1(&VAR_1->lock);
}
