
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int * signature; } ;
struct TYPE_16__ {TYPE_1__ sig; } ;
struct TYPE_19__ {TYPE_2__ op; } ;
struct TYPE_18__ {scalar_t__ type; scalar_t__ ctx_size; int (* dinit ) (int *) ;int (* init ) (TYPE_3__*) ;int update; int * prov; int * (* newctx ) (int ) ;int (* freectx ) (int *) ;} ;
struct TYPE_17__ {int flags; TYPE_4__ const* digest; TYPE_6__* pctx; int * md_data; int update; int * engine; int * provctx; TYPE_4__ const* fetched_digest; TYPE_4__ const* reqdigest; } ;
typedef TYPE_3__ EVP_MD_CTX ;
typedef TYPE_4__ const EVP_MD ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 TYPE_4__ const* FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 TYPE_4__ const* FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (TYPE_4__ const*) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int,int ,int ,int ,TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int *,scalar_t__) ;
 int * FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_3__*) ;

int FUNC_20(EVP_MD_CTX *VAR_8, const EVP_MD *VAR_9, ENGINE *VAR_10)
{

    ENGINE *VAR_11 = ((void*)0);


    FUNC_4(VAR_8, VAR_2);

    if (VAR_8->provctx != ((void*)0)) {
        if (!FUNC_13(VAR_8->digest != ((void*)0))) {
            FUNC_9(VAR_1, VAR_6);
            return 0;
        }
        if (VAR_8->digest->freectx != ((void*)0))
            VAR_8->digest->freectx(VAR_8->provctx);
        VAR_8->provctx = ((void*)0);
    }

    if (VAR_9 != ((void*)0))
        VAR_8->reqdigest = VAR_9;
    if (VAR_8->engine && VAR_8->digest &&
        (VAR_9 == ((void*)0) || (VAR_9->type == VAR_8->digest->type)))
        goto skip_to_init;

    if (VAR_9 != ((void*)0)) {





        FUNC_0(VAR_8->engine);
        VAR_8->engine = ((void*)0);
    }

    if (VAR_9 != ((void*)0) && VAR_10 == ((void*)0))
        VAR_11 = FUNC_2(VAR_9->type);






    if (VAR_8->engine != ((void*)0)
            || VAR_10 != ((void*)0)

            || VAR_11 != ((void*)0)

            || (VAR_8->flags & VAR_3) != 0) {
        if (VAR_8->digest == VAR_8->fetched_digest)
            VAR_8->digest = ((void*)0);
        FUNC_6(VAR_8->fetched_digest);
        VAR_8->fetched_digest = ((void*)0);
        goto legacy;
    }

    if (VAR_8->digest != ((void*)0) && VAR_8->digest->ctx_size > 0) {
        FUNC_11(VAR_8->md_data, VAR_8->digest->ctx_size);
        VAR_8->md_data = ((void*)0);
    }



    if (VAR_9->prov == ((void*)0)) {





        EVP_MD *VAR_12 = FUNC_5(((void*)0), FUNC_10(VAR_9->type), "");

        if (VAR_12 == ((void*)0)) {
            FUNC_9(VAR_1, VAR_6);
            return 0;
        }
        VAR_9 = VAR_12;
        FUNC_6(VAR_8->fetched_digest);
        VAR_8->fetched_digest = VAR_12;

    }

    if (VAR_8->provctx != ((void*)0) && VAR_8->digest != ((void*)0) && VAR_8->digest != VAR_9) {
        if (VAR_8->digest->freectx != ((void*)0))
            VAR_8->digest->freectx(VAR_8->provctx);
        VAR_8->provctx = ((void*)0);
    }
    VAR_8->digest = VAR_9;
    if (VAR_8->provctx == ((void*)0)) {
        VAR_8->provctx = VAR_8->digest->newctx(FUNC_14(VAR_9->prov));
        if (VAR_8->provctx == ((void*)0)) {
            FUNC_9(VAR_1, VAR_6);
            return 0;
        }
    }

    if (VAR_8->digest->dinit == ((void*)0)) {
        FUNC_9(VAR_1, VAR_6);
        return 0;
    }

    return VAR_8->digest->dinit(VAR_8->provctx);


 legacy:


    if (VAR_9) {
        if (VAR_10 != ((void*)0)) {
            if (!FUNC_3(VAR_10)) {
                FUNC_9(VAR_1, VAR_6);
                return 0;
            }
        } else {

            VAR_10 = VAR_11;
        }
        if (VAR_10 != ((void*)0)) {

            const EVP_MD *VAR_13 = FUNC_1(VAR_10, VAR_9->type);

            if (VAR_13 == ((void*)0)) {
                FUNC_9(VAR_1, VAR_6);
                FUNC_0(VAR_10);
                return 0;
            }

            VAR_9 = VAR_13;




            VAR_8->engine = VAR_10;
        } else
            VAR_8->engine = ((void*)0);
    } else {
        if (!VAR_8->digest) {
            FUNC_9(VAR_1, VAR_7);
            return 0;
        }
        VAR_9 = VAR_8->digest;
    }

    if (VAR_8->digest != VAR_9) {
        if (VAR_8->digest && VAR_8->digest->ctx_size) {
            FUNC_11(VAR_8->md_data, VAR_8->digest->ctx_size);
            VAR_8->md_data = ((void*)0);
        }
        VAR_8->digest = VAR_9;
        if (!(VAR_8->flags & VAR_3) && VAR_9->ctx_size) {
            VAR_8->update = VAR_9->update;
            VAR_8->md_data = FUNC_12(VAR_9->ctx_size);
            if (VAR_8->md_data == ((void*)0)) {
                FUNC_9(VAR_1, VAR_0);
                return 0;
            }
        }
    }

 skip_to_init:






    if (VAR_8->pctx != ((void*)0)
            && (!FUNC_7(VAR_8->pctx)
                 || VAR_8->pctx->op.sig.signature == ((void*)0))) {
        int VAR_14;
        VAR_14 = FUNC_8(VAR_8->pctx, -1, VAR_5,
                              VAR_4, 0, VAR_8);
        if (VAR_14 <= 0 && (VAR_14 != -2))
            return 0;
    }

    if (VAR_8->flags & VAR_3)
        return 1;
    return VAR_8->digest->init(VAR_8);
}
