
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int ctx; } ;
struct TYPE_13__ {int argp; int argl; int (* new_func ) (void*,int *,TYPE_4__*,int,int ,int ) ;} ;
struct TYPE_12__ {int meth; } ;
struct TYPE_11__ {int ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef TYPE_2__ EX_CALLBACKS ;
typedef TYPE_3__ EX_CALLBACK ;
typedef TYPE_4__ CRYPTO_EX_DATA ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_2 (int ,int) ;
 TYPE_1__* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int) ;
 int FUNC_5 (void*,int *,TYPE_4__*,int,int ,int ) ;

int FUNC_6(int VAR_0, void *VAR_1, CRYPTO_EX_DATA *VAR_2,
                         int VAR_3)
{
    EX_CALLBACK *VAR_4;
    EX_CALLBACKS *VAR_5;
    void *VAR_6;
    OSSL_EX_DATA_GLOBAL *VAR_7 = FUNC_3(VAR_2->ctx);

    if (VAR_7 == ((void*)0))
        return 0;

    VAR_6 = FUNC_1(VAR_2, VAR_3);


    if (VAR_6 != ((void*)0))
        return 1;

    VAR_5 = FUNC_2(VAR_2->ctx, VAR_0);
    if (VAR_5 == ((void*)0))
        return 0;
    VAR_4 = FUNC_4(VAR_5->meth, VAR_3);
    FUNC_0(VAR_7->ex_data_lock);





    if (VAR_4->new_func == ((void*)0))
        return 0;

    VAR_4->new_func(VAR_1, ((void*)0), VAR_2, VAR_3, VAR_4->argl, VAR_4->argp);

    return 1;
}
