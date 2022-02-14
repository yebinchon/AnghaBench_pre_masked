
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * Y; int * X; scalar_t__ Z_is_one; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int const*,TYPE_1__ const*,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int const*,TYPE_1__ const*) ;

int FUNC_8(const EC_GROUP *VAR_0, const EC_POINT *VAR_1,
                       const EC_POINT *VAR_2, BN_CTX *VAR_3)
{
    BIGNUM *VAR_4, *VAR_5, *VAR_6, *VAR_7;
    int VAR_8 = -1;

    BN_CTX *VAR_9 = ((void*)0);


    if (FUNC_7(VAR_0, VAR_1)) {
        return FUNC_7(VAR_0, VAR_2) ? 0 : 1;
    }

    if (FUNC_7(VAR_0, VAR_2))
        return 1;

    if (VAR_1->Z_is_one && VAR_2->Z_is_one) {
        return ((FUNC_5(VAR_1->X, VAR_2->X) == 0) && FUNC_5(VAR_1->Y, VAR_2->Y) == 0) ? 0 : 1;
    }


    if (VAR_3 == ((void*)0)) {
        VAR_3 = VAR_9 = FUNC_3();
        if (VAR_3 == ((void*)0))
            return -1;
    }


    FUNC_4(VAR_3);
    VAR_4 = FUNC_2(VAR_3);
    VAR_5 = FUNC_2(VAR_3);
    VAR_6 = FUNC_2(VAR_3);
    VAR_7 = FUNC_2(VAR_3);
    if (VAR_7 == ((void*)0))
        goto err;

    if (!FUNC_6(VAR_0, VAR_1, VAR_4, VAR_5, VAR_3))
        goto err;
    if (!FUNC_6(VAR_0, VAR_2, VAR_6, VAR_7, VAR_3))
        goto err;
    VAR_8 = ((FUNC_5(VAR_4, VAR_6) == 0) && FUNC_5(VAR_5, VAR_7) == 0) ? 0 : 1;

 err:
    FUNC_0(VAR_3);

    FUNC_1(VAR_9);

    return VAR_8;
}
