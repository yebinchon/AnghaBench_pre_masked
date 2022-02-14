
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dmp1; int * dmq1; int * iqmp; int * n; int * d; int * e; int dirty_cnt; int * p; int const* q; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int * FUNC_8 (int *,int const*,int *,int *) ;
 int FUNC_9 (int *,int *,int const*,int *) ;
 void* FUNC_10 () ;
 int FUNC_11 (int *) ;
 void* FUNC_12 () ;
 int FUNC_13 (int *,int *,int const*,int *,int *,int *,int *,int *) ;

int FUNC_14(RSA *VAR_0, int VAR_1,
                                        const BIGNUM *VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = -1;
    BIGNUM *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = FUNC_1(VAR_3);
    VAR_7 = FUNC_1(VAR_3);
    VAR_8 = FUNC_1(VAR_3);
    VAR_9 = FUNC_1(VAR_3);
    if (VAR_9 == ((void*)0))
        goto err;


    if (FUNC_13(VAR_3, VAR_0->p, VAR_0->q, VAR_7, VAR_9, VAR_5, VAR_6, VAR_8) != 1)
        goto err;


    FUNC_6(VAR_0->e);
    VAR_0->e = FUNC_5(VAR_2);
    if (VAR_0->e == ((void*)0))
        goto err;

    FUNC_4(VAR_0->d);

    VAR_0->d = FUNC_12();
    if (VAR_0->d == ((void*)0) || FUNC_8(VAR_0->d, VAR_2, VAR_7, VAR_3) == ((void*)0))
        goto err;


    if (FUNC_11(VAR_0->d) <= (VAR_1 >> 1)) {
        VAR_4 = 0;
        goto err;
    }


    if (VAR_0->n == ((void*)0))
        VAR_0->n = FUNC_10();
    if (VAR_0->n == ((void*)0) || !FUNC_9(VAR_0->n, VAR_0->p, VAR_0->q, VAR_3))
        goto err;


    if (VAR_0->dmp1 == ((void*)0))
        VAR_0->dmp1 = FUNC_10();
    if (VAR_0->dmp1 == ((void*)0) || !FUNC_7(VAR_0->dmp1, VAR_0->d, VAR_5, VAR_3))
        goto err;


    if (VAR_0->dmq1 == ((void*)0))
        VAR_0->dmq1 = FUNC_12();
    if (VAR_0->dmq1 == ((void*)0) || !FUNC_7(VAR_0->dmq1, VAR_0->d, VAR_6, VAR_3))
        goto err;


    FUNC_6(VAR_0->iqmp);
    VAR_0->iqmp = FUNC_12();
    if (VAR_0->iqmp == ((void*)0)
            || FUNC_8(VAR_0->iqmp, VAR_0->q, VAR_0->p, VAR_3) == ((void*)0))
        goto err;

    VAR_0->dirty_cnt++;
    VAR_4 = 1;
err:
    if (VAR_4 != 1) {
        FUNC_6(VAR_0->e);
        VAR_0->e = ((void*)0);
        FUNC_6(VAR_0->d);
        VAR_0->d = ((void*)0);
        FUNC_6(VAR_0->n);
        VAR_0->n = ((void*)0);
        FUNC_6(VAR_0->iqmp);
        VAR_0->iqmp = ((void*)0);
        FUNC_6(VAR_0->dmq1);
        VAR_0->dmq1 = ((void*)0);
        FUNC_6(VAR_0->dmp1);
        VAR_0->dmp1 = ((void*)0);
    }
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);

    FUNC_0(VAR_3);
    return VAR_4;
}
