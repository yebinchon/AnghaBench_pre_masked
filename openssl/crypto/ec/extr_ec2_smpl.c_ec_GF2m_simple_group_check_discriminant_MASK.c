
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int poly; int b; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_0 ;
 int FUNC_7 (int ,int ) ;
 int VAR_1 ;

int FUNC_8(const EC_GROUP *VAR_2,
                                            BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5;

    BN_CTX *VAR_6 = ((void*)0);

    if (VAR_3 == ((void*)0)) {
        VAR_3 = VAR_6 = FUNC_3();
        if (VAR_3 == ((void*)0)) {
            FUNC_7(VAR_0,
                  VAR_1);
            goto err;
        }
    }

    FUNC_4(VAR_3);
    VAR_5 = FUNC_2(VAR_3);
    if (VAR_5 == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_5, VAR_2->b, VAR_2->poly))
        goto err;





    if (FUNC_6(VAR_5))
        goto err;

    VAR_4 = 1;

 err:
    FUNC_0(VAR_3);

    FUNC_1(VAR_6);

    return VAR_4;
}
