
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * q; int * priv_key; int * g; int * p; } ;
struct TYPE_8__ {int * s; int * r; } ;
typedef TYPE_1__ DSA_SIG ;
typedef TYPE_2__ DSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (unsigned char const*,int,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int * FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,int *,int *,int *,int *) ;
 void* FUNC_9 () ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,scalar_t__,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 () ;
 int FUNC_16 (int ,int) ;
 int VAR_6 ;
 int FUNC_17 (TYPE_2__*,int *,int **,int **,unsigned char const*,int) ;

__attribute__((used)) static DSA_SIG *FUNC_18(const unsigned char *VAR_7, int VAR_8, DSA *VAR_9)
{
    BIGNUM *VAR_10 = ((void*)0);
    BIGNUM *VAR_11, *VAR_12, *VAR_13, *VAR_14;
    BN_CTX *VAR_15 = ((void*)0);
    int VAR_16 = VAR_6;
    DSA_SIG *VAR_17 = ((void*)0);
    int VAR_18 = 0;

    if (VAR_9->p == ((void*)0) || VAR_9->q == ((void*)0) || VAR_9->g == ((void*)0)) {
        VAR_16 = VAR_4;
        goto err;
    }
    if (VAR_9->priv_key == ((void*)0)) {
        VAR_16 = VAR_5;
        goto err;
    }

    VAR_17 = FUNC_15();
    if (VAR_17 == ((void*)0))
        goto err;
    VAR_17->r = FUNC_9();
    VAR_17->s = FUNC_9();
    if (VAR_17->r == ((void*)0) || VAR_17->s == ((void*)0))
        goto err;

    VAR_15 = FUNC_2();
    if (VAR_15 == ((void*)0))
        goto err;
    VAR_11 = FUNC_1(VAR_15);
    VAR_12 = FUNC_1(VAR_15);
    VAR_13 = FUNC_1(VAR_15);
    VAR_14 = FUNC_1(VAR_15);
    if (VAR_14 == ((void*)0))
        goto err;

 redo:
    if (!FUNC_17(VAR_9, VAR_15, &VAR_10, &VAR_17->r, VAR_7, VAR_8))
        goto err;

    if (VAR_8 > FUNC_11(VAR_9->q))





        VAR_8 = FUNC_11(VAR_9->q);
    if (FUNC_3(VAR_7, VAR_8, VAR_11) == ((void*)0))
        goto err;
    do {
        if (!FUNC_12(VAR_12, FUNC_10(VAR_9->q) - 1,
                          VAR_2, VAR_1))
            goto err;
    } while (FUNC_5(VAR_12));
    FUNC_13(VAR_12, VAR_0);
    FUNC_13(VAR_13, VAR_0);
    FUNC_13(VAR_14, VAR_0);


    if (!FUNC_8(VAR_14, VAR_12, VAR_9->priv_key, VAR_9->q, VAR_15))
        goto err;
    if (!FUNC_8(VAR_14, VAR_14, VAR_17->r, VAR_9->q, VAR_15))
        goto err;


    if (!FUNC_8(VAR_13, VAR_12, VAR_11, VAR_9->q, VAR_15))
        goto err;


    if (!FUNC_6(VAR_17->s, VAR_14, VAR_13, VAR_9->q))
        goto err;


    if (!FUNC_8(VAR_17->s, VAR_17->s, VAR_10, VAR_9->q, VAR_15))
        goto err;


    if (FUNC_7(VAR_12, VAR_12, VAR_9->q, VAR_15) == ((void*)0))
        goto err;
    if (!FUNC_8(VAR_17->s, VAR_17->s, VAR_12, VAR_9->q, VAR_15))
        goto err;





    if (FUNC_5(VAR_17->r) || FUNC_5(VAR_17->s))
        goto redo;

    VAR_18 = 1;

 err:
    if (VAR_18 == 0) {
        FUNC_16(VAR_3, VAR_16);
        FUNC_14(VAR_17);
        VAR_17 = ((void*)0);
    }
    FUNC_0(VAR_15);
    FUNC_4(VAR_10);
    return VAR_17;
}
