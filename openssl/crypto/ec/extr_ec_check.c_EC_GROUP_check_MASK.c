
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int * generator; TYPE_1__* meth; } ;
struct TYPE_11__ {int flags; } ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__ const*,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*,int,int *) ;
 int * FUNC_5 (TYPE_2__ const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__ const*,int *) ;
 scalar_t__ FUNC_8 (TYPE_2__ const*,int *,int *) ;
 int FUNC_9 (TYPE_2__ const*,int *,int const*,int *,int *,int *) ;
 int * FUNC_10 (TYPE_2__ const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_12(const EC_GROUP *VAR_9, BN_CTX *VAR_10)
{







    int VAR_11 = 0;
    const BIGNUM *VAR_12;
    BN_CTX *VAR_13 = ((void*)0);
    EC_POINT *VAR_14 = ((void*)0);

    if (VAR_9 == ((void*)0) || VAR_9->meth == ((void*)0)) {
        FUNC_11(VAR_1, VAR_8);
        return 0;
    }


    if ((VAR_9->meth->flags & VAR_0) != 0)
        return 1;

    if (VAR_10 == ((void*)0)) {
        VAR_10 = VAR_13 = FUNC_1();
        if (VAR_10 == ((void*)0)) {
            FUNC_11(VAR_1, VAR_7);
            goto err;
        }
    }


    if (!FUNC_3(VAR_9, VAR_10)) {
        FUNC_11(VAR_1, VAR_2);
        goto err;
    }


    if (VAR_9->generator == ((void*)0)) {
        FUNC_11(VAR_1, VAR_5);
        goto err;
    }
    if (FUNC_8(VAR_9, VAR_9->generator, VAR_10) <= 0) {
        FUNC_11(VAR_1, VAR_4);
        goto err;
    }


    if ((VAR_14 = FUNC_10(VAR_9)) == ((void*)0))
        goto err;
    VAR_12 = FUNC_5(VAR_9);
    if (VAR_12 == ((void*)0))
        goto err;
    if (FUNC_2(VAR_12)) {
        FUNC_11(VAR_1, VAR_6);
        goto err;
    }

    if (!FUNC_9(VAR_9, VAR_14, VAR_12, ((void*)0), ((void*)0), VAR_10))
        goto err;
    if (!FUNC_7(VAR_9, VAR_14)) {
        FUNC_11(VAR_1, VAR_3);
        goto err;
    }

    VAR_11 = 1;

 err:
    FUNC_0(VAR_13);
    FUNC_6(VAR_14);
    return VAR_11;

}
