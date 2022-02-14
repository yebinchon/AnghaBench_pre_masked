
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; int e; int q; int p; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ,int ,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,int *,int *,int *,int *,int *) ;

int FUNC_9(const RSA *VAR_0, int VAR_1, BN_CTX *VAR_2)
{
    int VAR_3;
    BIGNUM *VAR_4, *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;


    if (FUNC_7(VAR_0->d) <= (VAR_1 >> 1))
        return 0;

    FUNC_2(VAR_2);
    VAR_4 = FUNC_1(VAR_2);
    VAR_5 = FUNC_1(VAR_2);
    VAR_6 = FUNC_1(VAR_2);
    VAR_7 = FUNC_1(VAR_2);
    VAR_8 = FUNC_1(VAR_2);
    VAR_9 = FUNC_1(VAR_2);
    VAR_3 = (VAR_9 != ((void*)0)

          && (FUNC_8(VAR_2, VAR_0->p, VAR_0->q, VAR_7, VAR_9, VAR_5, VAR_6, VAR_8) == 1)

          && (FUNC_4(VAR_0->d, VAR_7) < 0)

          && FUNC_6(VAR_4, VAR_0->e, VAR_0->d, VAR_7, VAR_2)
          && FUNC_5(VAR_4));

    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    FUNC_3(VAR_9);
    FUNC_0(VAR_2);
    return VAR_3;
}
