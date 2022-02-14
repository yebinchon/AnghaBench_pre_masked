
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ prime_t ;
typedef scalar_t__ BN_ULONG ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int ,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(BIGNUM *VAR_4, int VAR_5, int VAR_6, prime_t *VAR_7,
                          BN_CTX *VAR_8)
{
    int VAR_9;
    BN_ULONG VAR_10;
    int VAR_11 = FUNC_7(VAR_5);
    BN_ULONG VAR_12 = VAR_0 - VAR_3[VAR_11 - 1];

 again:

    if (!FUNC_4(VAR_4, VAR_5, VAR_2, VAR_1, VAR_8))
        return 0;
    if (VAR_6 && !FUNC_5(VAR_4, 1))
        return 0;

    for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9++) {
        BN_ULONG VAR_13 = FUNC_2(VAR_4, (BN_ULONG)VAR_3[VAR_9]);
        if (VAR_13 == (BN_ULONG)-1)
            return 0;
        VAR_7[VAR_9] = (prime_t) VAR_13;
    }
    VAR_10 = 0;
 loop:
    for (VAR_9 = 1; VAR_9 < VAR_11; VAR_9++) {







        if (VAR_5 <= 31 && VAR_10 <= 0x7fffffff
                && FUNC_8(VAR_3[VAR_9]) > FUNC_1(VAR_4) + VAR_10)
            break;
        if (VAR_6 ? (VAR_7[VAR_9] + VAR_10) % VAR_3[VAR_9] <= 1
                 : (VAR_7[VAR_9] + VAR_10) % VAR_3[VAR_9] == 0) {
            VAR_10 += VAR_6 ? 4 : 2;
            if (VAR_10 > VAR_12)
                goto again;
            goto loop;
        }
    }
    if (!FUNC_0(VAR_4, VAR_10))
        return 0;
    if (FUNC_3(VAR_4) != VAR_5)
        goto again;
    FUNC_6(VAR_4);
    return 1;
}
