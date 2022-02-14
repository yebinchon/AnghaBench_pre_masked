
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BN_ULONG ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int const*,int ) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int const*,int) ;
 scalar_t__ FUNC_6 (int const*,int) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 () ;
 int FUNC_9 (int const*,int,int *,int *,int ,int*) ;
 int FUNC_10 (int ) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_11(const BIGNUM *VAR_2, int VAR_3, BN_CTX *VAR_4,
                           int VAR_5, BN_GENCB *VAR_6)
{
    int VAR_7, VAR_8, VAR_9 = -1;

    BN_CTX *VAR_10 = ((void*)0);







    if (FUNC_3(VAR_2, FUNC_8()) <= 0)
        return 0;


    if (FUNC_4(VAR_2)) {

        if (FUNC_5(VAR_2, 3))
            return 1;
    } else {

        return FUNC_5(VAR_2, 2);
    }


    if (VAR_5) {
        int VAR_11 = FUNC_10(FUNC_7(VAR_2));

        for (VAR_7 = 1; VAR_7 < VAR_11; VAR_7++) {
            BN_ULONG VAR_12 = FUNC_6(VAR_2, VAR_1[VAR_7]);
            if (VAR_12 == (BN_ULONG)-1)
                return -1;
            if (VAR_12 == 0)
                return FUNC_5(VAR_2, VAR_1[VAR_7]);
        }
        if (!FUNC_2(VAR_6, 1, -1))
            return -1;
    }

    if (VAR_4 == ((void*)0) && (VAR_10 = VAR_4 = FUNC_1()) == ((void*)0))
        goto err;


    VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_4, VAR_6, 0, &VAR_8);
    if (!VAR_9)
        goto err;
    VAR_9 = (VAR_8 == VAR_0);
err:

    FUNC_0(VAR_10);

    return VAR_9;
}
