
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * q; int * p; int * e; int const* n; int * d; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int const*,int *) ;
 int FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_11 (int *,int *,int *,int) ;
 scalar_t__ FUNC_12 (int *,int *,int,int *) ;
 scalar_t__ FUNC_13 (TYPE_1__ const*,int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int,int) ;

int FUNC_16(const RSA *VAR_4, const BIGNUM *VAR_5,
                                int VAR_6, int VAR_7)
{
    int VAR_8 = 0;
    BN_CTX *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0);

    if (VAR_4->p == ((void*)0)
            || VAR_4->q == ((void*)0)
            || VAR_4->e == ((void*)0)
            || VAR_4->d == ((void*)0)
            || VAR_4->n == ((void*)0)) {
        FUNC_9(VAR_0, VAR_2);
        return 0;
    }

    if (!FUNC_15(VAR_7, VAR_6))
        return 0;


    if (VAR_5 != ((void*)0)) {

        if (FUNC_6(VAR_5, VAR_4->e) != 0) {
            FUNC_9(VAR_0, VAR_2);
            return 0;
        }
    }

    if (!FUNC_14(VAR_4->e)) {

        FUNC_9(VAR_0,
               VAR_3);
        return 0;
    }

    if (VAR_7 != FUNC_8(VAR_4->n)) {
        FUNC_9(VAR_0, VAR_1);
        return 0;
    }

    VAR_9 = FUNC_3();
    if (VAR_9 == ((void*)0))
        return 0;

    FUNC_4(VAR_9);
    VAR_10 = FUNC_2(VAR_9);
    if (VAR_10 == ((void*)0) || !FUNC_7(VAR_10, VAR_4->p, VAR_4->q, VAR_9))
        goto err;

    if (FUNC_6(VAR_4->n, VAR_10) != 0) {
        FUNC_9(VAR_0, VAR_2);
        goto err;
    }


    VAR_8 = FUNC_12(VAR_4->p, VAR_4->e, VAR_7, VAR_9)
          && FUNC_12(VAR_4->q, VAR_4->e, VAR_7, VAR_9)
          && (FUNC_11(VAR_10, VAR_4->p, VAR_4->q, VAR_7) > 0)

          && FUNC_13(VAR_4, VAR_7, VAR_9)

          && FUNC_10(VAR_4, VAR_9);
    if (VAR_8 != 1)
        FUNC_9(VAR_0, VAR_1);

err:
    FUNC_5(VAR_10);
    FUNC_0(VAR_9);
    FUNC_1(VAR_9);
    return VAR_8;
}
