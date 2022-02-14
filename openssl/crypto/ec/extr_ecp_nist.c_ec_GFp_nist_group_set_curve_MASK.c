
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int field_mod_func; int libctx; } ;
typedef TYPE_1__ EC_GROUP ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (int ,int const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_1__*,int const*,int const*,int const*,int *) ;

int FUNC_12(EC_GROUP *VAR_7, const BIGNUM *VAR_8,
                                const BIGNUM *VAR_9, const BIGNUM *VAR_10, BN_CTX *VAR_11)
{
    int VAR_12 = 0;
    BN_CTX *VAR_13 = ((void*)0);

    if (VAR_11 == ((void*)0))
        if ((VAR_11 = VAR_13 = FUNC_2(VAR_7->libctx)) == ((void*)0))
            return 0;

    FUNC_3(VAR_11);

    if (FUNC_9(FUNC_4(), VAR_8) == 0)
        VAR_7->field_mod_func = VAR_0;
    else if (FUNC_9(FUNC_5(), VAR_8) == 0)
        VAR_7->field_mod_func = VAR_1;
    else if (FUNC_9(FUNC_6(), VAR_8) == 0)
        VAR_7->field_mod_func = VAR_2;
    else if (FUNC_9(FUNC_7(), VAR_8) == 0)
        VAR_7->field_mod_func = VAR_3;
    else if (FUNC_9(FUNC_8(), VAR_8) == 0)
        VAR_7->field_mod_func = VAR_4;
    else {
        FUNC_10(VAR_5, VAR_6);
        goto err;
    }

    VAR_12 = FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);

 err:
    FUNC_0(VAR_11);
    FUNC_1(VAR_13);
    return VAR_12;
}
