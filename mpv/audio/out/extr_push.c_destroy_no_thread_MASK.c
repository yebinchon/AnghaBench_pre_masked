
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {int* wakeup_pipe; int lock; int wakeup; } ;
struct ao {TYPE_1__* driver; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* uninit ) (struct ao*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ao*) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;

    VAR_0->driver->uninit(VAR_0);

    for (int VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        int VAR_3 = VAR_1->wakeup_pipe[VAR_2];
        if (VAR_3 >= 0)
            FUNC_0(VAR_3);
    }

    FUNC_1(&VAR_1->wakeup);
    FUNC_2(&VAR_1->lock);
}
