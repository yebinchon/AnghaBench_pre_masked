
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirty_cnt; int * g; int * p; } ;
typedef TYPE_1__ DH ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int,int *,int *,int *) ;
 void* FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_10(DH *VAR_9, int VAR_10, int VAR_11,
                                BN_GENCB *VAR_12)
{
    BIGNUM *VAR_13, *VAR_14;
    int VAR_15, VAR_16 = -1;
    BN_CTX *VAR_17 = ((void*)0);

    if (VAR_10 > VAR_8) {
        FUNC_9(VAR_0, VAR_5);
        return 0;
    }

    if (VAR_10 < VAR_3) {
        FUNC_9(VAR_0, VAR_6);
        return 0;
    }

    VAR_17 = FUNC_3();
    if (VAR_17 == ((void*)0))
        goto err;
    FUNC_4(VAR_17);
    VAR_13 = FUNC_2(VAR_17);
    VAR_14 = FUNC_2(VAR_17);
    if (VAR_14 == ((void*)0))
        goto err;


    if (!VAR_9->p && ((VAR_9->p = FUNC_7()) == ((void*)0)))
        goto err;
    if (!VAR_9->g && ((VAR_9->g = FUNC_7()) == ((void*)0)))
        goto err;

    if (VAR_11 <= 1) {
        FUNC_9(VAR_0, VAR_4);
        goto err;
    }
    if (VAR_11 == VAR_1) {
        if (!FUNC_8(VAR_13, 24))
            goto err;
        if (!FUNC_8(VAR_14, 23))
            goto err;
        VAR_15 = 2;
    } else if (VAR_11 == VAR_2) {
        if (!FUNC_8(VAR_13, 60))
            goto err;
        if (!FUNC_8(VAR_14, 59))
            goto err;
        VAR_15 = 5;
    } else {





        if (!FUNC_8(VAR_13, 12))
            goto err;
        if (!FUNC_8(VAR_14, 11))
            goto err;
        VAR_15 = VAR_11;
    }

    if (!FUNC_6(VAR_9->p, VAR_10, 1, VAR_13, VAR_14, VAR_12))
        goto err;
    if (!FUNC_5(VAR_12, 3, 0))
        goto err;
    if (!FUNC_8(VAR_9->g, VAR_15))
        goto err;
    VAR_9->dirty_cnt++;
    VAR_16 = 1;
 err:
    if (VAR_16 == -1) {
        FUNC_9(VAR_0, VAR_7);
        VAR_16 = 0;
    }

    FUNC_0(VAR_17);
    FUNC_1(VAR_17);
    return VAR_16;
}
