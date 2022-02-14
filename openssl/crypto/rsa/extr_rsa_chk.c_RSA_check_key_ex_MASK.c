
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ version; int * d; int prime_infos; int * iqmp; int * p; int * q; int * dmq1; int * dmp1; int * e; int * n; } ;
struct TYPE_9__ {int * t; int * r; int * pp; int * d; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;
typedef TYPE_2__ RSA ;
typedef int BN_GENCB ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (TYPE_2__ const*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (TYPE_2__ const*,int *,int,int ) ;
 scalar_t__ FUNC_21 (TYPE_2__ const*) ;
 scalar_t__ FUNC_22 (TYPE_2__ const*) ;
 int FUNC_23 (int ) ;
 TYPE_1__* FUNC_24 (int ,int) ;

int FUNC_25(const RSA *VAR_17, BN_GENCB *VAR_18)
{





    BIGNUM *VAR_19, *VAR_20, *VAR_21, *VAR_22, *VAR_23;
    BN_CTX *VAR_24;
    int VAR_25 = 1, VAR_26 = 0, VAR_27;
    RSA_PRIME_INFO *VAR_28;

    if (VAR_17->p == ((void*)0) || VAR_17->q == ((void*)0) || VAR_17->n == ((void*)0)
            || VAR_17->e == ((void*)0) || VAR_17->d == ((void*)0)) {
        FUNC_18(VAR_2, VAR_16);
        return 0;
    }


    if (VAR_17->version == VAR_1) {
        VAR_26 = FUNC_23(VAR_17->prime_infos);
        if (VAR_26 <= 0
                || (VAR_26 + 2) > FUNC_19(FUNC_14(VAR_17->n))) {
            FUNC_18(VAR_2, VAR_7);
            return 0;
        }
    }

    VAR_19 = FUNC_13();
    VAR_20 = FUNC_13();
    VAR_21 = FUNC_13();
    VAR_22 = FUNC_13();
    VAR_23 = FUNC_13();
    VAR_24 = FUNC_1();
    if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0) || VAR_21 == ((void*)0) || VAR_22 == ((void*)0)
            || VAR_23 == ((void*)0) || VAR_24 == ((void*)0)) {
        VAR_25 = -1;
        FUNC_18(VAR_2, VAR_0);
        goto err;
    }

    if (FUNC_8(VAR_17->e)) {
        VAR_25 = 0;
        FUNC_18(VAR_2, VAR_3);
    }
    if (!FUNC_7(VAR_17->e)) {
        VAR_25 = 0;
        FUNC_18(VAR_2, VAR_3);
    }


    if (FUNC_2(VAR_17->p, ((void*)0), VAR_18) != 1) {
        VAR_25 = 0;
        FUNC_18(VAR_2, VAR_14);
    }


    if (FUNC_2(VAR_17->q, ((void*)0), VAR_18) != 1) {
        VAR_25 = 0;
        FUNC_18(VAR_2, VAR_15);
    }


    for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
        VAR_28 = FUNC_24(VAR_17->prime_infos, VAR_27);
        if (FUNC_2(VAR_28->r, ((void*)0), VAR_18) != 1) {
            VAR_25 = 0;
            FUNC_18(VAR_2, VAR_11);
        }
    }


    if (!FUNC_12(VAR_19, VAR_17->p, VAR_17->q, VAR_24)) {
        VAR_25 = -1;
        goto err;
    }
    for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
        VAR_28 = FUNC_24(VAR_17->prime_infos, VAR_27);
        if (!FUNC_12(VAR_19, VAR_19, VAR_28->r, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
    }
    if (FUNC_3(VAR_19, VAR_17->n) != 0) {
        VAR_25 = 0;
        if (VAR_26)
            FUNC_18(VAR_2,
                   VAR_12);
        else
            FUNC_18(VAR_2, VAR_13);
    }


    if (!FUNC_15(VAR_19, VAR_17->p, FUNC_16())) {
        VAR_25 = -1;
        goto err;
    }
    if (!FUNC_15(VAR_20, VAR_17->q, FUNC_16())) {
        VAR_25 = -1;
        goto err;
    }


    if (!FUNC_12(VAR_22, VAR_19, VAR_20, VAR_24)) {
        VAR_25 = -1;
        goto err;
    }
    if (!FUNC_6(VAR_23, VAR_19, VAR_20, VAR_24)) {
        VAR_25 = -1;
        goto err;
    }
    for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
        VAR_28 = FUNC_24(VAR_17->prime_infos, VAR_27);
        if (!FUNC_15(VAR_21, VAR_28->r, FUNC_16())) {
            VAR_25 = -1;
            goto err;
        }
        if (!FUNC_12(VAR_22, VAR_22, VAR_21, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
        if (!FUNC_6(VAR_23, VAR_23, VAR_21, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
    }
    if (!FUNC_4(VAR_21, ((void*)0), VAR_22, VAR_23, VAR_24)) {
        VAR_25 = -1;
        goto err;
    }
    if (!FUNC_11(VAR_19, VAR_17->d, VAR_17->e, VAR_21, VAR_24)) {
        VAR_25 = -1;
        goto err;
    }

    if (!FUNC_8(VAR_19)) {
        VAR_25 = 0;
        FUNC_18(VAR_2, VAR_6);
    }

    if (VAR_17->dmp1 != ((void*)0) && VAR_17->dmq1 != ((void*)0) && VAR_17->iqmp != ((void*)0)) {

        if (!FUNC_15(VAR_19, VAR_17->p, FUNC_16())) {
            VAR_25 = -1;
            goto err;
        }
        if (!FUNC_9(VAR_20, VAR_17->d, VAR_19, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
        if (FUNC_3(VAR_20, VAR_17->dmp1) != 0) {
            VAR_25 = 0;
            FUNC_18(VAR_2, VAR_4);
        }


        if (!FUNC_15(VAR_19, VAR_17->q, FUNC_16())) {
            VAR_25 = -1;
            goto err;
        }
        if (!FUNC_9(VAR_20, VAR_17->d, VAR_19, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
        if (FUNC_3(VAR_20, VAR_17->dmq1) != 0) {
            VAR_25 = 0;
            FUNC_18(VAR_2, VAR_5);
        }


        if (!FUNC_10(VAR_19, VAR_17->q, VAR_17->p, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
        if (FUNC_3(VAR_19, VAR_17->iqmp) != 0) {
            VAR_25 = 0;
            FUNC_18(VAR_2, VAR_8);
        }
    }

    for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++) {
        VAR_28 = FUNC_24(VAR_17->prime_infos, VAR_27);

        if (!FUNC_15(VAR_19, VAR_28->r, FUNC_16())) {
            VAR_25 = -1;
            goto err;
        }
        if (!FUNC_9(VAR_20, VAR_17->d, VAR_19, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
        if (FUNC_3(VAR_20, VAR_28->d) != 0) {
            VAR_25 = 0;
            FUNC_18(VAR_2, VAR_10);
        }

        if (!FUNC_10(VAR_19, VAR_28->pp, VAR_28->r, VAR_24)) {
            VAR_25 = -1;
            goto err;
        }
        if (FUNC_3(VAR_19, VAR_28->t) != 0) {
            VAR_25 = 0;
            FUNC_18(VAR_2, VAR_9);
        }
    }

 err:
    FUNC_5(VAR_19);
    FUNC_5(VAR_20);
    FUNC_5(VAR_21);
    FUNC_5(VAR_22);
    FUNC_5(VAR_23);
    FUNC_0(VAR_24);
    return VAR_25;

}
