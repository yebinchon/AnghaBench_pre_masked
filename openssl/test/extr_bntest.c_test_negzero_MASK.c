
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_13(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8, VAR_9 = 0;

    if (!FUNC_11(VAR_2 = FUNC_4())
            || !FUNC_11(VAR_3 = FUNC_4())
            || !FUNC_11(VAR_4 = FUNC_4())
            || !FUNC_11(VAR_5 = FUNC_4()))
        goto err;


    if (!FUNC_12(FUNC_7(VAR_2, 1)))
        goto err;
    FUNC_6(VAR_2, 1);
    FUNC_8(VAR_3);
    if (!FUNC_12(FUNC_3(VAR_4, VAR_2, VAR_3, VAR_1)))
        goto err;
    if (!FUNC_9(VAR_4)
            || !FUNC_10(VAR_4))
        goto err;

    for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
        if (!FUNC_11(VAR_6 = FUNC_4())
                || !FUNC_11(VAR_7 = FUNC_4()))
            goto err;
        if (VAR_8) {
            FUNC_5(VAR_6, VAR_0);
            FUNC_5(VAR_7, VAR_0);
        }

        if (!FUNC_12(FUNC_7(VAR_6, 1))
                || !FUNC_12(FUNC_7(VAR_7, 2)))
            goto err;
        FUNC_6(VAR_6, 1);
        if (!FUNC_12(FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7, VAR_1))
                || !FUNC_9(VAR_2)
                || !FUNC_10(VAR_2))
            goto err;


        if (!FUNC_12(FUNC_7(VAR_7, 1))
                || !FUNC_12(FUNC_0(VAR_2, VAR_3, VAR_6, VAR_7, VAR_1))
                || !FUNC_9(VAR_3)
                || !FUNC_10(VAR_3))
            goto err;
        FUNC_1(VAR_6);
        FUNC_1(VAR_7);
        VAR_6 = VAR_7 = ((void*)0);
    }


    FUNC_8(VAR_2);
    FUNC_6(VAR_2, 1);
    if (FUNC_2(VAR_2))
        goto err;
    VAR_9 = 1;

 err:
    FUNC_1(VAR_2);
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    FUNC_1(VAR_5);
    FUNC_1(VAR_6);
    FUNC_1(VAR_7);
    return VAR_9;
}
