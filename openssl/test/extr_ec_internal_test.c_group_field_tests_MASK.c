
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * field; TYPE_1__* meth; } ;
struct TYPE_12__ {int (* field_inv ) (TYPE_2__ const*,int *,int *,int *) ;int (* field_mul ) (TYPE_2__ const*,int *,int *,int *,int *) ;int (* field_encode ) (TYPE_2__ const*,int *,int *,int *) ;int (* field_decode ) (TYPE_2__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_16 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_17 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_18 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_19 (TYPE_2__ const*,int *,int *,int *,int *) ;
 int FUNC_20 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_21 (TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_22 (TYPE_2__ const*,int *,int *,int *) ;

__attribute__((used)) static int FUNC_23(const EC_GROUP *VAR_4, BN_CTX *VAR_5)
{
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9 = 0;

    if (VAR_4->meth->field_inv == ((void*)0) || VAR_4->meth->field_mul == ((void*)0))
        return 1;

    FUNC_2(VAR_5);
    VAR_6 = FUNC_1(VAR_5);
    VAR_7 = FUNC_1(VAR_5);
    if (!FUNC_13(VAR_8 = FUNC_1(VAR_5))

        || !FUNC_14(VAR_4->meth->field_inv(VAR_4, VAR_7, FUNC_6(), VAR_5))
        || !FUNC_14(FUNC_3(VAR_7))

        || !FUNC_14(FUNC_5(VAR_6, FUNC_4(VAR_4->field) - 1,
                                     VAR_1, VAR_0))
        || !FUNC_14(VAR_4->meth->field_inv(VAR_4, VAR_7, VAR_6, VAR_5))
        || (VAR_4->meth->field_encode &&
            !FUNC_14(VAR_4->meth->field_encode(VAR_4, VAR_6, VAR_6, VAR_5)))
        || (VAR_4->meth->field_encode &&
            !FUNC_14(VAR_4->meth->field_encode(VAR_4, VAR_7, VAR_7, VAR_5)))
        || !FUNC_14(VAR_4->meth->field_mul(VAR_4, VAR_8, VAR_6, VAR_7, VAR_5))
        || (VAR_4->meth->field_decode &&
            !FUNC_14(VAR_4->meth->field_decode(VAR_4, VAR_8, VAR_8, VAR_5)))
        || !FUNC_14(FUNC_3(VAR_8)))
        goto err;


    FUNC_7(VAR_6);
    if (!FUNC_12(VAR_4->meth->field_inv(VAR_4, VAR_7, VAR_6, VAR_5))
        || !FUNC_14(FUNC_8(FUNC_11()) == VAR_3)
        || !FUNC_14(FUNC_9(FUNC_11()) ==
                      VAR_2)

        || !FUNC_12(VAR_4->meth->field_inv(VAR_4, VAR_7, VAR_4->field, VAR_5))
        || !FUNC_14(FUNC_8(FUNC_11()) == VAR_3)
        || !FUNC_14(FUNC_9(FUNC_11()) ==
                      VAR_2))
        goto err;

    FUNC_10();
    VAR_9 = 1;
 err:
    FUNC_0(VAR_5);
    return VAR_9;
}
