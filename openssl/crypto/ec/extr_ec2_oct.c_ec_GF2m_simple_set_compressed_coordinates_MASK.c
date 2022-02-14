
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* meth; int poly; int * a; int b; } ;
struct TYPE_8__ {int (* field_mul ) (TYPE_2__ const*,int *,int *,int *,int *) ;int (* field_div ) (TYPE_2__ const*,int *,int ,int *,int *) ;int (* field_sqr ) (TYPE_2__ const*,int *,int *,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int const*,int ) ;
 int FUNC_7 (int *,int *,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (TYPE_2__ const*,int *,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (unsigned long) ;
 scalar_t__ FUNC_14 (unsigned long) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_15 () ;
 unsigned long FUNC_16 () ;
 int FUNC_17 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_18 (TYPE_2__ const*,int *,int ,int *,int *) ;
 int FUNC_19 (TYPE_2__ const*,int *,int *,int *,int *) ;

int FUNC_20(const EC_GROUP *VAR_5,
                                              EC_POINT *VAR_6,
                                              const BIGNUM *VAR_7, int VAR_8,
                                              BN_CTX *VAR_9)
{
    BIGNUM *VAR_10, *VAR_11, *VAR_12, *VAR_13;
    int VAR_14 = 0, VAR_15;

    BN_CTX *VAR_16 = ((void*)0);


    FUNC_15();

    if (VAR_9 == ((void*)0)) {
        VAR_9 = VAR_16 = FUNC_3();
        if (VAR_9 == ((void*)0))
            return 0;
    }


    VAR_8 = (VAR_8 != 0) ? 1 : 0;

    FUNC_4(VAR_9);
    VAR_10 = FUNC_2(VAR_9);
    VAR_11 = FUNC_2(VAR_9);
    VAR_12 = FUNC_2(VAR_9);
    VAR_13 = FUNC_2(VAR_9);
    if (VAR_13 == ((void*)0))
        goto err;

    if (!FUNC_6(VAR_11, VAR_7, VAR_5->poly))
        goto err;
    if (FUNC_10(VAR_11)) {
        if (!FUNC_8(VAR_12, VAR_5->b, VAR_5->poly, VAR_9))
            goto err;
    } else {
        if (!VAR_5->meth->field_sqr(VAR_5, VAR_10, VAR_11, VAR_9))
            goto err;
        if (!VAR_5->meth->field_div(VAR_5, VAR_10, VAR_5->b, VAR_10, VAR_9))
            goto err;
        if (!FUNC_5(VAR_10, VAR_5->a, VAR_10))
            goto err;
        if (!FUNC_5(VAR_10, VAR_11, VAR_10))
            goto err;
        if (!FUNC_7(VAR_13, VAR_10, VAR_5->poly, VAR_9)) {

            unsigned long VAR_17 = FUNC_16();

            if (FUNC_13(VAR_17) == VAR_3
                && FUNC_14(VAR_17) == VAR_0) {
                FUNC_15();
                FUNC_12(VAR_1,
                      VAR_2);
            } else

            {
                FUNC_12(VAR_1,
                      VAR_4);
            }
            goto err;
        }
        VAR_15 = (FUNC_9(VAR_13)) ? 1 : 0;
        if (!VAR_5->meth->field_mul(VAR_5, VAR_12, VAR_11, VAR_13, VAR_9))
            goto err;
        if (VAR_15 != VAR_8) {
            if (!FUNC_5(VAR_12, VAR_12, VAR_11))
                goto err;
        }
    }

    if (!FUNC_11(VAR_5, VAR_6, VAR_11, VAR_12, VAR_9))
        goto err;

    VAR_14 = 1;

 err:
    FUNC_0(VAR_9);

    FUNC_1(VAR_16);

    return VAR_14;
}
