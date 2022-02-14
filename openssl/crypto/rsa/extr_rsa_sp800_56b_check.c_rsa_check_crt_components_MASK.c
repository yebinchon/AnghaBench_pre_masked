
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p; int * q; int * iqmp; int * e; int * dmq1; int * dmp1; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int * FUNC_9 () ;

int FUNC_10(const RSA *VAR_0, BN_CTX *VAR_1)
{
    int VAR_2 = 0;
    BIGNUM *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);


    if (VAR_0->dmp1 == ((void*)0) || VAR_0->dmq1 == ((void*)0) || VAR_0->iqmp == ((void*)0)) {
        if (VAR_0->dmp1 != ((void*)0) || VAR_0->dmq1 != ((void*)0) || VAR_0->iqmp != ((void*)0))
            return 0;
        return 1;
    }

    FUNC_2(VAR_1);
    VAR_3 = FUNC_1(VAR_1);
    VAR_4 = FUNC_1(VAR_1);
    VAR_5 = FUNC_1(VAR_1);
    VAR_2 = (VAR_5 != ((void*)0))

          && (FUNC_5(VAR_4, VAR_0->p) != ((void*)0))
          && FUNC_8(VAR_4, 1)

          && (FUNC_5(VAR_5, VAR_0->q) != ((void*)0))
          && FUNC_8(VAR_5, 1)

          && (FUNC_4(VAR_0->dmp1, FUNC_9()) > 0)
          && (FUNC_4(VAR_0->dmp1, VAR_4) < 0)

          && (FUNC_4(VAR_0->dmq1, FUNC_9()) > 0)
          && (FUNC_4(VAR_0->dmq1, VAR_5) < 0)

          && (FUNC_4(VAR_0->iqmp, FUNC_9()) > 0)
          && (FUNC_4(VAR_0->iqmp, VAR_0->p) < 0)

          && FUNC_7(VAR_3, VAR_0->dmp1, VAR_0->e, VAR_4, VAR_1)
          && FUNC_6(VAR_3)

          && FUNC_7(VAR_3, VAR_0->dmq1, VAR_0->e, VAR_5, VAR_1)
          && FUNC_6(VAR_3)

          && FUNC_7(VAR_3, VAR_0->iqmp, VAR_0->q, VAR_0->p, VAR_1)
          && FUNC_6(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    FUNC_0(VAR_1);
    return VAR_2;
}
