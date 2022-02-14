
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;


struct TYPE_26__ {scalar_t__ type; } ;
struct TYPE_22__ {int * exchprovctx; TYPE_1__* exchange; } ;
struct TYPE_23__ {TYPE_2__ kex; } ;
struct TYPE_25__ {scalar_t__ operation; TYPE_6__* peerkey; TYPE_4__* pmeth; TYPE_17__* pkey; TYPE_3__ op; int keymgmt; } ;
struct TYPE_24__ {int (* ctrl ) (TYPE_5__*,int ,int,TYPE_6__*) ;int * decrypt; int * encrypt; int * derive; } ;
struct TYPE_21__ {int (* set_peer ) (int *,void*) ;} ;
struct TYPE_20__ {scalar_t__ type; } ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef TYPE_6__ EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_17__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (TYPE_6__*,int ,int ) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (TYPE_5__*,int ,int,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,int ,int,TYPE_6__*) ;

int FUNC_10(EVP_PKEY_CTX *VAR_11, EVP_PKEY *VAR_12)
{
    int VAR_13;
    void *VAR_14 = ((void*)0);

    if (VAR_11 == ((void*)0)) {
        FUNC_5(VAR_1,
               VAR_9);
        return -2;
    }

    if (!FUNC_0(VAR_11) || VAR_11->op.kex.exchprovctx == ((void*)0))
        goto legacy;

    if (VAR_11->op.kex.exchange->set_peer == ((void*)0)) {
        FUNC_5(VAR_1,
               VAR_9);
        return -2;
    }

    VAR_14 = FUNC_6(VAR_12, VAR_11->keymgmt, 0);
    if (VAR_14 == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        return 0;
    }
    return VAR_11->op.kex.exchange->set_peer(VAR_11->op.kex.exchprovctx, VAR_14);

 legacy:
    if (VAR_11->pmeth == ((void*)0)
        || !(VAR_11->pmeth->derive != ((void*)0)
             || VAR_11->pmeth->encrypt != ((void*)0)
             || VAR_11->pmeth->decrypt != ((void*)0))
        || VAR_11->pmeth->ctrl == ((void*)0)) {
        FUNC_5(VAR_1,
               VAR_9);
        return -2;
    }
    if (VAR_11->operation != VAR_4
        && VAR_11->operation != VAR_5
        && VAR_11->operation != VAR_3) {
        FUNC_5(VAR_1,
               VAR_10);
        return -1;
    }

    VAR_13 = VAR_11->pmeth->ctrl(VAR_11, VAR_2, 0, VAR_12);

    if (VAR_13 <= 0)
        return VAR_13;

    if (VAR_13 == 2)
        return 1;

    if (VAR_11->pkey == ((void*)0)) {
        FUNC_5(VAR_1, VAR_8);
        return -1;
    }

    if (VAR_11->pkey->type != VAR_12->type) {
        FUNC_5(VAR_1, VAR_6);
        return -1;
    }
    if (!FUNC_3(VAR_12) &&
        !FUNC_1(VAR_11->pkey, VAR_12)) {
        FUNC_5(VAR_1, VAR_7);
        return -1;
    }

    FUNC_2(VAR_11->peerkey);
    VAR_11->peerkey = VAR_12;

    VAR_13 = VAR_11->pmeth->ctrl(VAR_11, VAR_2, 1, VAR_12);

    if (VAR_13 <= 0) {
        VAR_11->peerkey = ((void*)0);
        return VAR_13;
    }

    FUNC_4(VAR_12);
    return 1;
}
