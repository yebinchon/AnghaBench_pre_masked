
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * field_data2; int * field_data1; int libctx; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_MONT_CTX ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int const*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int FUNC_9 (int ,int ) ;
 int VAR_1 ;
 int FUNC_10 (TYPE_1__*,int const*,int const*,int const*,int *) ;

int FUNC_11(EC_GROUP *VAR_2, const BIGNUM *VAR_3,
                                const BIGNUM *VAR_4, const BIGNUM *VAR_5, BN_CTX *VAR_6)
{
    BN_CTX *VAR_7 = ((void*)0);
    BN_MONT_CTX *VAR_8 = ((void*)0);
    BIGNUM *VAR_9 = ((void*)0);
    int VAR_10 = 0;

    FUNC_2(VAR_2->field_data1);
    VAR_2->field_data1 = ((void*)0);
    FUNC_5(VAR_2->field_data2);
    VAR_2->field_data2 = ((void*)0);

    if (VAR_6 == ((void*)0)) {
        VAR_6 = VAR_7 = FUNC_1(VAR_2->libctx);
        if (VAR_6 == ((void*)0))
            return 0;
    }

    VAR_8 = FUNC_3();
    if (VAR_8 == ((void*)0))
        goto err;
    if (!FUNC_4(VAR_8, VAR_3, VAR_6)) {
        FUNC_9(VAR_0, VAR_1);
        goto err;
    }
    VAR_9 = FUNC_6();
    if (VAR_9 == ((void*)0))
        goto err;
    if (!FUNC_7(VAR_9, FUNC_8(), VAR_8, VAR_6))
        goto err;

    VAR_2->field_data1 = VAR_8;
    VAR_8 = ((void*)0);
    VAR_2->field_data2 = VAR_9;
    VAR_9 = ((void*)0);

    VAR_10 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    if (!VAR_10) {
        FUNC_2(VAR_2->field_data1);
        VAR_2->field_data1 = ((void*)0);
        FUNC_5(VAR_2->field_data2);
        VAR_2->field_data2 = ((void*)0);
    }

 err:
    FUNC_5(VAR_9);
    FUNC_0(VAR_7);
    FUNC_2(VAR_8);
    return VAR_10;
}
