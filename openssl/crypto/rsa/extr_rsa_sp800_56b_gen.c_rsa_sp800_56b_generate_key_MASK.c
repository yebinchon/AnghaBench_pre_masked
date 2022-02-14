
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int,int *,int *,int *) ;
 int FUNC_6 (int *,int,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,int) ;

int FUNC_9(RSA *VAR_0, int VAR_1, const BIGNUM *VAR_2,
                               BN_GENCB *VAR_3)
{
    int VAR_4 = 0;
    int VAR_5;
    BN_CTX *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0);


    if (!FUNC_8(VAR_1, -1))
        return 0;

    VAR_6 = FUNC_1();
    if (VAR_6 == ((void*)0))
        return 0;


    if (VAR_2 == ((void*)0)) {
        VAR_7 = FUNC_3();
        if (VAR_7 == ((void*)0) || !FUNC_4(VAR_7, 65537))
            goto err;
    } else {
        VAR_7 = (BIGNUM *)VAR_2;
    }


    for (;;) {

        if (!FUNC_5(VAR_0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                           ((void*)0), VAR_1, VAR_7, VAR_6, VAR_3))
            goto err;

        VAR_5 = FUNC_6(VAR_0, VAR_1, VAR_7, VAR_6);
        if (VAR_5 < 0)
            goto err;
        if (VAR_5 > 0)
            break;

    }


    VAR_4 = FUNC_7(VAR_0, VAR_6);
err:
    if (VAR_2 == ((void*)0))
        FUNC_2(VAR_7);
    FUNC_0(VAR_6);
    return VAR_4;
}
