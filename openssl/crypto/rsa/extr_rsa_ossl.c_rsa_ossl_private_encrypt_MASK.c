
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ version; int n; int _method_mod_n; TYPE_1__* meth; int * d; int * iqmp; int * dmq1; int * dmp1; int * q; int * p; int lock; } ;
struct TYPE_6__ {int (* bn_mod_exp ) (int *,int *,int *,int ,int *,int ) ;int (* rsa_mod_exp ) (int *,int *,TYPE_2__*,int *) ;} ;
typedef TYPE_2__ RSA ;
typedef int BN_CTX ;
typedef int BN_BLINDING ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int ,int ,int *) ;
 int * FUNC_6 (unsigned char*,int,int *) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int *) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_15 (unsigned char*,int) ;
 unsigned char* FUNC_16 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int FUNC_17 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_18 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_19 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int *,int *,int *,int *) ;
 int FUNC_22 (int *,int *,int *,int *) ;
 int * FUNC_23 (TYPE_2__*,int*,int *) ;
 int FUNC_24 (int *,int *,TYPE_2__*,int *) ;
 int FUNC_25 (int *,int *,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_26(int VAR_11, const unsigned char *VAR_12,
                                   unsigned char *VAR_13, RSA *VAR_14, int VAR_15)
{
    BIGNUM *VAR_16, *VAR_17, *VAR_18;
    int VAR_19, VAR_20 = 0, VAR_21 = -1;
    unsigned char *VAR_22 = ((void*)0);
    BN_CTX *VAR_23 = ((void*)0);
    int VAR_24 = 0;





    BIGNUM *VAR_25 = ((void*)0);
    BN_BLINDING *VAR_26 = ((void*)0);

    if ((VAR_23 = FUNC_3()) == ((void*)0))
        goto err;
    FUNC_4(VAR_23);
    VAR_16 = FUNC_2(VAR_23);
    VAR_17 = FUNC_2(VAR_23);
    VAR_20 = FUNC_11(VAR_14->n);
    VAR_22 = FUNC_16(VAR_20);
    if (VAR_17 == ((void*)0) || VAR_22 == ((void*)0)) {
        FUNC_20(VAR_7, VAR_2);
        goto err;
    }

    switch (VAR_15) {
    case 130:
        VAR_19 = FUNC_17(VAR_22, VAR_20, VAR_12, VAR_11);
        break;
    case 128:
        VAR_19 = FUNC_18(VAR_22, VAR_20, VAR_12, VAR_11);
        break;
    case 131:
        VAR_19 = FUNC_19(VAR_22, VAR_20, VAR_12, VAR_11);
        break;
    case 129:
    default:
        FUNC_20(VAR_7, VAR_10);
        goto err;
    }
    if (VAR_19 <= 0)
        goto err;

    if (FUNC_6(VAR_22, VAR_20, VAR_16) == ((void*)0))
        goto err;

    if (FUNC_13(VAR_16, VAR_14->n) >= 0) {

        FUNC_20(VAR_7,
               VAR_8);
        goto err;
    }

    if (VAR_14->flags & VAR_4)
        if (!FUNC_5(&VAR_14->_method_mod_n, VAR_14->lock,
                                    VAR_14->n, VAR_23))
            goto err;

    if (!(VAR_14->flags & VAR_6)) {
        VAR_26 = FUNC_23(VAR_14, &VAR_24, VAR_23);
        if (VAR_26 == ((void*)0)) {
            FUNC_20(VAR_7, VAR_1);
            goto err;
        }
    }

    if (VAR_26 != ((void*)0)) {
        if (!VAR_24 && ((VAR_25 = FUNC_2(VAR_23)) == ((void*)0))) {
            FUNC_20(VAR_7, VAR_2);
            goto err;
        }
        if (!FUNC_21(VAR_26, VAR_16, VAR_25, VAR_23))
            goto err;
    }

    if ((VAR_14->flags & VAR_5) ||
        (VAR_14->version == VAR_3) ||
        ((VAR_14->p != ((void*)0)) &&
         (VAR_14->q != ((void*)0)) &&
         (VAR_14->dmp1 != ((void*)0)) && (VAR_14->dmq1 != ((void*)0)) && (VAR_14->iqmp != ((void*)0)))) {
        if (!VAR_14->meth->rsa_mod_exp(VAR_17, VAR_16, VAR_14, VAR_23))
            goto err;
    } else {
        BIGNUM *VAR_27 = FUNC_10();
        if (VAR_27 == ((void*)0)) {
            FUNC_20(VAR_7, VAR_2);
            goto err;
        }
        if (VAR_14->d == ((void*)0)) {
            FUNC_20(VAR_7, VAR_9);
            FUNC_9(VAR_27);
            goto err;
        }
        FUNC_14(VAR_27, VAR_14->d, VAR_0);

        if (!VAR_14->meth->bn_mod_exp(VAR_17, VAR_16, VAR_27, VAR_14->n, VAR_23,
                                   VAR_14->_method_mod_n)) {
            FUNC_9(VAR_27);
            goto err;
        }

        FUNC_9(VAR_27);
    }

    if (VAR_26)
        if (!FUNC_22(VAR_26, VAR_17, VAR_25, VAR_23))
            goto err;

    if (VAR_15 == 128) {
        if (!FUNC_12(VAR_16, VAR_14->n, VAR_17))
            goto err;
        if (FUNC_8(VAR_17, VAR_16) > 0)
            VAR_18 = VAR_16;
        else
            VAR_18 = VAR_17;
    } else {
        VAR_18 = VAR_17;
    }





    VAR_21 = FUNC_7(VAR_18, VAR_13, VAR_20);
 err:
    FUNC_0(VAR_23);
    FUNC_1(VAR_23);
    FUNC_15(VAR_22, VAR_20);
    return VAR_21;
}
