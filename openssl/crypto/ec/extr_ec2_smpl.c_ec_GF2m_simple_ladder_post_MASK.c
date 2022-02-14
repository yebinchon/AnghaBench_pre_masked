
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {TYPE_1__* meth; } ;
struct TYPE_27__ {int Z_is_one; int * Y; int * X; int * Z; } ;
struct TYPE_26__ {int (* field_mul ) (TYPE_3__ const*,int *,int *,int *,int *) ;int (* field_inv ) (TYPE_3__ const*,int *,int *,int *) ;int (* field_sqr ) (TYPE_3__ const*,int *,int *,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_0 ;
 int FUNC_7 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__ const*,TYPE_2__*,int *) ;
 int FUNC_9 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_12 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_13 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_14 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_15 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_16 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_17 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_18 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_19 (TYPE_3__ const*,int *,int *,int *) ;
 int FUNC_20 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_21 (TYPE_3__ const*,int *,int *,int *,int *) ;
 int FUNC_22 (TYPE_3__ const*,int *,int *,int *) ;

__attribute__((used)) static
int FUNC_23(const EC_GROUP *VAR_3,
                               EC_POINT *VAR_4, EC_POINT *VAR_5,
                               EC_POINT *VAR_6, BN_CTX *VAR_7)
{
    int VAR_8 = 0;
    BIGNUM *VAR_9, *VAR_10, *VAR_11 = ((void*)0);

    if (FUNC_4(VAR_4->Z))
        return FUNC_9(VAR_3, VAR_4);

    if (FUNC_4(VAR_5->Z)) {
        if (!FUNC_7(VAR_4, VAR_6)
            || !FUNC_8(VAR_3, VAR_4, VAR_7)) {
            FUNC_10(VAR_0, VAR_1);
            return 0;
        }
        return 1;
    }

    FUNC_2(VAR_7);
    VAR_9 = FUNC_1(VAR_7);
    VAR_10 = FUNC_1(VAR_7);
    VAR_11 = FUNC_1(VAR_7);
    if (VAR_11 == ((void*)0)) {
        FUNC_10(VAR_0, VAR_2);
        goto err;
    }

    if (!VAR_3->meth->field_mul(VAR_3, VAR_9, VAR_4->Z, VAR_5->Z, VAR_7)
        || !VAR_3->meth->field_mul(VAR_3, VAR_10, VAR_6->X, VAR_4->Z, VAR_7)
        || !FUNC_3(VAR_10, VAR_4->X, VAR_10)
        || !VAR_3->meth->field_mul(VAR_3, VAR_11, VAR_6->X, VAR_5->Z, VAR_7)
        || !VAR_3->meth->field_mul(VAR_3, VAR_4->Z, VAR_4->X, VAR_11, VAR_7)
        || !FUNC_3(VAR_11, VAR_11, VAR_5->X)
        || !VAR_3->meth->field_mul(VAR_3, VAR_10, VAR_10, VAR_11, VAR_7)
        || !VAR_3->meth->field_sqr(VAR_3, VAR_11, VAR_6->X, VAR_7)
        || !FUNC_3(VAR_11, VAR_6->Y, VAR_11)
        || !VAR_3->meth->field_mul(VAR_3, VAR_11, VAR_11, VAR_9, VAR_7)
        || !FUNC_3(VAR_10, VAR_11, VAR_10)
        || !VAR_3->meth->field_mul(VAR_3, VAR_11, VAR_6->X, VAR_9, VAR_7)
        || !VAR_3->meth->field_inv(VAR_3, VAR_11, VAR_11, VAR_7)
        || !VAR_3->meth->field_mul(VAR_3, VAR_10, VAR_10, VAR_11, VAR_7)
        || !VAR_3->meth->field_mul(VAR_3, VAR_4->X, VAR_4->Z, VAR_11, VAR_7)
        || !FUNC_3(VAR_11, VAR_6->X, VAR_4->X)
        || !VAR_3->meth->field_mul(VAR_3, VAR_11, VAR_11, VAR_10, VAR_7)
        || !FUNC_3(VAR_4->Y, VAR_6->Y, VAR_11)
        || !FUNC_5(VAR_4->Z))
        goto err;

    VAR_4->Z_is_one = 1;


    FUNC_6(VAR_4->X, 0);
    FUNC_6(VAR_4->Y, 0);

    VAR_8 = 1;

 err:
    FUNC_0(VAR_7);
    return VAR_8;
}
