
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
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int ,int *) ;
 int FUNC_5 (int *,int *,int *) ;

int FUNC_6(BIGNUM *VAR_2, BIGNUM *VAR_3, int VAR_4, BN_CTX *VAR_5)
{
    BIGNUM *VAR_6;
    int VAR_7;




    if ((VAR_4 < 1024) || (VAR_4 & 0xff))
        return 0;
    VAR_4 >>= 1;





    if (!FUNC_4(VAR_2, VAR_4, VAR_1, VAR_0, VAR_5))
        goto err;

    FUNC_2(VAR_5);
    VAR_6 = FUNC_1(VAR_5);
    if (VAR_6 == ((void*)0))
        goto err;

    for (VAR_7 = 0; VAR_7 < 1000; VAR_7++) {
        if (!FUNC_4(VAR_3, VAR_4, VAR_1, VAR_0,
                             VAR_5))
            goto err;


        if (!FUNC_5(VAR_6, VAR_2, VAR_3))
            goto err;
        if (FUNC_3(VAR_6) > (VAR_4 - 100))
            break;
    }

    FUNC_0(VAR_5);

    if (VAR_7 < 1000)
        return 1;

    return 0;

 err:
    FUNC_0(VAR_5);
    return 0;
}
