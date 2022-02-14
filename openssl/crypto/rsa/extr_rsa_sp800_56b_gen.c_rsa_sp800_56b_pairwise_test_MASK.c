
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int d; int e; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(RSA *VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5, *VAR_6;

    FUNC_2(VAR_3);
    VAR_6 = FUNC_1(VAR_3);
    VAR_5 = FUNC_1(VAR_3);
    if (VAR_5 == ((void*)0))
        goto err;

    VAR_4 = (FUNC_5(VAR_5, 2)
          && FUNC_4(VAR_6, VAR_5, VAR_2->e, VAR_2->n, VAR_3)
          && FUNC_4(VAR_6, VAR_6, VAR_2->d, VAR_2->n, VAR_3)
          && FUNC_3(VAR_5, VAR_6) == 0);
    if (VAR_4 == 0)
        FUNC_6(VAR_0, VAR_1);
err:
    FUNC_0(VAR_3);
    return VAR_4;
}
