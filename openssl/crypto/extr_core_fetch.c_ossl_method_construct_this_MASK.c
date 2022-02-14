
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct construct_data_st {int mcm_data; TYPE_1__* mcm; int operation_id; int * store; int libctx; scalar_t__ force_store; } ;
struct TYPE_5__ {int property_definition; int algorithm_names; int implementation; } ;
struct TYPE_4__ {int (* destruct ) (void*,int ) ;int (* put ) (int ,int *,void*,int *,int ,int ,int ,int ) ;void* (* construct ) (int ,int ,int *,int ) ;} ;
typedef int OSSL_PROVIDER ;
typedef TYPE_2__ OSSL_ALGORITHM ;


 void* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int *,void*,int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *,void*,int *,int ,int ,int ,int ) ;
 int FUNC_3 (void*,int ) ;

__attribute__((used)) static void FUNC_4(OSSL_PROVIDER *VAR_0,
                                       const OSSL_ALGORITHM *VAR_1,
                                       int VAR_2, void *VAR_3)
{
    struct construct_data_st *VAR_4 = VAR_3;
    void *VAR_5 = ((void*)0);

    if ((VAR_5 = VAR_4->mcm->construct(VAR_1->algorithm_names,
                                       VAR_1->implementation, VAR_0,
                                       VAR_4->mcm_data)) == ((void*)0))
        return;
    if (VAR_4->force_store || !VAR_2) {




        VAR_4->mcm->put(VAR_4->libctx, ((void*)0), VAR_5, VAR_0,
                       VAR_4->operation_id, VAR_1->algorithm_names,
                       VAR_1->property_definition, VAR_4->mcm_data);
    }

    VAR_4->mcm->put(VAR_4->libctx, VAR_4->store, VAR_5, VAR_0,
                   VAR_4->operation_id, VAR_1->algorithm_names,
                   VAR_1->property_definition, VAR_4->mcm_data);


    VAR_4->mcm->destruct(VAR_5, VAR_4->mcm_data);
}
