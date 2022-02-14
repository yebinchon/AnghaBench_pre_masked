
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {long argl; int * free_func; int * dup_func; int * new_func; void* argp; } ;
struct TYPE_9__ {int * meth; } ;
struct TYPE_8__ {int ex_data_lock; } ;
typedef TYPE_1__ OSSL_EX_DATA_GLOBAL ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ EX_CALLBACKS ;
typedef TYPE_3__ EX_CALLBACK ;
typedef int CRYPTO_EX_new ;
typedef int CRYPTO_EX_free ;
typedef int CRYPTO_EX_dup ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int *,int) ;
 TYPE_1__* FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int,TYPE_3__*) ;

int FUNC_10(OPENSSL_CTX *VAR_2, int VAR_3, long VAR_4,
                               void *VAR_5, CRYPTO_EX_new *VAR_6,
                               CRYPTO_EX_dup *VAR_7,
                               CRYPTO_EX_free *VAR_8)
{
    int VAR_9 = -1;
    EX_CALLBACK *VAR_10;
    EX_CALLBACKS *VAR_11;
    OSSL_EX_DATA_GLOBAL *VAR_12 = FUNC_5(VAR_2);

    if (VAR_12 == ((void*)0))
        return -1;

    VAR_11 = FUNC_4(VAR_2, VAR_3);
    if (VAR_11 == ((void*)0))
        return -1;

    if (VAR_11->meth == ((void*)0)) {
        VAR_11->meth = FUNC_6();


        if (VAR_11->meth == ((void*)0)
            || !FUNC_8(VAR_11->meth, ((void*)0))) {
            FUNC_1(VAR_0, VAR_1);
            goto err;
        }
    }

    VAR_10 = (EX_CALLBACK *)FUNC_3(sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        goto err;
    }
    VAR_10->argl = VAR_4;
    VAR_10->argp = VAR_5;
    VAR_10->new_func = VAR_6;
    VAR_10->dup_func = VAR_7;
    VAR_10->free_func = VAR_8;

    if (!FUNC_8(VAR_11->meth, ((void*)0))) {
        FUNC_1(VAR_0, VAR_1);
        FUNC_2(VAR_10);
        goto err;
    }
    VAR_9 = FUNC_7(VAR_11->meth) - 1;
    (void)FUNC_9(VAR_11->meth, VAR_9, VAR_10);

 err:
    FUNC_0(VAR_12->ex_data_lock);
    return VAR_9;
}
