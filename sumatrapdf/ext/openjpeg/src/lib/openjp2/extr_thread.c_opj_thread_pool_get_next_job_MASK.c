
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int mutex; int cond; scalar_t__ marked_as_waiting; } ;
typedef TYPE_1__ opj_worker_thread_t ;
struct TYPE_9__ {struct TYPE_9__* next; TYPE_1__* worker_thread; } ;
typedef TYPE_2__ opj_worker_thread_list_t ;
typedef int opj_worker_thread_job_t ;
struct TYPE_10__ {scalar_t__ pending_jobs_count; scalar_t__ signaling_threshold; scalar_t__ state; scalar_t__ waiting_worker_thread_count; scalar_t__ worker_threads_count; int mutex; int cond; TYPE_2__* waiting_worker_thread_list; TYPE_4__* job_queue; } ;
typedef TYPE_3__ opj_thread_pool_t ;
struct TYPE_11__ {int * job; struct TYPE_11__* next; } ;
typedef TYPE_4__ opj_job_list_t ;
typedef scalar_t__ OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static opj_worker_thread_job_t* FUNC_7(
    opj_thread_pool_t* VAR_4,
    opj_worker_thread_t* VAR_5,
    OPJ_BOOL VAR_6)
{
    while (VAR_3) {
        opj_job_list_t* VAR_7;

        FUNC_5(VAR_4->mutex);

        if (VAR_6) {
            VAR_6 = VAR_2;
            VAR_4->pending_jobs_count --;

            if (VAR_4->pending_jobs_count <= VAR_4->signaling_threshold) {
                FUNC_1(VAR_4->cond);
            }
        }

        if (VAR_4->state == VAR_1) {
            FUNC_6(VAR_4->mutex);
            return ((void*)0);
        }
        VAR_7 = VAR_4->job_queue;
        if (VAR_7) {
            opj_worker_thread_job_t* VAR_8;
            VAR_4->job_queue = VAR_7->next;

            VAR_8 = VAR_7->job;
            FUNC_6(VAR_4->mutex);
            FUNC_3(VAR_7);
            return VAR_8;
        }


        if (!VAR_5->marked_as_waiting) {
            opj_worker_thread_list_t* VAR_9;

            VAR_5->marked_as_waiting = VAR_3;
            VAR_4->waiting_worker_thread_count ++;
            FUNC_0(VAR_4->waiting_worker_thread_count <= VAR_4->worker_threads_count);

            VAR_9 = (opj_worker_thread_list_t*) FUNC_4(sizeof(opj_worker_thread_list_t));
            if (VAR_9 == ((void*)0)) {
                VAR_4->state = VAR_0;
                FUNC_1(VAR_4->cond);

                FUNC_6(VAR_4->mutex);
                return ((void*)0);
            }

            VAR_9->worker_thread = VAR_5;
            VAR_9->next = VAR_4->waiting_worker_thread_list;
            VAR_4->waiting_worker_thread_list = VAR_9;
        }


        FUNC_1(VAR_4->cond);

        FUNC_5(VAR_5->mutex);
        FUNC_6(VAR_4->mutex);


        FUNC_2(VAR_5->cond, VAR_5->mutex);

        FUNC_6(VAR_5->mutex);

    }
}
