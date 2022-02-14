
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * thread; int marked_as_waiting; int * mutex; int * cond; TYPE_2__* tp; } ;
typedef TYPE_1__ opj_worker_thread_t ;
struct TYPE_6__ {int worker_threads_count; int waiting_worker_thread_count; scalar_t__ state; int mutex; int * cond; TYPE_1__* worker_threads; } ;
typedef TYPE_2__ opj_thread_pool_t ;
typedef int OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static OPJ_BOOL FUNC_9(opj_thread_pool_t* VAR_4, int VAR_5)
{
    int VAR_6;
    OPJ_BOOL VAR_7 = VAR_2;

    FUNC_0(VAR_5 > 0);

    VAR_4->cond = FUNC_2();
    if (VAR_4->cond == ((void*)0)) {
        return VAR_1;
    }

    VAR_4->worker_threads = (opj_worker_thread_t*) FUNC_1((size_t)VAR_5,
                         sizeof(opj_worker_thread_t));
    if (VAR_4->worker_threads == ((void*)0)) {
        return VAR_1;
    }
    VAR_4->worker_threads_count = VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        VAR_4->worker_threads[VAR_6].tp = VAR_4;

        VAR_4->worker_threads[VAR_6].mutex = FUNC_4();
        if (VAR_4->worker_threads[VAR_6].mutex == ((void*)0)) {
            VAR_4->worker_threads_count = VAR_6;
            VAR_7 = VAR_1;
            break;
        }

        VAR_4->worker_threads[VAR_6].cond = FUNC_2();
        if (VAR_4->worker_threads[VAR_6].cond == ((void*)0)) {
            FUNC_5(VAR_4->worker_threads[VAR_6].mutex);
            VAR_4->worker_threads_count = VAR_6;
            VAR_7 = VAR_1;
            break;
        }

        VAR_4->worker_threads[VAR_6].marked_as_waiting = VAR_1;

        VAR_4->worker_threads[VAR_6].thread = FUNC_8(VAR_3,
                                       &(VAR_4->worker_threads[VAR_6]));
        if (VAR_4->worker_threads[VAR_6].thread == ((void*)0)) {
            VAR_4->worker_threads_count = VAR_6;
            VAR_7 = VAR_1;
            break;
        }
    }



    FUNC_6(VAR_4->mutex);
    while (VAR_4->waiting_worker_thread_count < VAR_5) {
        FUNC_3(VAR_4->cond, VAR_4->mutex);
    }
    FUNC_7(VAR_4->mutex);


    if (VAR_4->state == VAR_0) {
        VAR_7 = VAR_1;
    }

    return VAR_7;
}
