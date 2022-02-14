
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;
 int * FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (unsigned char*,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(int VAR_6)
{
    BN_CTX *VAR_7;
    unsigned char VAR_8;
    int VAR_9 = 0;
    BIGNUM *VAR_10 = ((void*)0);
    BIGNUM *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = ((void*)0);
    BIGNUM *VAR_15 = ((void*)0);
    BIGNUM *VAR_16 = ((void*)0);

    if (!FUNC_15(VAR_7 = FUNC_1()))
        goto err;

    if (!FUNC_15(VAR_10 = FUNC_9())
        || !FUNC_15(VAR_11 = FUNC_9())
        || !FUNC_15(VAR_12 = FUNC_9())
        || !FUNC_15(VAR_13 = FUNC_9())
        || !FUNC_15(VAR_14 = FUNC_9())
        || !FUNC_15(VAR_15 = FUNC_9())
        || !FUNC_15(VAR_16 = FUNC_9()))
        goto err;

    FUNC_12(&VAR_8, 1);
    VAR_8 = (VAR_8 % VAR_0) - VAR_1;
    FUNC_11(VAR_14, VAR_5 + VAR_8, VAR_4, VAR_2);

    FUNC_12(&VAR_8, 1);
    VAR_8 = (VAR_8 % VAR_0) - VAR_1;
    FUNC_11(VAR_15, VAR_5 + VAR_8, VAR_4, VAR_2);

    FUNC_12(&VAR_8, 1);
    VAR_8 = (VAR_8 % VAR_0) - VAR_1;
    FUNC_11(VAR_16, VAR_5 + VAR_8, VAR_4, VAR_3);

    if (!FUNC_16(FUNC_4(VAR_14, VAR_14, VAR_16, VAR_7))
        || !FUNC_16(FUNC_4(VAR_15, VAR_15, VAR_16, VAR_7))
        || !FUNC_16(FUNC_5(VAR_10, VAR_14, VAR_15, VAR_16, VAR_7, ((void*)0)))
        || !FUNC_16(FUNC_7(VAR_12, VAR_14, VAR_15, VAR_16, VAR_7))
        || !FUNC_16(FUNC_8(VAR_13, VAR_14, VAR_15, VAR_16, VAR_7))
        || !FUNC_16(FUNC_6(VAR_11, VAR_14, VAR_15, VAR_16, VAR_7, ((void*)0))))
        goto err;

    if (!FUNC_13(VAR_13, VAR_10)
        || !FUNC_13(VAR_13, VAR_12)
        || !FUNC_13(VAR_13, VAR_11)) {
        if (FUNC_2(VAR_13, VAR_10) != 0)
            FUNC_14("simple and mont results differ");
        if (FUNC_2(VAR_13, VAR_11) != 0)
            FUNC_14("simple and mont const time results differ");
        if (FUNC_2(VAR_13, VAR_12) != 0)
            FUNC_14("simple and recp results differ");

        FUNC_10(VAR_14);
        FUNC_10(VAR_15);
        FUNC_10(VAR_16);
        FUNC_10(VAR_13);
        FUNC_10(VAR_12);
        FUNC_10(VAR_10);
        FUNC_10(VAR_11);
        goto err;
    }

    VAR_9 = 1;
 err:
    FUNC_3(VAR_10);
    FUNC_3(VAR_11);
    FUNC_3(VAR_12);
    FUNC_3(VAR_13);
    FUNC_3(VAR_14);
    FUNC_3(VAR_15);
    FUNC_3(VAR_16);
    FUNC_0(VAR_7);

    return VAR_9;
}
