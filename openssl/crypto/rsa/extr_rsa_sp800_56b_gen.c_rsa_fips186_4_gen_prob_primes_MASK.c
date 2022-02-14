
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty_cnt; int * q; int * p; } ;
typedef TYPE_1__ RSA ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *,int *,int *,int const*,int const*,int const*,int,int const*,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int FUNC_8 (int const*) ;

int FUNC_9(RSA *VAR_4, BIGNUM *VAR_5, BIGNUM *VAR_6,
                                  BIGNUM *VAR_7, const BIGNUM *VAR_8,
                                  const BIGNUM *VAR_9, const BIGNUM *VAR_10,
                                  BIGNUM *VAR_11, BIGNUM *VAR_12, BIGNUM *VAR_13,
                                  const BIGNUM *VAR_14, const BIGNUM *VAR_15,
                                  const BIGNUM *VAR_16, int VAR_17,
                                  const BIGNUM *VAR_18, BN_CTX *VAR_19, BN_GENCB *VAR_20)
{
    int VAR_21 = 0, VAR_22;
    BIGNUM *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);





    if (VAR_17 < VAR_0) {
        FUNC_5(VAR_1, VAR_2);
        return 0;
    }

    if (!FUNC_8(VAR_18)) {
        FUNC_5(VAR_1,
               VAR_3);
        return 0;
    }






    FUNC_2(VAR_19);
    VAR_25 = FUNC_1(VAR_19);
    VAR_23 = (VAR_7 != ((void*)0)) ? VAR_7 : FUNC_1(VAR_19);
    VAR_24 = (VAR_13 != ((void*)0)) ? VAR_13 : FUNC_1(VAR_19);
    if (VAR_25 == ((void*)0) || VAR_23 == ((void*)0) || VAR_24 == ((void*)0))
        goto err;

    if (VAR_4->p == ((void*)0))
        VAR_4->p = FUNC_4();
    if (VAR_4->q == ((void*)0))
        VAR_4->q = FUNC_4();
    if (VAR_4->p == ((void*)0) || VAR_4->q == ((void*)0))
        goto err;


    if (!FUNC_6(VAR_4->p, VAR_23, VAR_5, VAR_6, VAR_8, VAR_9, VAR_10,
                                          VAR_17, VAR_18, VAR_19, VAR_20))
        goto err;
    for(;;) {

        if (!FUNC_6(VAR_4->q, VAR_24, VAR_11, VAR_12, VAR_14, VAR_15,
                                              VAR_16, VAR_17, VAR_18, VAR_19, VAR_20))
            goto err;


        VAR_22 = FUNC_7(VAR_25, VAR_23, VAR_24, VAR_17);
        if (VAR_22 < 0)
            goto err;
        if (VAR_22 == 0)
            continue;


        VAR_22 = FUNC_7(VAR_25, VAR_4->p, VAR_4->q, VAR_17);
        if (VAR_22 < 0)
            goto err;
        if (VAR_22 == 0)
            continue;
        break;
    }
    VAR_4->dirty_cnt++;
    VAR_21 = 1;
err:

    if (VAR_23 != VAR_7)
        FUNC_3(VAR_23);
    if (VAR_24 != VAR_13)
        FUNC_3(VAR_24);
    FUNC_3(VAR_25);

    FUNC_0(VAR_19);
    return VAR_21;
}
