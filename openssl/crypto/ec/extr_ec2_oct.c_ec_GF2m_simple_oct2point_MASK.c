
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int point_conversion_form_t ;
struct TYPE_10__ {TYPE_1__* meth; } ;
struct TYPE_9__ {int (* field_div ) (TYPE_2__ const*,int *,int *,int *,int *) ;} ;
typedef int EC_POINT ;
typedef TYPE_2__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char const*,size_t,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_2__ const*) ;
 int FUNC_9 (TYPE_2__ const*,int *,int *,int *,int *) ;
 int FUNC_10 (TYPE_2__ const*,int *,int *,int,int *) ;
 int FUNC_11 (TYPE_2__ const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (TYPE_2__ const*,int *,int *,int *,int *) ;

int FUNC_14(const EC_GROUP *VAR_6, EC_POINT *VAR_7,
                             const unsigned char *VAR_8, size_t VAR_9,
                             BN_CTX *VAR_10)
{
    point_conversion_form_t VAR_11;
    int VAR_12, VAR_13;
    BIGNUM *VAR_14, *VAR_15, *VAR_16;
    size_t VAR_17, VAR_18;
    int VAR_19 = 0;

    BN_CTX *VAR_20 = ((void*)0);


    if (VAR_9 == 0) {
        FUNC_12(VAR_0, VAR_1);
        return 0;
    }
    VAR_11 = VAR_8[0];
    VAR_12 = VAR_11 & 1;
    VAR_11 = VAR_11 & ~1U;
    if ((VAR_11 != 0) && (VAR_11 != VAR_3)
        && (VAR_11 != VAR_5)
        && (VAR_11 != VAR_4)) {
        FUNC_12(VAR_0, VAR_2);
        return 0;
    }
    if ((VAR_11 == 0 || VAR_11 == VAR_5) && VAR_12) {
        FUNC_12(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_11 == 0) {
        if (VAR_9 != 1) {
            FUNC_12(VAR_0, VAR_2);
            return 0;
        }

        return FUNC_11(VAR_6, VAR_7);
    }

    VAR_13 = FUNC_8(VAR_6);
    VAR_17 = (VAR_13 + 7) / 8;
    VAR_18 =
        (VAR_11 ==
         VAR_3) ? 1 + VAR_17 : 1 + 2 * VAR_17;

    if (VAR_9 != VAR_18) {
        FUNC_12(VAR_0, VAR_2);
        return 0;
    }


    if (VAR_10 == ((void*)0)) {
        VAR_10 = VAR_20 = FUNC_3();
        if (VAR_10 == ((void*)0))
            return 0;
    }


    FUNC_4(VAR_10);
    VAR_14 = FUNC_2(VAR_10);
    VAR_15 = FUNC_2(VAR_10);
    VAR_16 = FUNC_2(VAR_10);
    if (VAR_16 == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_8 + 1, VAR_17, VAR_14))
        goto err;
    if (FUNC_7(VAR_14) > VAR_13) {
        FUNC_12(VAR_0, VAR_2);
        goto err;
    }

    if (VAR_11 == VAR_3) {
        if (!FUNC_10(VAR_6, VAR_7, VAR_14, VAR_12, VAR_10))
            goto err;
    } else {
        if (!FUNC_5(VAR_8 + 1 + VAR_17, VAR_17, VAR_15))
            goto err;
        if (FUNC_7(VAR_15) > VAR_13) {
            FUNC_12(VAR_0, VAR_2);
            goto err;
        }
        if (VAR_11 == VAR_4) {
            if (!VAR_6->meth->field_div(VAR_6, VAR_16, VAR_15, VAR_14, VAR_10))
                goto err;
            if (VAR_12 != FUNC_6(VAR_16)) {
                FUNC_12(VAR_0, VAR_2);
                goto err;
            }
        }





        if (!FUNC_9(VAR_6, VAR_7, VAR_14, VAR_15, VAR_10))
            goto err;
    }

    VAR_19 = 1;

 err:
    FUNC_0(VAR_10);

    FUNC_1(VAR_20);

    return VAR_19;
}
