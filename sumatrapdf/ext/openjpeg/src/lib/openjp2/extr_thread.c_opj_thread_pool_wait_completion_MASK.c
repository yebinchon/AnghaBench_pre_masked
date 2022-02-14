
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signaling_threshold; int pending_jobs_count; int * mutex; int cond; } ;
typedef TYPE_1__ opj_thread_pool_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(opj_thread_pool_t* VAR_0,
                                     int VAR_1)
{
    if (VAR_0->mutex == ((void*)0)) {
        return;
    }

    if (VAR_1 < 0) {
        VAR_1 = 0;
    }
    FUNC_1(VAR_0->mutex);
    VAR_0->signaling_threshold = VAR_1;
    while (VAR_0->pending_jobs_count > VAR_1) {

        FUNC_0(VAR_0->cond, VAR_0->mutex);

    }
    FUNC_2(VAR_0->mutex);
}
