
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_config_shadow {int num_listeners; int lock; struct m_config_cache** listeners; } ;
struct m_config_cache {int in_list; void (* wakeup_cb ) (void*) ;void* wakeup_cb_ctx; struct m_config_shadow* shadow; } ;


 int FUNC_0 (int *,struct m_config_cache**,int,struct m_config_cache*) ;
 int FUNC_1 (struct m_config_cache**,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct m_config_cache**) ;

void FUNC_6(struct m_config_cache *VAR_0,
                                  void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    struct m_config_shadow *VAR_4 = VAR_0->shadow;

    FUNC_3(&VAR_4->lock);
    if (VAR_0->in_list) {
        for (int VAR_5 = 0; VAR_5 < VAR_4->num_listeners; VAR_5++) {
            if (VAR_4->listeners[VAR_5] == VAR_0) {
                FUNC_1(VAR_4->listeners, VAR_4->num_listeners, VAR_5);
                break;
            }
        }
        for (int VAR_6 = 0; VAR_6 < VAR_4->num_listeners; VAR_6++)
            FUNC_2(VAR_4->listeners[VAR_6] != VAR_0);

        if (!VAR_4->num_listeners) {
            FUNC_5(VAR_4->listeners);
            VAR_4->listeners = ((void*)0);
        }
    }
    if (VAR_1) {
        FUNC_0(((void*)0), VAR_4->listeners, VAR_4->num_listeners, VAR_0);
        VAR_0->in_list = 1;
        VAR_0->wakeup_cb = VAR_1;
        VAR_0->wakeup_cb_ctx = VAR_3;
    }
    FUNC_4(&VAR_4->lock);
}
