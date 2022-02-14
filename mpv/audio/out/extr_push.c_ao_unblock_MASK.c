
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_push_state {int need_wakeup; int initial_unblocked; int lock; int wakeup; } ;
struct ao {struct ao_push_state* api_priv; int * api; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ao*) ;

void FUNC_4(struct ao *VAR_1)
{
    if (VAR_1->api == &VAR_0) {
        struct ao_push_state *VAR_2 = VAR_1->api_priv;
        FUNC_1(&VAR_2->lock);
        VAR_2->need_wakeup = 1;
        VAR_2->initial_unblocked = 1;
        FUNC_3(VAR_1);
        FUNC_0(&VAR_2->wakeup);
        FUNC_2(&VAR_2->lock);
    }
}
