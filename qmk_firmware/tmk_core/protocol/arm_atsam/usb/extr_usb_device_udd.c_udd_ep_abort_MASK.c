
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int busy; int nb_trans; int (* call_trans ) (int ,int ,int ) ;} ;
typedef TYPE_1__ udd_ep_job_t ;
typedef int udd_ep_id_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(udd_ep_id_t VAR_2) {
    udd_ep_job_t *VAR_3;

    FUNC_2(&VAR_1, VAR_2);


    VAR_3 = FUNC_1(VAR_2);
    if (!VAR_3->busy) {
        return;
    }
    VAR_3->busy = 0;
    if (((void*)0) != VAR_3->call_trans) {

        VAR_3->call_trans(VAR_0, VAR_3->nb_trans, VAR_2);
    }
}
