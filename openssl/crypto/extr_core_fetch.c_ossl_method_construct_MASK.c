
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct construct_data_st {int operation_id; int force_store; int * store; void* mcm_data; TYPE_1__* mcm; int * libctx; } ;
struct TYPE_3__ {int (* dealloc_tmp_store ) (int *) ;void* (* get ) (int *,int *,void*) ;int * (* alloc_tmp_store ) (int *) ;} ;
typedef TYPE_1__ OSSL_METHOD_CONSTRUCT_METHOD ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int *,int,int *,int ,struct construct_data_st*) ;
 int VAR_0 ;
 void* FUNC_1 (int *,int *,void*) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int *,int *,void*) ;
 int FUNC_4 (int *) ;

void *FUNC_5(OPENSSL_CTX *VAR_1, int VAR_2,
                            int VAR_3,
                            OSSL_METHOD_CONSTRUCT_METHOD *VAR_4, void *VAR_5)
{
    void *VAR_6 = ((void*)0);

    if ((VAR_6 = VAR_4->get(VAR_1, ((void*)0), VAR_5)) == ((void*)0)) {
        struct construct_data_st VAR_7;





        if ((VAR_7.store = VAR_4->alloc_tmp_store(VAR_1)) == ((void*)0))
            goto fin;

        VAR_7.libctx = VAR_1;
        VAR_7.operation_id = VAR_2;
        VAR_7.force_store = VAR_3;
        VAR_7.mcm = VAR_4;
        VAR_7.mcm_data = VAR_5;
        FUNC_0(VAR_1, VAR_2, ((void*)0),
                              VAR_0, &VAR_7);

        VAR_6 = VAR_4->get(VAR_1, VAR_7.store, VAR_5);
        VAR_4->dealloc_tmp_store(VAR_7.store);
    }

 fin:
    return VAR_6;
}
