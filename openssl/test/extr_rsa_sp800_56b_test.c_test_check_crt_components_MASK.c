
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {struct TYPE_21__* iqmp; struct TYPE_21__* dmq1; struct TYPE_21__* dmp1; struct TYPE_21__* n; } ;
typedef TYPE_1__ RSA ;
typedef TYPE_1__ BN_CTX ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int const) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int const) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(void)
{
    const int VAR_0 = 15;
    const int VAR_1 = 17;
    const int VAR_2 = 5;
    const int VAR_3 = VAR_0*VAR_1;
    const int VAR_4 = 3;
    const int VAR_5 = 13;
    const int VAR_6 = 8;

    int VAR_7 = 0;
    RSA *VAR_8 = ((void*)0);
    BN_CTX *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    VAR_7 = FUNC_10(VAR_8 = FUNC_6())
          && FUNC_10(VAR_9 = FUNC_1())
          && FUNC_10(VAR_10 = FUNC_3())
          && FUNC_10(VAR_11 = FUNC_3())
          && FUNC_10(VAR_12 = FUNC_3())
          && FUNC_11(FUNC_4(VAR_10, VAR_0))
          && FUNC_11(FUNC_4(VAR_11, VAR_1))
          && FUNC_11(FUNC_4(VAR_12, VAR_2))
          && FUNC_11(FUNC_7(VAR_8, VAR_10, VAR_11));
    if (!VAR_7) {
        FUNC_2(VAR_10);
        FUNC_2(VAR_11);
        goto end;
    }
    VAR_7 = FUNC_11(FUNC_13(VAR_8, 8, VAR_12, VAR_9))
          && FUNC_8(VAR_8->n, VAR_3)
          && FUNC_8(VAR_8->dmp1, VAR_4)
          && FUNC_8(VAR_8->dmq1, VAR_5)
          && FUNC_8(VAR_8->iqmp, VAR_6)
          && FUNC_11(FUNC_12(VAR_8, VAR_9))

          && FUNC_11(FUNC_4(VAR_8->dmp1, 1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->dmp1, VAR_0-1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->dmp1, VAR_4))

          && FUNC_11(FUNC_4(VAR_8->dmq1, 1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->dmq1, VAR_1-1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->dmq1, VAR_5))

          && FUNC_11(FUNC_4(VAR_8->iqmp, 1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->iqmp, VAR_0))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->iqmp, VAR_6))

          && FUNC_11(FUNC_4(VAR_8->dmp1, VAR_4+1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->dmp1, VAR_4))

          && FUNC_11(FUNC_4(VAR_8->dmq1, VAR_5-1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->dmq1, VAR_5))

          && FUNC_11(FUNC_4(VAR_8->iqmp, VAR_6+1))
          && FUNC_9(FUNC_12(VAR_8, VAR_9))
          && FUNC_11(FUNC_4(VAR_8->iqmp, VAR_6))

          && FUNC_11(FUNC_12(VAR_8, VAR_9));
end:
    FUNC_2(VAR_12);
    FUNC_5(VAR_8);
    FUNC_0(VAR_9);
    return VAR_7;
}
