
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int field; int (* field_mod_func ) (int *,int *,int ,int *) ;int libctx; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *,int ,int *) ;

int FUNC_5(const EC_GROUP *VAR_2, BIGNUM *VAR_3, const BIGNUM *VAR_4,
                          BN_CTX *VAR_5)
{
    int VAR_6 = 0;
    BN_CTX *VAR_7 = ((void*)0);

    if (!VAR_2 || !VAR_3 || !VAR_4) {
        FUNC_3(VAR_0, VAR_1);
        goto err;
    }
    if (!VAR_5)
        if ((VAR_7 = VAR_5 = FUNC_1(VAR_2->libctx)) == ((void*)0))
            goto err;

    if (!FUNC_2(VAR_3, VAR_4, VAR_5))
        goto err;
    if (!VAR_2->field_mod_func(VAR_3, VAR_3, VAR_2->field, VAR_5))
        goto err;

    VAR_6 = 1;
 err:
    FUNC_0(VAR_7);
    return VAR_6;
}
