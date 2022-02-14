
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * mutex; int cond; int marked_as_waiting; } ;
typedef TYPE_1__ opj_worker_thread_t ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* worker_thread; void* user_data; int (* job_fn ) (void*,int ) ;} ;
typedef TYPE_2__ opj_worker_thread_list_t ;
typedef TYPE_2__ opj_worker_thread_job_t ;
struct TYPE_10__ {int signaling_threshold; int worker_threads_count; int pending_jobs_count; int * mutex; int waiting_worker_thread_count; TYPE_2__* waiting_worker_thread_list; TYPE_5__* job_queue; int cond; int tls; } ;
typedef TYPE_4__ opj_thread_pool_t ;
struct TYPE_11__ {struct TYPE_11__* next; TYPE_2__* job; } ;
typedef TYPE_5__ opj_job_list_t ;
typedef int (* opj_job_fn ) (void*,int ) ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

OPJ_BOOL FUNC_7(opj_thread_pool_t* VAR_2,
                                    opj_job_fn VAR_3,
                                    void* VAR_4)
{
    opj_worker_thread_job_t* VAR_5;
    opj_job_list_t* VAR_6;

    if (VAR_2->mutex == ((void*)0)) {
        VAR_3(VAR_4, VAR_2->tls);
        return VAR_1;
    }

    VAR_5 = (opj_worker_thread_job_t*)FUNC_4(sizeof(opj_worker_thread_job_t));
    if (VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    VAR_5->job_fn = VAR_3;
    VAR_5->user_data = VAR_4;

    VAR_6 = (opj_job_list_t*) FUNC_4(sizeof(opj_job_list_t));
    if (VAR_6 == ((void*)0)) {
        FUNC_3(VAR_5);
        return VAR_0;
    }
    VAR_6->job = VAR_5;

    FUNC_5(VAR_2->mutex);

    VAR_2->signaling_threshold = 100 * VAR_2->worker_threads_count;
    while (VAR_2->pending_jobs_count > VAR_2->signaling_threshold) {

        FUNC_2(VAR_2->cond, VAR_2->mutex);

    }

    VAR_6->next = VAR_2->job_queue;
    VAR_2->job_queue = VAR_6;
    VAR_2->pending_jobs_count ++;

    if (VAR_2->waiting_worker_thread_list) {
        opj_worker_thread_t* VAR_7;
        opj_worker_thread_list_t* VAR_8;
        opj_worker_thread_list_t* VAR_9;

        VAR_7 = VAR_2->waiting_worker_thread_list->worker_thread;

        FUNC_0(VAR_7->marked_as_waiting);
        VAR_7->marked_as_waiting = VAR_0;

        VAR_8 = VAR_2->waiting_worker_thread_list->next;
        VAR_9 = VAR_2->waiting_worker_thread_list;
        VAR_2->waiting_worker_thread_list = VAR_8;
        VAR_2->waiting_worker_thread_count --;

        FUNC_5(VAR_7->mutex);
        FUNC_6(VAR_2->mutex);
        FUNC_1(VAR_7->cond);
        FUNC_6(VAR_7->mutex);

        FUNC_3(VAR_9);
    } else {
        FUNC_6(VAR_2->mutex);
    }

    return VAR_1;
}
