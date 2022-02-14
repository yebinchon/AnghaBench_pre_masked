
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int worker_threads_count; int tls; int mutex; scalar_t__ cond; struct TYPE_6__* waiting_worker_thread_list; struct TYPE_6__* next; struct TYPE_6__* worker_threads; int thread; int state; } ;
typedef TYPE_1__ opj_worker_thread_list_t ;
typedef TYPE_1__ opj_thread_pool_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(opj_thread_pool_t* VAR_1)
{
    if (!VAR_1) {
        return;
    }
    if (VAR_1->cond) {
        int VAR_2;
        FUNC_7(VAR_1, 0);

        FUNC_4(VAR_1->mutex);
        VAR_1->state = VAR_0;
        FUNC_5(VAR_1->mutex);

        for (VAR_2 = 0; VAR_2 < VAR_1->worker_threads_count; VAR_2++) {
            FUNC_4(VAR_1->worker_threads[VAR_2].mutex);
            FUNC_1(VAR_1->worker_threads[VAR_2].cond);
            FUNC_5(VAR_1->worker_threads[VAR_2].mutex);
            FUNC_6(VAR_1->worker_threads[VAR_2].thread);
            FUNC_0(VAR_1->worker_threads[VAR_2].cond);
            FUNC_3(VAR_1->worker_threads[VAR_2].mutex);
        }

        FUNC_2(VAR_1->worker_threads);

        while (VAR_1->waiting_worker_thread_list != ((void*)0)) {
            opj_worker_thread_list_t* VAR_3 = VAR_1->waiting_worker_thread_list->next;
            FUNC_2(VAR_1->waiting_worker_thread_list);
            VAR_1->waiting_worker_thread_list = VAR_3;
        }

        FUNC_0(VAR_1->cond);
    }
    FUNC_3(VAR_1->mutex);
    FUNC_8(VAR_1->tls);
    FUNC_2(VAR_1);
}
