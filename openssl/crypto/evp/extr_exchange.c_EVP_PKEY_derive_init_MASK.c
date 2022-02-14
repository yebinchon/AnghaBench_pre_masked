
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int (* init ) (int *,void*) ;int prov; int * (* newctx ) (int ) ;} ;
struct TYPE_13__ {int * exchprovctx; TYPE_5__* exchange; } ;
struct TYPE_14__ {TYPE_1__ kex; } ;
struct TYPE_16__ {void* operation; TYPE_3__* pmeth; TYPE_2__ op; int * keymgmt; int * pkey; int propquery; int libctx; int * algorithm; int * engine; } ;
struct TYPE_15__ {int (* derive_init ) (TYPE_4__*) ;int * derive; } ;
typedef TYPE_4__ EVP_PKEY_CTX ;
typedef TYPE_5__ EVP_KEYEXCH ;


 TYPE_5__* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int *,int *,int ) ;
 int * FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (TYPE_4__*) ;

int FUNC_13(EVP_PKEY_CTX *VAR_4)
{
    int VAR_5;
    void *VAR_6 = ((void*)0);
    EVP_KEYEXCH *VAR_7 = ((void*)0);

    if (VAR_4 == ((void*)0)) {
        FUNC_5(0, VAR_3);
        return -2;
    }

    FUNC_8(VAR_4);
    VAR_4->operation = VAR_0;

    if (VAR_4->engine != ((void*)0) || VAR_4->algorithm == ((void*)0))
        goto legacy;






    VAR_7 = FUNC_0(VAR_4->libctx, VAR_4->algorithm, VAR_4->propquery);
    if (VAR_7 != ((void*)0) && VAR_4->keymgmt == ((void*)0)) {
        int VAR_8 = FUNC_2(VAR_7);

        VAR_4->keymgmt =
            FUNC_7(VAR_4->libctx, VAR_8, VAR_4->propquery);
    }

    if (VAR_4->keymgmt == ((void*)0)
        || VAR_7 == ((void*)0)
        || (FUNC_4(VAR_4->keymgmt)
            != FUNC_3(VAR_7))) {






        FUNC_1(VAR_7);
        goto legacy;
    }


    VAR_4->op.kex.exchange = VAR_7;

    if (VAR_4->pkey != ((void*)0)) {
        VAR_6 = FUNC_6(VAR_4->pkey, VAR_4->keymgmt, 0);
        if (VAR_6 == ((void*)0)) {
            FUNC_5(0, VAR_2);
            goto err;
        }
    }
    VAR_4->op.kex.exchprovctx = VAR_7->newctx(FUNC_9(VAR_7->prov));
    if (VAR_4->op.kex.exchprovctx == ((void*)0)) {

        FUNC_5(0, VAR_2);
        goto err;
    }
    VAR_5 = VAR_7->init(VAR_4->op.kex.exchprovctx, VAR_6);

    return VAR_5 ? 1 : 0;
 err:
    VAR_4->operation = VAR_1;
    return 0;

 legacy:
    if (VAR_4 == ((void*)0) || VAR_4->pmeth == ((void*)0) || VAR_4->pmeth->derive == ((void*)0)) {
        FUNC_5(0, VAR_3);
        return -2;
    }

    if (VAR_4->pmeth->derive_init == ((void*)0))
        return 1;
    VAR_5 = VAR_4->pmeth->derive_init(VAR_4);
    if (VAR_5 <= 0)
        VAR_4->operation = VAR_1;
    return VAR_5;
}
