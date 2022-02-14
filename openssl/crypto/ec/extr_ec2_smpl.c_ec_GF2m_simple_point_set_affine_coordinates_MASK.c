
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z_is_one; int Z; int Y; int X; } ;
typedef TYPE_1__ EC_POINT ;
typedef int EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int ) ;
 int const* FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

int FUNC_4(const EC_GROUP *VAR_2,
                                                EC_POINT *VAR_3,
                                                const BIGNUM *VAR_4,
                                                const BIGNUM *VAR_5, BN_CTX *VAR_6)
{
    int VAR_7 = 0;
    if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        FUNC_3(VAR_0,
              VAR_1);
        return 0;
    }

    if (!FUNC_0(VAR_3->X, VAR_4))
        goto err;
    FUNC_1(VAR_3->X, 0);
    if (!FUNC_0(VAR_3->Y, VAR_5))
        goto err;
    FUNC_1(VAR_3->Y, 0);
    if (!FUNC_0(VAR_3->Z, FUNC_2()))
        goto err;
    FUNC_1(VAR_3->Z, 0);
    VAR_3->Z_is_one = 1;
    VAR_7 = 1;

 err:
    return VAR_7;
}
