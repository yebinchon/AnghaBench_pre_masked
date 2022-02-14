
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* poly; int b; int a; int field; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int*) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (int ,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int) ;

int FUNC_6(EC_GROUP *VAR_3,
                                   const BIGNUM *VAR_4, const BIGNUM *VAR_5,
                                   const BIGNUM *VAR_6, BN_CTX *VAR_7)
{
    int VAR_8 = 0, VAR_9;


    if (!FUNC_2(VAR_3->field, VAR_4))
        goto err;
    VAR_9 = FUNC_1(VAR_3->field, VAR_3->poly, 6) - 1;
    if ((VAR_9 != 5) && (VAR_9 != 3)) {
        FUNC_3(VAR_1, VAR_2);
        goto err;
    }


    if (!FUNC_0(VAR_3->a, VAR_5, VAR_3->poly))
        goto err;
    if (FUNC_5(VAR_3->a, (int)(VAR_3->poly[0] + VAR_0 - 1) / VAR_0)
        == ((void*)0))
        goto err;
    FUNC_4(VAR_3->a);


    if (!FUNC_0(VAR_3->b, VAR_6, VAR_3->poly))
        goto err;
    if (FUNC_5(VAR_3->b, (int)(VAR_3->poly[0] + VAR_0 - 1) / VAR_0)
        == ((void*)0))
        goto err;
    FUNC_4(VAR_3->b);

    VAR_8 = 1;
 err:
    return VAR_8;
}
