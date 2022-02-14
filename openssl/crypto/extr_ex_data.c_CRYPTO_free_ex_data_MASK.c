
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int * ctx; int * sk; } ;
struct TYPE_16__ {int argp; int argl; int (* free_func ) (void*,void*,TYPE_4__*,int,int ,int ) ;} ;
struct TYPE_15__ {int meth; } ;
struct TYPE_14__ {int ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef TYPE_2__ EX_CALLBACKS ;
typedef TYPE_3__ EX_CALLBACK ;
typedef TYPE_4__ CRYPTO_EX_DATA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__**) ;
 TYPE_3__** FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_3__**) ;
 TYPE_2__* FUNC_6 (int *,int) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (void*,void*,TYPE_4__*,int,int ,int ) ;

void FUNC_12(int VAR_0, void *VAR_1, CRYPTO_EX_DATA *VAR_2)
{
    int VAR_3, VAR_4;
    EX_CALLBACKS *VAR_5;
    void *VAR_6;
    EX_CALLBACK *VAR_7;
    EX_CALLBACK *VAR_8[10];
    EX_CALLBACK **VAR_9 = ((void*)0);
    OSSL_EX_DATA_GLOBAL *VAR_10;

    if ((VAR_5 = FUNC_6(VAR_2->ctx, VAR_0)) == ((void*)0))
        goto err;
    VAR_10 = FUNC_7(VAR_2->ctx);
    if (VAR_10 == ((void*)0))
        goto err;

    VAR_3 = FUNC_8(VAR_5->meth);
    if (VAR_3 > 0) {
        if (VAR_3 < (int)FUNC_5(VAR_8))
            VAR_9 = VAR_8;
        else
            VAR_9 = FUNC_4(sizeof(*VAR_9) * VAR_3);
        if (VAR_9 != ((void*)0))
            for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
                VAR_9[VAR_4] = FUNC_9(VAR_5->meth, VAR_4);
    }
    FUNC_0(VAR_10->ex_data_lock);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (VAR_9 != ((void*)0))
            VAR_7 = VAR_9[VAR_4];
        else {
            FUNC_1(VAR_10->ex_data_lock);
            VAR_7 = FUNC_9(VAR_5->meth, VAR_4);
            FUNC_0(VAR_10->ex_data_lock);
        }
        if (VAR_7 != ((void*)0) && VAR_7->free_func != ((void*)0)) {
            VAR_6 = FUNC_2(VAR_2, VAR_4);
            VAR_7->free_func(VAR_1, VAR_6, VAR_2, VAR_4, VAR_7->argl, VAR_7->argp);
        }
    }

    if (VAR_9 != VAR_8)
        FUNC_3(VAR_9);
 err:
    FUNC_10(VAR_2->sk);
    VAR_2->sk = ((void*)0);
    VAR_2->ctx = ((void*)0);
}
