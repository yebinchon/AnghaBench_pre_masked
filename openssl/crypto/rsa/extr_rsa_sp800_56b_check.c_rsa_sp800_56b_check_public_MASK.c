
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * n; int * e; } ;
typedef TYPE_1__ RSA ;
typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ,int *,int *,int,int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int) ;

int FUNC_13(const RSA *VAR_5)
{
    int VAR_6 = 0, VAR_7, VAR_8;
    BN_CTX *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0);

    if (VAR_5->n == ((void*)0) || VAR_5->e == ((void*)0))
        return 0;





    VAR_7 = FUNC_7(VAR_5->n);
    if (!FUNC_12(VAR_7, -1)) {
        FUNC_8(VAR_1, VAR_2);
        return 0;
    }
    if (!FUNC_4(VAR_5->n)) {
        FUNC_8(VAR_1, VAR_3);
        return 0;
    }


    if (!FUNC_11(VAR_5->e)) {
        FUNC_8(VAR_1,
               VAR_4);
        return 0;
    }

    VAR_9 = FUNC_1();
    VAR_10 = FUNC_6();
    if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
        goto err;





    if (!FUNC_3(VAR_10, VAR_5->n, FUNC_9(), VAR_9) || !FUNC_5(VAR_10)) {
        FUNC_8(VAR_1, VAR_3);
        goto err;
    }

    VAR_6 = FUNC_10(VAR_5->n, 0, VAR_9, ((void*)0), 1, &VAR_8);
    if (VAR_6 != 1 || VAR_8 != VAR_0) {
        FUNC_8(VAR_1, VAR_3);
        VAR_6 = 0;
        goto err;
    }

    VAR_6 = 1;
err:
    FUNC_2(VAR_10);
    FUNC_0(VAR_9);
    return VAR_6;
}
