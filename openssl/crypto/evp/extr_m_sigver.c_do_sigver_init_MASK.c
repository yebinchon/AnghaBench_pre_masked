
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_39__ {TYPE_7__* pctx; void* update; int const* fetched_digest; int const* reqdigest; int * provctx; TYPE_1__* digest; } ;
struct TYPE_32__ {int * ptr; } ;
struct TYPE_38__ {TYPE_2__ pkey; } ;
struct TYPE_33__ {int * sigprovctx; TYPE_6__* signature; } ;
struct TYPE_34__ {TYPE_3__ sig; } ;
struct TYPE_37__ {TYPE_5__* pmeth; void* operation; TYPE_4__ op; int libctx; int * keymgmt; int pkey; int propquery; int * algorithm; } ;
struct TYPE_36__ {int (* digest_verify_init ) (int *,char const*,char const*,void*) ;int (* digest_sign_init ) (int *,char const*,char const*,void*) ;int prov; int * (* newctx ) (int ) ;} ;
struct TYPE_35__ {int flags; scalar_t__ (* verifyctx_init ) (TYPE_7__*,TYPE_9__*) ;scalar_t__ digestverify; scalar_t__ (* signctx_init ) (TYPE_7__*,TYPE_9__*) ;scalar_t__ digestsign; int (* digest_custom ) (TYPE_7__*,TYPE_9__*) ;} ;
struct TYPE_31__ {int (* freectx ) (int *) ;} ;
typedef TYPE_6__ EVP_SIGNATURE ;
typedef TYPE_7__ EVP_PKEY_CTX ;
typedef TYPE_8__ EVP_PKEY ;
typedef TYPE_9__ EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int ENGINE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_9__*,int const*,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int const* FUNC_3 (int ,char const*,char const*) ;
 char* FUNC_4 (int const*) ;
 TYPE_7__* FUNC_5 (TYPE_8__*,int *) ;
 scalar_t__ FUNC_6 (TYPE_7__*,int const*) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_7 (TYPE_8__*,int*) ;
 scalar_t__ FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (TYPE_7__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__* FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 int * FUNC_14 (int) ;
 int FUNC_15 (int ,int ) ;
 char* FUNC_16 (int) ;
 void* FUNC_17 (int ,int *,int ) ;
 int * FUNC_18 (int ,int,int ) ;
 int FUNC_19 (TYPE_7__*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int * FUNC_23 (int ) ;
 int FUNC_24 (int *,char const*,char const*,void*) ;
 int FUNC_25 (int *,char const*,char const*,void*) ;
 scalar_t__ FUNC_26 (TYPE_7__*,TYPE_9__*) ;
 scalar_t__ FUNC_27 (TYPE_7__*,TYPE_9__*) ;
 int FUNC_28 (TYPE_7__*,TYPE_9__*) ;
 void* VAR_10 ;

__attribute__((used)) static int FUNC_29(EVP_MD_CTX *VAR_11, EVP_PKEY_CTX **VAR_12,
                          const EVP_MD *VAR_13, const char *VAR_14,
                          const char *VAR_15, ENGINE *VAR_16, EVP_PKEY *VAR_17,
                          int VAR_18)
{
    EVP_PKEY_CTX *VAR_19 = ((void*)0);
    EVP_SIGNATURE *VAR_20 = ((void*)0);
    void *VAR_21 = ((void*)0);
    int VAR_22;

    if (VAR_11->provctx != ((void*)0)) {
        if (!FUNC_20(VAR_11->digest != ((void*)0))) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (VAR_11->digest->freectx != ((void*)0))
            VAR_11->digest->freectx(VAR_11->provctx);
        VAR_11->provctx = ((void*)0);
    }

    if (VAR_11->pctx == ((void*)0))
        VAR_11->pctx = FUNC_5(VAR_17, VAR_16);
    if (VAR_11->pctx == ((void*)0))
        return 0;

    VAR_19 = VAR_11->pctx;
    FUNC_19(VAR_19);

    if (VAR_19->algorithm == ((void*)0))
        goto legacy;

    if (VAR_14 == ((void*)0)) {
        if (VAR_13 != ((void*)0)) {
            VAR_14 = FUNC_4(VAR_13);
        } else if (VAR_17 != ((void*)0)) {




            if (VAR_17->pkey.ptr != ((void*)0)) {
                int VAR_23;
                if (FUNC_7(VAR_17, &VAR_23) > 0)
                    VAR_14 = FUNC_16(VAR_23);
            }
        }
    }






    VAR_20 = FUNC_10(VAR_19->libctx, VAR_19->algorithm,
                                    VAR_19->propquery);
    if (VAR_20 != ((void*)0) && VAR_19->keymgmt == ((void*)0)) {
        int VAR_24 = FUNC_12(VAR_20);

        VAR_19->keymgmt =
            FUNC_18(VAR_19->libctx, VAR_24,
                                        VAR_19->propquery);
    }

    if (VAR_19->keymgmt == ((void*)0)
        || VAR_20 == ((void*)0)
        || (FUNC_2(VAR_19->keymgmt)
            != FUNC_13(VAR_20))) {






        FUNC_11(VAR_20);
        goto legacy;
    }



    VAR_19->op.sig.signature = VAR_20;

    VAR_19->operation = VAR_18 ? VAR_7
                             : VAR_4;

    VAR_19->op.sig.sigprovctx
        = VAR_20->newctx(FUNC_21(VAR_20->prov));
    if (VAR_19->op.sig.sigprovctx == ((void*)0)) {
        FUNC_0(VAR_0, VAR_8);
        goto err;
    }
    VAR_21 =
        FUNC_17(VAR_19->pkey, VAR_19->keymgmt, 0);
    if (VAR_21 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_8);
        goto err;
    }

    if (VAR_13 != ((void*)0)) {
        VAR_11->reqdigest = VAR_13;
    } else {






        VAR_11->reqdigest = VAR_11->fetched_digest =
            FUNC_3(VAR_19->libctx, VAR_14, VAR_15);
    }

    if (VAR_18) {
        if (VAR_20->digest_verify_init == ((void*)0)) {
            FUNC_0(VAR_0, VAR_8);
            goto err;
        }
        VAR_22 = VAR_20->digest_verify_init(VAR_19->op.sig.sigprovctx,
                                            VAR_14, VAR_15, VAR_21);
    } else {
        if (VAR_20->digest_sign_init == ((void*)0)) {
            FUNC_0(VAR_0, VAR_8);
            goto err;
        }
        VAR_22 = VAR_20->digest_sign_init(VAR_19->op.sig.sigprovctx,
                                          VAR_14, VAR_15, VAR_21);
    }

    return VAR_22 ? 1 : 0;
 err:
    FUNC_19(VAR_19);
    VAR_19->operation = VAR_5;
    return 0;

 legacy:
    if (!(VAR_11->pctx->pmeth->flags & VAR_2)) {

        if (VAR_13 == ((void*)0)) {
            int VAR_25;
            if (FUNC_7(VAR_17, &VAR_25) > 0)
                VAR_13 = FUNC_14(VAR_25);
        }

        if (VAR_13 == ((void*)0)) {
            FUNC_15(VAR_1, VAR_9);
            return 0;
        }
    }

    if (VAR_18) {
        if (VAR_11->pctx->pmeth->verifyctx_init) {
            if (VAR_11->pctx->pmeth->verifyctx_init(VAR_11->pctx, VAR_11) <= 0)
                return 0;
            VAR_11->pctx->operation = VAR_7;
        } else if (VAR_11->pctx->pmeth->digestverify != 0) {
            VAR_11->pctx->operation = VAR_6;
            VAR_11->update = VAR_10;
        } else if (FUNC_9(VAR_11->pctx) <= 0) {
            return 0;
        }
    } else {
        if (VAR_11->pctx->pmeth->signctx_init) {
            if (VAR_11->pctx->pmeth->signctx_init(VAR_11->pctx, VAR_11) <= 0)
                return 0;
            VAR_11->pctx->operation = VAR_4;
        } else if (VAR_11->pctx->pmeth->digestsign != 0) {
            VAR_11->pctx->operation = VAR_3;
            VAR_11->update = VAR_10;
        } else if (FUNC_8(VAR_11->pctx) <= 0) {
            return 0;
        }
    }
    if (FUNC_6(VAR_11->pctx, VAR_13) <= 0)
        return 0;
    if (VAR_12)
        *VAR_12 = VAR_11->pctx;
    if (VAR_11->pctx->pmeth->flags & VAR_2)
        return 1;
    if (!FUNC_1(VAR_11, VAR_13, VAR_16))
        return 0;




    if (VAR_11->pctx->pmeth->digest_custom != ((void*)0))
        return VAR_11->pctx->pmeth->digest_custom(VAR_11->pctx, VAR_11);

    return 1;
}
