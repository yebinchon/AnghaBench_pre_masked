
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int const*,int) ;
 scalar_t__ FUNC_4 (int const*,int ) ;
 scalar_t__ FUNC_5 (int const*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int const*,int *) ;
 int FUNC_8 (int *,int const*,int const*,int *) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (int *) ;

int FUNC_15(BIGNUM *VAR_4, const BIGNUM *VAR_5, const BIGNUM *VAR_6,
                      const BIGNUM *VAR_7, BN_CTX *VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12 = 0, VAR_13, VAR_14, VAR_15, VAR_16;
    int VAR_17 = 1;
    BIGNUM *VAR_18;

    BIGNUM *VAR_19[VAR_3];

    if (FUNC_4(VAR_6, VAR_0) != 0
            || FUNC_4(VAR_5, VAR_0) != 0
            || FUNC_4(VAR_7, VAR_0) != 0) {

        FUNC_13(VAR_1, VAR_2);
        return 0;
    }

    VAR_11 = FUNC_9(VAR_6);
    if (VAR_11 == 0) {

        if (FUNC_3(VAR_7, 1)) {
            VAR_12 = 1;
            FUNC_12(VAR_4);
        } else {
            VAR_12 = FUNC_10(VAR_4);
        }
        return VAR_12;
    }

    FUNC_2(VAR_8);
    VAR_18 = FUNC_1(VAR_8);
    VAR_19[0] = FUNC_1(VAR_8);
    if (VAR_19[0] == ((void*)0))
        goto err;

    if (!FUNC_8(VAR_19[0], VAR_5, VAR_7, VAR_8))
        goto err;
    if (FUNC_6(VAR_19[0])) {
        FUNC_12(VAR_4);
        VAR_12 = 1;
        goto err;
    }

    VAR_15 = FUNC_11(VAR_11);
    if (VAR_15 > 1) {
        if (!FUNC_7(VAR_18, VAR_19[0], VAR_19[0], VAR_7, VAR_8))
            goto err;
        VAR_10 = 1 << (VAR_15 - 1);
        for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9++) {
            if (((VAR_19[VAR_9] = FUNC_1(VAR_8)) == ((void*)0)) ||
                !FUNC_7(VAR_19[VAR_9], VAR_19[VAR_9 - 1], VAR_18, VAR_7, VAR_8))
                goto err;
        }
    }

    VAR_17 = 1;


    VAR_16 = 0;
    VAR_13 = VAR_11 - 1;
    VAR_14 = 0;

    if (!FUNC_10(VAR_4))
        goto err;

    for (;;) {
        if (FUNC_5(VAR_6, VAR_13) == 0) {
            if (!VAR_17)
                if (!FUNC_7(VAR_4, VAR_4, VAR_4, VAR_7, VAR_8))
                    goto err;
            if (VAR_13 == 0)
                break;
            VAR_13--;
            continue;
        }





        VAR_10 = VAR_13;
        VAR_16 = 1;
        VAR_14 = 0;
        for (VAR_9 = 1; VAR_9 < VAR_15; VAR_9++) {
            if (VAR_13 - VAR_9 < 0)
                break;
            if (FUNC_5(VAR_6, VAR_13 - VAR_9)) {
                VAR_16 <<= (VAR_9 - VAR_14);
                VAR_16 |= 1;
                VAR_14 = VAR_9;
            }
        }


        VAR_10 = VAR_14 + 1;

        if (!VAR_17)
            for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
                if (!FUNC_7(VAR_4, VAR_4, VAR_4, VAR_7, VAR_8))
                    goto err;
            }


        if (!FUNC_7(VAR_4, VAR_4, VAR_19[VAR_16 >> 1], VAR_7, VAR_8))
            goto err;


        VAR_13 -= VAR_14 + 1;
        VAR_16 = 0;
        VAR_17 = 0;
        if (VAR_13 < 0)
            break;
    }
    VAR_12 = 1;
 err:
    FUNC_0(VAR_8);
    FUNC_14(VAR_4);
    return VAR_12;
}
