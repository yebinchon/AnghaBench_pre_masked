
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int * sigprovctx; TYPE_4__* signature; } ;
struct TYPE_16__ {TYPE_1__ sig; } ;
struct TYPE_19__ {int operation; TYPE_3__* pmeth; TYPE_2__ op; int * keymgmt; int * pkey; int propquery; int libctx; int * algorithm; } ;
struct TYPE_18__ {int (* sign_init ) (int *,void*) ;int (* verify_init ) (int *,void*) ;int (* verify_recover_init ) (int *,void*) ;int (* freectx ) (int *) ;int prov; int * (* newctx ) (int ) ;} ;
struct TYPE_17__ {int (* sign_init ) (TYPE_5__*) ;int (* verify_init ) (TYPE_5__*) ;int (* verify_recover_init ) (TYPE_5__*) ;int * verify_recover; int * verify; int * sign; } ;
typedef TYPE_4__ EVP_SIGNATURE ;
typedef TYPE_5__ EVP_PKEY_CTX ;


 scalar_t__ FUNC_0 (int *) ;

 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int *,int *,int ) ;
 int * FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (int *,void*) ;
 int FUNC_13 (int *,void*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_18(EVP_PKEY_CTX *VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    void *VAR_6 = ((void*)0);
    EVP_SIGNATURE *VAR_7 = ((void*)0);

    if (VAR_3 == ((void*)0)) {
        FUNC_5(0, VAR_2);
        return -2;
    }

    FUNC_8(VAR_3);
    VAR_3->operation = VAR_4;

    if (VAR_3->algorithm == ((void*)0))
        goto legacy;






    VAR_7 = FUNC_1(VAR_3->libctx, VAR_3->algorithm,
                                    VAR_3->propquery);
    if (VAR_7 != ((void*)0) && VAR_3->keymgmt == ((void*)0)) {
        int VAR_8 = FUNC_3(VAR_7);

        VAR_3->keymgmt = FUNC_7(VAR_3->libctx, VAR_8,
                                                   VAR_3->propquery);
    }

    if (VAR_3->keymgmt == ((void*)0)
        || VAR_7 == ((void*)0)
        || (FUNC_0(VAR_3->keymgmt)
            != FUNC_4(VAR_7))) {






        FUNC_2(VAR_7);
        goto legacy;
    }

    VAR_3->op.sig.signature = VAR_7;

    if (VAR_3->pkey != ((void*)0)) {
        VAR_6 =
            FUNC_6(VAR_3->pkey, VAR_3->keymgmt, 0);
        if (VAR_6 == ((void*)0)) {
            FUNC_5(0, VAR_1);
            goto err;
        }
    }
    VAR_3->op.sig.sigprovctx = VAR_7->newctx(FUNC_9(VAR_7->prov));
    if (VAR_3->op.sig.sigprovctx == ((void*)0)) {

        FUNC_5(0, VAR_1);
        goto err;
    }

    switch (VAR_4) {
    case 130:
        if (VAR_7->sign_init == ((void*)0)) {
            FUNC_5(0, VAR_2);
            VAR_5 = -2;
            goto err;
        }
        VAR_5 = VAR_7->sign_init(VAR_3->op.sig.sigprovctx, VAR_6);
        break;
    case 129:
        if (VAR_7->verify_init == ((void*)0)) {
            FUNC_5(0, VAR_2);
            VAR_5 = -2;
            goto err;
        }
        VAR_5 = VAR_7->verify_init(VAR_3->op.sig.sigprovctx, VAR_6);
        break;
    case 128:
        if (VAR_7->verify_recover_init == ((void*)0)) {
            FUNC_5(0, VAR_2);
            VAR_5 = -2;
            goto err;
        }
        VAR_5 = VAR_7->verify_recover_init(VAR_3->op.sig.sigprovctx, VAR_6);
        break;
    default:
        FUNC_5(0, VAR_1);
        goto err;
    }

    if (VAR_5 <= 0) {
        VAR_7->freectx(VAR_3->op.sig.sigprovctx);
        VAR_3->op.sig.sigprovctx = ((void*)0);
        goto err;
    }
    return 1;

 legacy:
    if (VAR_3->pmeth == ((void*)0)
            || (VAR_4 == 130 && VAR_3->pmeth->sign == ((void*)0))
            || (VAR_4 == 129 && VAR_3->pmeth->verify == ((void*)0))
            || (VAR_4 == 128
                && VAR_3->pmeth->verify_recover == ((void*)0))) {
        FUNC_5(0, VAR_2);
        return -2;
    }

    switch (VAR_4) {
    case 130:
        if (VAR_3->pmeth->sign_init == ((void*)0))
            return 1;
        VAR_5 = VAR_3->pmeth->sign_init(VAR_3);
        break;
    case 129:
        if (VAR_3->pmeth->verify_init == ((void*)0))
            return 1;
        VAR_5 = VAR_3->pmeth->verify_init(VAR_3);
        break;
    case 128:
        if (VAR_3->pmeth->verify_recover_init == ((void*)0))
            return 1;
        VAR_5 = VAR_3->pmeth->verify_recover_init(VAR_3);
        break;
    default:
        FUNC_5(0, VAR_1);
        goto err;
    }
    if (VAR_5 <= 0)
        goto err;
    return VAR_5;

 err:
    VAR_3->operation = VAR_0;
    return VAR_5;
}
