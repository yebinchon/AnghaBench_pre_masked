
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(BIGNUM *VAR_0, const BIGNUM *VAR_1, BN_CTX *VAR_2,
                             BN_GENCB *VAR_3)
{
    int VAR_4 = 0, VAR_5;
    if (!FUNC_3(VAR_0, VAR_1))
        return 0;
    if (!FUNC_4(VAR_0) && !FUNC_1(VAR_0, 1))
        return 0;
    for (;;) {
        VAR_4++;
        FUNC_0(VAR_3, 0, VAR_4);

        VAR_5 = FUNC_2(VAR_0, VAR_2, VAR_3);
        if (VAR_5 < 0)
            return 0;
        if (VAR_5)
            break;
        if (!FUNC_1(VAR_0, 2))
            return 0;
    }
    FUNC_0(VAR_3, 2, VAR_4);
    return 1;
}
