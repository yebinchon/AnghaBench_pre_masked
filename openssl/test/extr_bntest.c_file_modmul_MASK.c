
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int STANZA ;
typedef int BN_MONT_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int ) ;
 int FUNC_7 (int *,int *,int *,int *,int ) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int *,int *,int ) ;
 int FUNC_10 (int *,int *,int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_0 ;
 int FUNC_13 (char*,int *,int *) ;
 int * FUNC_14 (int *,char*) ;

__attribute__((used)) static int FUNC_15(STANZA *VAR_1)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    int VAR_7 = 0;

    if (!FUNC_11(VAR_2 = FUNC_14(VAR_1, "A"))
            || !FUNC_11(VAR_3 = FUNC_14(VAR_1, "B"))
            || !FUNC_11(VAR_4 = FUNC_14(VAR_1, "M"))
            || !FUNC_11(VAR_5 = FUNC_14(VAR_1, "ModMul"))
            || !FUNC_11(VAR_6 = FUNC_8()))
        goto err;

    if (!FUNC_12(FUNC_6(VAR_6, VAR_2, VAR_3, VAR_4, VAR_0))
            || !FUNC_13("A * B (mod M)", VAR_5, VAR_6))
        goto err;

    if (FUNC_5(VAR_4)) {

        BN_MONT_CTX *VAR_8 = FUNC_1();
        BIGNUM *VAR_9 = FUNC_8();
        BIGNUM *VAR_10 = FUNC_8();

        if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0)
                || !FUNC_12(FUNC_2(VAR_8, VAR_4, VAR_0))
                || !FUNC_12(FUNC_9(VAR_9, VAR_2, VAR_4, VAR_0))
                || !FUNC_12(FUNC_9(VAR_10, VAR_3, VAR_4, VAR_0))
                || !FUNC_12(FUNC_10(VAR_9, VAR_9, VAR_8, VAR_0))
                || !FUNC_12(FUNC_10(VAR_10, VAR_10, VAR_8, VAR_0))
                || !FUNC_12(FUNC_7(VAR_6, VAR_9, VAR_10,
                                                    VAR_8, VAR_0))
                || !FUNC_12(FUNC_4(VAR_6, VAR_6, VAR_8, VAR_0))
                || !FUNC_13("A * B (mod M) (mont)", VAR_5, VAR_6))
            VAR_7 = 0;
        else
            VAR_7 = 1;
        FUNC_0(VAR_8);
        FUNC_3(VAR_9);
        FUNC_3(VAR_10);
        if (VAR_7 == 0)
            goto err;
    }

    VAR_7 = 1;
 err:
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    return VAR_7;
}
