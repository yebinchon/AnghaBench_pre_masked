
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_ULONG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,int,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,int *,int *) ;

__attribute__((used)) static int FUNC_19(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    BIGNUM *VAR_5 = ((void*)0);
    BN_ULONG VAR_6 = 1;
    BN_CTX *VAR_7 = FUNC_1();
    int VAR_8 = 1, VAR_9 = 0;

    if (!FUNC_16(VAR_4 = FUNC_9())
        || !FUNC_16(VAR_2 = FUNC_9())
        || !FUNC_16(VAR_3 = FUNC_9())
        || !FUNC_16(VAR_5 = FUNC_9()))
        goto err;

    FUNC_10(VAR_4);
    FUNC_10(VAR_2);
    FUNC_13(VAR_3);

    if (!FUNC_17(FUNC_12(VAR_2, 1024, VAR_1, VAR_0)))
        goto err;

    if (!FUNC_17(FUNC_3(VAR_5, VAR_2, VAR_3, VAR_4, VAR_7)))
        goto err;

    if (!FUNC_17(FUNC_18("BN_mod_exp", VAR_5, VAR_2)))
        VAR_9 = 1;

    if (!FUNC_17(FUNC_7(VAR_5, VAR_2, VAR_3, VAR_4, VAR_7)))
        goto err;

    if (!FUNC_17(FUNC_18("BN_mod_exp_recp", VAR_5, VAR_2)))
        VAR_9 = 1;

    if (!FUNC_17(FUNC_8(VAR_5, VAR_2, VAR_3, VAR_4, VAR_7)))
        goto err;

    if (!FUNC_17(FUNC_18("BN_mod_exp_simple", VAR_5, VAR_2)))
        VAR_9 = 1;

    if (!FUNC_17(FUNC_4(VAR_5, VAR_2, VAR_3, VAR_4, VAR_7, ((void*)0))))
        goto err;

    if (!FUNC_17(FUNC_18("BN_mod_exp_mont", VAR_5, VAR_2)))
        VAR_9 = 1;

    if (!FUNC_17(FUNC_5(VAR_5, VAR_2, VAR_3, VAR_4, VAR_7, ((void*)0))))
        goto err;

    if (!FUNC_17(FUNC_18("BN_mod_exp_mont_consttime", VAR_5, VAR_2)))
        VAR_9 = 1;





    if (!FUNC_17(FUNC_6(VAR_5, VAR_6, VAR_3, VAR_4, VAR_7, ((void*)0))))
        goto err;

    if (!FUNC_14(VAR_5)) {
        FUNC_15("BN_mod_exp_mont_word failed: "
                   "1 ** 0 mod 1 = r (should be 0)");
        FUNC_11(VAR_5);
        goto err;
    }

    VAR_8 = !VAR_9;
 err:
    FUNC_2(VAR_5);
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_0(VAR_7);

    return VAR_8;
}
