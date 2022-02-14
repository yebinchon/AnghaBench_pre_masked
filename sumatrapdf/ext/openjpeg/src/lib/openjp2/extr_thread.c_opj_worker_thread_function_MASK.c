
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * tp; } ;
typedef TYPE_1__ opj_worker_thread_t ;
struct TYPE_7__ {int user_data; int (* job_fn ) (int ,int *) ;} ;
typedef TYPE_2__ opj_worker_thread_job_t ;
typedef int opj_tls_t ;
typedef int opj_thread_pool_t ;
typedef scalar_t__ OPJ_BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(void* VAR_2)
{
    opj_worker_thread_t* VAR_3;
    opj_thread_pool_t* VAR_4;
    opj_tls_t* VAR_5;
    OPJ_BOOL VAR_6 = VAR_0;

    VAR_3 = (opj_worker_thread_t*) VAR_2;
    VAR_4 = VAR_3->tp;
    VAR_5 = FUNC_3();

    while (VAR_1) {
        opj_worker_thread_job_t* VAR_7 = FUNC_1(VAR_4, VAR_3,
                                       VAR_6);
        if (VAR_7 == ((void*)0)) {
            break;
        }

        if (VAR_7->job_fn) {
            VAR_7->job_fn(VAR_7->user_data, VAR_5);
        }
        FUNC_0(VAR_7);
        VAR_6 = VAR_1;
    }

    FUNC_2(VAR_5);
}
