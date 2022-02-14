
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_22__ {TYPE_10__* signature; int * sigprovctx; } ;
struct TYPE_21__ {TYPE_17__* exchange; int * exchprovctx; } ;
struct TYPE_23__ {TYPE_2__ sig; TYPE_1__ kex; } ;
struct TYPE_25__ {TYPE_4__* pmeth; int * peerkey; scalar_t__ engine; TYPE_3__ op; int propquery; int algorithm; int libctx; int operation; int * pkey; } ;
struct TYPE_24__ {scalar_t__ (* copy ) (TYPE_5__*,TYPE_5__ const*) ;} ;
struct TYPE_20__ {int * (* dupctx ) (int *) ;} ;
struct TYPE_19__ {int * (* dupctx ) (int *) ;} ;
typedef TYPE_5__ EVP_PKEY_CTX ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_17__*) ;
 int FUNC_2 (TYPE_17__*) ;
 scalar_t__ FUNC_3 (TYPE_5__ const*) ;
 scalar_t__ FUNC_4 (TYPE_5__ const*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_5__*) ;
 TYPE_5__* FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int *) ;
 int * FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (TYPE_5__*,TYPE_5__ const*) ;

EVP_PKEY_CTX *FUNC_16(const EVP_PKEY_CTX *VAR_3)
{
    EVP_PKEY_CTX *VAR_4;

    if (((VAR_3->pmeth == ((void*)0)) || (VAR_3->pmeth->copy == ((void*)0)))
            && ((FUNC_3(VAR_3)
                 && VAR_3->op.kex.exchprovctx == ((void*)0))
                || (FUNC_4(VAR_3)
                    && VAR_3->op.sig.sigprovctx == ((void*)0))))
        return ((void*)0);


    if (VAR_3->engine && !FUNC_0(VAR_3->engine)) {
        FUNC_9(VAR_2, VAR_0);
        return 0;
    }

    VAR_4 = FUNC_11(sizeof(*VAR_4));
    if (VAR_4 == ((void*)0)) {
        FUNC_9(VAR_2, VAR_1);
        return ((void*)0);
    }

    if (VAR_3->pkey != ((void*)0))
        FUNC_6(VAR_3->pkey);
    VAR_4->pkey = VAR_3->pkey;
    VAR_4->operation = VAR_3->operation;
    VAR_4->libctx = VAR_3->libctx;
    VAR_4->algorithm = VAR_3->algorithm;
    VAR_4->propquery = VAR_3->propquery;

    if (FUNC_3(VAR_3)) {
        if (VAR_3->op.kex.exchange != ((void*)0)) {
            VAR_4->op.kex.exchange = VAR_3->op.kex.exchange;
            if (!FUNC_2(VAR_4->op.kex.exchange)) {
                FUNC_10(VAR_4);
                return ((void*)0);
            }
        }
        if (VAR_3->op.kex.exchprovctx != ((void*)0)) {
            if (!FUNC_12(VAR_3->op.kex.exchange != ((void*)0)))
                return ((void*)0);
            VAR_4->op.kex.exchprovctx
                = VAR_3->op.kex.exchange->dupctx(VAR_3->op.kex.exchprovctx);
            if (VAR_4->op.kex.exchprovctx == ((void*)0)) {
                FUNC_1(VAR_4->op.kex.exchange);
                FUNC_10(VAR_4);
                return ((void*)0);
            }
            return VAR_4;
        }
    } else if (FUNC_4(VAR_3)) {
        if (VAR_3->op.sig.signature != ((void*)0)) {
            VAR_4->op.sig.signature = VAR_3->op.sig.signature;
            if (!FUNC_8(VAR_4->op.sig.signature)) {
                FUNC_10(VAR_4);
                return ((void*)0);
            }
        }
        if (VAR_3->op.sig.sigprovctx != ((void*)0)) {
            if (!FUNC_12(VAR_3->op.sig.signature != ((void*)0)))
                return ((void*)0);
            VAR_4->op.sig.sigprovctx
                = VAR_3->op.sig.signature->dupctx(VAR_3->op.sig.sigprovctx);
            if (VAR_4->op.sig.sigprovctx == ((void*)0)) {
                FUNC_7(VAR_4->op.sig.signature);
                FUNC_10(VAR_4);
                return ((void*)0);
            }
            return VAR_4;
        }
    }

    VAR_4->pmeth = VAR_3->pmeth;

    VAR_4->engine = VAR_3->engine;


    if (VAR_3->peerkey)
        FUNC_6(VAR_3->peerkey);
    VAR_4->peerkey = VAR_3->peerkey;

    if (VAR_3->pmeth->copy(VAR_4, VAR_3) > 0)
        return VAR_4;

    VAR_4->pmeth = ((void*)0);
    FUNC_5(VAR_4);
    return ((void*)0);

}
