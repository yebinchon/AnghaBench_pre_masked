
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {TYPE_1__* meth; int * a; } ;
struct TYPE_24__ {int Y; int X; scalar_t__ Z_is_one; } ;
struct TYPE_23__ {int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;int (* field_div ) (TYPE_3__ const*,int *,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,TYPE_2__ const*) ;
 int FUNC_10 (TYPE_3__ const*,TYPE_2__ const*,int *,int *,int *) ;
 scalar_t__ FUNC_11 (TYPE_3__ const*,TYPE_2__ const*) ;
 int FUNC_12 (TYPE_3__ const*,TYPE_2__*,int *,int *,int *) ;
 int FUNC_13 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_14 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_16 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_18 (TYPE_3__ const*,int *,int *,int *,int *) ;

int FUNC_19(const EC_GROUP *VAR_0, EC_POINT *VAR_1, const EC_POINT *VAR_2,
                       const EC_POINT *VAR_3, BN_CTX *VAR_4)
{
    BIGNUM *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    int VAR_13 = 0;

    BN_CTX *VAR_14 = ((void*)0);


    if (FUNC_11(VAR_0, VAR_2)) {
        if (!FUNC_9(VAR_1, VAR_3))
            return 0;
        return 1;
    }

    if (FUNC_11(VAR_0, VAR_3)) {
        if (!FUNC_9(VAR_1, VAR_2))
            return 0;
        return 1;
    }


    if (VAR_4 == ((void*)0)) {
        VAR_4 = VAR_14 = FUNC_3();
        if (VAR_4 == ((void*)0))
            return 0;
    }


    FUNC_4(VAR_4);
    VAR_5 = FUNC_2(VAR_4);
    VAR_6 = FUNC_2(VAR_4);
    VAR_7 = FUNC_2(VAR_4);
    VAR_8 = FUNC_2(VAR_4);
    VAR_9 = FUNC_2(VAR_4);
    VAR_10 = FUNC_2(VAR_4);
    VAR_11 = FUNC_2(VAR_4);
    VAR_12 = FUNC_2(VAR_4);
    if (VAR_12 == ((void*)0))
        goto err;

    if (VAR_2->Z_is_one) {
        if (!FUNC_7(VAR_5, VAR_2->X))
            goto err;
        if (!FUNC_7(VAR_6, VAR_2->Y))
            goto err;
    } else {
        if (!FUNC_10(VAR_0, VAR_2, VAR_5, VAR_6, VAR_4))
            goto err;
    }
    if (VAR_3->Z_is_one) {
        if (!FUNC_7(VAR_7, VAR_3->X))
            goto err;
        if (!FUNC_7(VAR_8, VAR_3->Y))
            goto err;
    } else {
        if (!FUNC_10(VAR_0, VAR_3, VAR_7, VAR_8, VAR_4))
            goto err;
    }

    if (FUNC_6(VAR_5, VAR_7)) {
        if (!FUNC_5(VAR_12, VAR_5, VAR_7))
            goto err;
        if (!FUNC_5(VAR_11, VAR_6, VAR_8))
            goto err;
        if (!VAR_0->meth->field_div(VAR_0, VAR_11, VAR_11, VAR_12, VAR_4))
            goto err;
        if (!VAR_0->meth->field_sqr(VAR_0, VAR_9, VAR_11, VAR_4))
            goto err;
        if (!FUNC_5(VAR_9, VAR_9, VAR_0->a))
            goto err;
        if (!FUNC_5(VAR_9, VAR_9, VAR_11))
            goto err;
        if (!FUNC_5(VAR_9, VAR_9, VAR_12))
            goto err;
    } else {
        if (FUNC_6(VAR_6, VAR_8) || FUNC_8(VAR_7)) {
            if (!FUNC_13(VAR_0, VAR_1))
                goto err;
            VAR_13 = 1;
            goto err;
        }
        if (!VAR_0->meth->field_div(VAR_0, VAR_11, VAR_8, VAR_7, VAR_4))
            goto err;
        if (!FUNC_5(VAR_11, VAR_11, VAR_7))
            goto err;

        if (!VAR_0->meth->field_sqr(VAR_0, VAR_9, VAR_11, VAR_4))
            goto err;
        if (!FUNC_5(VAR_9, VAR_9, VAR_11))
            goto err;
        if (!FUNC_5(VAR_9, VAR_9, VAR_0->a))
            goto err;
    }

    if (!FUNC_5(VAR_10, VAR_7, VAR_9))
        goto err;
    if (!VAR_0->meth->field_mul(VAR_0, VAR_10, VAR_10, VAR_11, VAR_4))
        goto err;
    if (!FUNC_5(VAR_10, VAR_10, VAR_9))
        goto err;
    if (!FUNC_5(VAR_10, VAR_10, VAR_8))
        goto err;

    if (!FUNC_12(VAR_0, VAR_1, VAR_9, VAR_10, VAR_4))
        goto err;

    VAR_13 = 1;

 err:
    FUNC_0(VAR_4);

    FUNC_1(VAR_14);

    return VAR_13;
}
