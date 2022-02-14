
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ prime_t ;
typedef scalar_t__ BN_ULONG ;
typedef int BN_CTX ;
typedef int const BIGNUM ;


 int FUNC_0 (int *) ;
 int const* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int const*,int const*,int const*) ;
 int FUNC_4 (int const*,scalar_t__) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int const*,int const*,int const*,int *) ;
 scalar_t__ FUNC_7 (int const*,scalar_t__) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*,int,int ,int ,int *) ;
 int FUNC_10 (int const*,int const*,int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int) ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static int FUNC_14(BIGNUM *VAR_4, int VAR_5, int VAR_6, prime_t *VAR_7,
                             const BIGNUM *VAR_8, const BIGNUM *VAR_9,
                             BN_CTX *VAR_10)
{
    int VAR_11, VAR_12 = 0;
    BIGNUM *VAR_13;
    BN_ULONG VAR_14;
    int VAR_15 = FUNC_12(VAR_5);
    BN_ULONG VAR_16 = VAR_0 - VAR_3[VAR_15 - 1];

    FUNC_2(VAR_10);
    if ((VAR_13 = FUNC_1(VAR_10)) == ((void*)0))
        goto err;

    if (VAR_16 > VAR_0 - FUNC_5(VAR_8))
        VAR_16 = VAR_0 - FUNC_5(VAR_8);

 again:
    if (!FUNC_9(VAR_4, VAR_5, VAR_2, VAR_1, VAR_10))
        goto err;



    if (!FUNC_6(VAR_13, VAR_4, VAR_8, VAR_10))
        goto err;
    if (!FUNC_10(VAR_4, VAR_4, VAR_13))
        goto err;
    if (VAR_9 == ((void*)0)) {
        if (!FUNC_4(VAR_4, VAR_6 ? 3u : 1u))
            goto err;
    } else {
        if (!FUNC_3(VAR_4, VAR_4, VAR_9))
            goto err;
    }

    if (FUNC_8(VAR_4) < VAR_5
            || FUNC_5(VAR_4) < (VAR_6 ? 5u : 3u)) {
        if (!FUNC_3(VAR_4, VAR_4, VAR_8))
            goto err;
    }


    for (VAR_11 = 1; VAR_11 < VAR_15; VAR_11++) {
        BN_ULONG VAR_17 = FUNC_7(VAR_4, (BN_ULONG)VAR_3[VAR_11]);
        if (VAR_17 == (BN_ULONG)-1)
            goto err;
        VAR_7[VAR_11] = (prime_t) VAR_17;
    }
    VAR_14 = 0;
 loop:
    for (VAR_11 = 1; VAR_11 < VAR_15; VAR_11++) {

        if (VAR_5 <= 31 && VAR_14 <= 0x7fffffff
                && FUNC_13(VAR_3[VAR_11]) > FUNC_5(VAR_4) + VAR_14)
            break;

        if (VAR_6 ? (VAR_7[VAR_11] + VAR_14) % VAR_3[VAR_11] <= 1
                 : (VAR_7[VAR_11] + VAR_14) % VAR_3[VAR_11] == 0) {
            VAR_14 += FUNC_5(VAR_8);
            if (VAR_14 > VAR_16)
                goto again;
            goto loop;
        }
    }
    if (!FUNC_4(VAR_4, VAR_14))
        goto err;
    VAR_12 = 1;

 err:
    FUNC_0(VAR_10);
    FUNC_11(VAR_4);
    return VAR_12;
}
