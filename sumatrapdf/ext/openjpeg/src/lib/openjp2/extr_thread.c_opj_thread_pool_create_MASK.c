
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int mutex; int tls; int state; } ;
typedef TYPE_1__ opj_thread_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 () ;

opj_thread_pool_t* FUNC_6(int VAR_1)
{
    opj_thread_pool_t* VAR_2;

    VAR_2 = (opj_thread_pool_t*) FUNC_0(1, sizeof(opj_thread_pool_t));
    if (!VAR_2) {
        return ((void*)0);
    }
    VAR_2->state = VAR_0;

    if (VAR_1 <= 0) {
        VAR_2->tls = FUNC_5();
        if (!VAR_2->tls) {
            FUNC_1(VAR_2);
            VAR_2 = ((void*)0);
        }
        return VAR_2;
    }

    VAR_2->mutex = FUNC_2();
    if (!VAR_2->mutex) {
        FUNC_1(VAR_2);
        return ((void*)0);
    }
    if (!FUNC_4(VAR_2, VAR_1)) {
        FUNC_3(VAR_2);
        return ((void*)0);
    }
    return VAR_2;
}
