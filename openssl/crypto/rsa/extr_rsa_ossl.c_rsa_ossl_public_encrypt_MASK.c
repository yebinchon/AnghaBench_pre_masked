
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; int _method_mod_n; int * n; int * e; TYPE_1__* meth; int lock; } ;
struct TYPE_4__ {int (* bn_mod_exp ) (int *,int *,int *,int *,int *,int ) ;} ;
typedef TYPE_2__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *,int *) ;
 int * FUNC_6 (unsigned char*,int,int *) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (unsigned char*,int) ;
 unsigned char* FUNC_12 (int) ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_13 (unsigned char*,int,unsigned char const*,int,int *,int ) ;
 int FUNC_14 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_15 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_16 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int *,int *,int *,int *,int *,int ) ;

__attribute__((used)) static int FUNC_19(int VAR_10, const unsigned char *VAR_11,
                                  unsigned char *VAR_12, RSA *VAR_13, int VAR_14)
{
    BIGNUM *VAR_15, *VAR_16;
    int VAR_17, VAR_18 = 0, VAR_19 = -1;
    unsigned char *VAR_20 = ((void*)0);
    BN_CTX *VAR_21 = ((void*)0);

    if (FUNC_8(VAR_13->n) > VAR_1) {
        FUNC_17(VAR_5, VAR_8);
        return -1;
    }

    if (FUNC_10(VAR_13->n, VAR_13->e) <= 0) {
        FUNC_17(VAR_5, VAR_6);
        return -1;
    }


    if (FUNC_8(VAR_13->n) > VAR_3) {
        if (FUNC_8(VAR_13->e) > VAR_2) {
            FUNC_17(VAR_5, VAR_6);
            return -1;
        }
    }

    if ((VAR_21 = FUNC_3()) == ((void*)0))
        goto err;
    FUNC_4(VAR_21);
    VAR_15 = FUNC_2(VAR_21);
    VAR_16 = FUNC_2(VAR_21);
    VAR_18 = FUNC_9(VAR_13->n);
    VAR_20 = FUNC_12(VAR_18);
    if (VAR_16 == ((void*)0) || VAR_20 == ((void*)0)) {
        FUNC_17(VAR_5, VAR_0);
        goto err;
    }

    switch (VAR_14) {
    case 129:
        VAR_17 = FUNC_14(VAR_20, VAR_18, VAR_11, VAR_10);
        break;
    case 130:
        VAR_17 = FUNC_13(VAR_20, VAR_18, VAR_11, VAR_10, ((void*)0), 0);
        break;
    case 128:
        VAR_17 = FUNC_15(VAR_20, VAR_18, VAR_11, VAR_10);
        break;
    case 131:
        VAR_17 = FUNC_16(VAR_20, VAR_18, VAR_11, VAR_10);
        break;
    default:
        FUNC_17(VAR_5, VAR_9);
        goto err;
    }
    if (VAR_17 <= 0)
        goto err;

    if (FUNC_6(VAR_20, VAR_18, VAR_15) == ((void*)0))
        goto err;

    if (FUNC_10(VAR_15, VAR_13->n) >= 0) {

        FUNC_17(VAR_5,
               VAR_7);
        goto err;
    }

    if (VAR_13->flags & VAR_4)
        if (!FUNC_5(&VAR_13->_method_mod_n, VAR_13->lock,
                                    VAR_13->n, VAR_21))
            goto err;

    if (!VAR_13->meth->bn_mod_exp(VAR_16, VAR_15, VAR_13->e, VAR_13->n, VAR_21,
                               VAR_13->_method_mod_n))
        goto err;





    VAR_19 = FUNC_7(VAR_16, VAR_12, VAR_18);
 err:
    FUNC_0(VAR_21);
    FUNC_1(VAR_21);
    FUNC_11(VAR_20, VAR_18);
    return VAR_19;
}
