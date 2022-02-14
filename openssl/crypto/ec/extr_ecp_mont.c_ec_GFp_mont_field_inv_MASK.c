
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * field_data1; int field; int libctx; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int const*,int *,int ,int *,int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(const EC_GROUP *VAR_2, BIGNUM *VAR_3, const BIGNUM *VAR_4,
                            BN_CTX *VAR_5)
{
    BIGNUM *VAR_6 = ((void*)0);
    BN_CTX *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (VAR_2->field_data1 == ((void*)0))
        return 0;

    if (VAR_5 == ((void*)0)
            && (VAR_5 = VAR_7 = FUNC_3(VAR_2->libctx)) == ((void*)0))
        return 0;

    FUNC_4(VAR_5);
    if ((VAR_6 = FUNC_2(VAR_5)) == ((void*)0))
        goto err;


    if (!FUNC_7(VAR_6, 2))
        goto err;
    if (!FUNC_8(VAR_6, VAR_2->field, VAR_6))
        goto err;




    if (!FUNC_6(VAR_3, VAR_4, VAR_6, VAR_2->field, VAR_5, VAR_2->field_data1))
        goto err;


    if (FUNC_5(VAR_3)) {
        FUNC_9(VAR_0, VAR_1);
        goto err;
    }

    VAR_8 = 1;

  err:
    FUNC_0(VAR_5);
    FUNC_1(VAR_7);
    return VAR_8;
}
