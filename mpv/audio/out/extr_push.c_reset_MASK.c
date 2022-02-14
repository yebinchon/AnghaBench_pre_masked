
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao_push_state {int paused; int still_playing; int lock; int buffer; } ;
struct ao {TYPE_1__* driver; struct ao_push_state* api_priv; } ;
struct TYPE_2__ {int (* reset ) (struct ao*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ao*) ;
 int FUNC_4 (struct ao*) ;

__attribute__((used)) static void FUNC_5(struct ao *VAR_0)
{
    struct ao_push_state *VAR_1 = VAR_0->api_priv;
    FUNC_1(&VAR_1->lock);
    if (VAR_0->driver->reset)
        VAR_0->driver->reset(VAR_0);
    FUNC_0(VAR_1->buffer);
    VAR_1->paused = 0;
    if (VAR_1->still_playing)
        FUNC_4(VAR_0);
    VAR_1->still_playing = 0;
    FUNC_2(&VAR_1->lock);
}
