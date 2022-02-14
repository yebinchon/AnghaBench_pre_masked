
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_RECP_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int ,int ) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *,int *,int ) ;
 int * FUNC_11 () ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_2 ;
 int FUNC_17 () ;

__attribute__((used)) static int FUNC_18(void)
{
    BIGNUM *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    BN_RECP_CTX *VAR_8 = ((void*)0);
    int VAR_9 = 0, VAR_10;

    if (!FUNC_15(VAR_3 = FUNC_11())
            || !FUNC_15(VAR_4 = FUNC_11())
            || !FUNC_15(VAR_5 = FUNC_11())
            || !FUNC_15(VAR_6 = FUNC_11())
            || !FUNC_15(VAR_7 = FUNC_11())
            || !FUNC_15(VAR_8 = FUNC_1()))
        goto err;

    for (VAR_10 = 0; VAR_10 < VAR_0 + VAR_1; VAR_10++) {
        if (VAR_10 < VAR_1) {
            if (!(FUNC_16(FUNC_5(VAR_3, 400, 0, 0))
                    && FUNC_15(FUNC_6(VAR_4, VAR_3))
                    && FUNC_16(FUNC_9(VAR_3, VAR_3, VAR_10))
                    && FUNC_16(FUNC_4(VAR_3, VAR_10))))
                goto err;
        } else {
            if (!(FUNC_16(FUNC_5(VAR_4, 50 + 3 * (VAR_10 - VAR_1), 0, 0))))
                goto err;
        }
        FUNC_12(VAR_3, FUNC_17());
        FUNC_12(VAR_4, FUNC_17());
        if (!(FUNC_16(FUNC_2(VAR_8, VAR_4, VAR_2))
                && FUNC_16(FUNC_7(VAR_6, VAR_5, VAR_3, VAR_8, VAR_2))
                && FUNC_16(FUNC_10(VAR_7, VAR_6, VAR_4, VAR_2))
                && FUNC_16(FUNC_3(VAR_6, VAR_7, VAR_5))
                && FUNC_16(FUNC_13(VAR_6, VAR_6, VAR_3))
                && FUNC_14(VAR_6)))
            goto err;
    }
    VAR_9 = 1;
 err:
    FUNC_8(VAR_3);
    FUNC_8(VAR_4);
    FUNC_8(VAR_5);
    FUNC_8(VAR_6);
    FUNC_8(VAR_7);
    FUNC_0(VAR_8);
    return VAR_9;
}
