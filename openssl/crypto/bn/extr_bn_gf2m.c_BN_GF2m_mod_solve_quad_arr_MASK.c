
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int const*,int const*,int const*) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int const*,int const*,int const*) ;
 int FUNC_6 (int const*,int const*,int const*,int const*,int *) ;
 int FUNC_7 (int const*,int const*,int const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int const*,int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*,int const,int ,int ,int *) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int ,int ) ;
 int VAR_5 ;
 int FUNC_13 (int const*) ;

int FUNC_14(BIGNUM *VAR_6, const BIGNUM *VAR_7, const int VAR_8[],
                               BN_CTX *VAR_9)
{
    int VAR_10 = 0, VAR_11 = 0, VAR_12;
    BIGNUM *VAR_13, *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;

    FUNC_13(VAR_7);

    if (VAR_8[0] == 0) {

        FUNC_11(VAR_6);
        return 1;
    }

    FUNC_2(VAR_9);
    VAR_13 = FUNC_1(VAR_9);
    VAR_14 = FUNC_1(VAR_9);
    VAR_16 = FUNC_1(VAR_9);
    if (VAR_16 == ((void*)0))
        goto err;

    if (!FUNC_5(VAR_13, VAR_7, VAR_8))
        goto err;

    if (FUNC_9(VAR_13)) {
        FUNC_11(VAR_6);
        VAR_10 = 1;
        goto err;
    }

    if (VAR_8[0] & 0x1) {

        if (!FUNC_8(VAR_14, VAR_13))
            goto err;
        for (VAR_12 = 1; VAR_12 <= (VAR_8[0] - 1) / 2; VAR_12++) {
            if (!FUNC_7(VAR_14, VAR_14, VAR_8, VAR_9))
                goto err;
            if (!FUNC_7(VAR_14, VAR_14, VAR_8, VAR_9))
                goto err;
            if (!FUNC_3(VAR_14, VAR_14, VAR_13))
                goto err;
        }

    } else {

        VAR_15 = FUNC_1(VAR_9);
        VAR_17 = FUNC_1(VAR_9);
        VAR_18 = FUNC_1(VAR_9);
        if (VAR_18 == ((void*)0))
            goto err;
        do {
            if (!FUNC_10(VAR_15, VAR_8[0], VAR_2, VAR_1,
                                 VAR_9))
                goto err;
            if (!FUNC_5(VAR_15, VAR_15, VAR_8))
                goto err;
            FUNC_11(VAR_14);
            if (!FUNC_8(VAR_16, VAR_15))
                goto err;
            for (VAR_12 = 1; VAR_12 <= VAR_8[0] - 1; VAR_12++) {
                if (!FUNC_7(VAR_14, VAR_14, VAR_8, VAR_9))
                    goto err;
                if (!FUNC_7(VAR_17, VAR_16, VAR_8, VAR_9))
                    goto err;
                if (!FUNC_6(VAR_18, VAR_17, VAR_13, VAR_8, VAR_9))
                    goto err;
                if (!FUNC_3(VAR_14, VAR_14, VAR_18))
                    goto err;
                if (!FUNC_3(VAR_16, VAR_17, VAR_15))
                    goto err;
            }
            VAR_11++;
        } while (FUNC_9(VAR_16) && (VAR_11 < VAR_5));
        if (FUNC_9(VAR_16)) {
            FUNC_12(VAR_0, VAR_4);
            goto err;
        }
    }

    if (!FUNC_7(VAR_16, VAR_14, VAR_8, VAR_9))
        goto err;
    if (!FUNC_3(VAR_16, VAR_14, VAR_16))
        goto err;
    if (FUNC_4(VAR_16, VAR_13)) {
        FUNC_12(VAR_0, VAR_3);
        goto err;
    }

    if (!FUNC_8(VAR_6, VAR_14))
        goto err;
    FUNC_13(VAR_6);

    VAR_10 = 1;

 err:
    FUNC_0(VAR_9);
    return VAR_10;
}
