
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refcnt_lock; int parameters; struct TYPE_6__* path; struct TYPE_6__* name; int module; scalar_t__ flag_initialized; struct TYPE_6__* error_strings; int error_lib; int provctx; int (* teardown ) (int ) ;int refcnt; } ;
typedef TYPE_1__ OSSL_PROVIDER ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(OSSL_PROVIDER *VAR_1)
{
    if (VAR_1 != ((void*)0)) {
        int VAR_2 = 0;

        FUNC_0(&VAR_1->refcnt, &VAR_2, VAR_1->refcnt_lock);
        if (VAR_2 < 2 && VAR_1->flag_initialized) {

            FUNC_5(VAR_1);

            if (VAR_1->teardown != ((void*)0))
                VAR_1->teardown(VAR_1->provctx);


            if (VAR_1->error_strings != ((void*)0)) {
                FUNC_3(VAR_1->error_lib, VAR_1->error_strings);
                FUNC_4(VAR_1->error_strings);
                VAR_1->error_strings = ((void*)0);
            }


            VAR_1->flag_initialized = 0;
        }





        if (VAR_2 == 0) {

            FUNC_2(VAR_1->module);

            FUNC_4(VAR_1->name);
            FUNC_4(VAR_1->path);
            FUNC_6(VAR_1->parameters, VAR_0);

            FUNC_1(VAR_1->refcnt_lock);

            FUNC_4(VAR_1);
        }
    }
}
