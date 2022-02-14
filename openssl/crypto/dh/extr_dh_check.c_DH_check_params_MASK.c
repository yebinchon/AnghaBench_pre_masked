
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int p; int g; } ;
typedef TYPE_1__ DH ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int * FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int *,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_13(const DH *VAR_6, int *VAR_7)
{
    int VAR_8 = 0;
    BIGNUM *VAR_9 = ((void*)0);
    BN_CTX *VAR_10 = ((void*)0);

    *VAR_7 = 0;
    VAR_10 = FUNC_3();
    if (VAR_10 == ((void*)0))
        goto err;
    FUNC_4(VAR_10);
    VAR_9 = FUNC_2(VAR_10);
    if (VAR_9 == ((void*)0))
        goto err;

    if (!FUNC_8(VAR_6->p))
        *VAR_7 |= VAR_0;
    if (FUNC_7(VAR_6->g) || FUNC_10(VAR_6->g) || FUNC_9(VAR_6->g))
        *VAR_7 |= VAR_4;
    if (FUNC_6(VAR_9, VAR_6->p) == ((void*)0) || !FUNC_12(VAR_9, 1))
        goto err;
    if (FUNC_5(VAR_6->g, VAR_9) >= 0)
        *VAR_7 |= VAR_4;
    if (FUNC_11(VAR_6->p) < VAR_1)
        *VAR_7 |= VAR_3;
    if (FUNC_11(VAR_6->p) > VAR_5)
        *VAR_7 |= VAR_2;

    VAR_8 = 1;
 err:
    FUNC_0(VAR_10);
    FUNC_1(VAR_10);
    return VAR_8;
}
