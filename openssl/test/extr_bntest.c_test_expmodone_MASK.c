
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *,int,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *,int *,int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(void)
{
    int VAR_0 = 0, VAR_1;
    BIGNUM *VAR_2 = FUNC_7();
    BIGNUM *VAR_3 = FUNC_7();
    BIGNUM *VAR_4 = FUNC_7();
    BIGNUM *VAR_5 = FUNC_7();

    if (!FUNC_11(VAR_2)
            || !FUNC_11(VAR_3)
            || !FUNC_11(VAR_4)
            || !FUNC_11(VAR_4)
            || !FUNC_11(VAR_5)
            || !FUNC_12(FUNC_9(VAR_3, 1))
            || !FUNC_12(FUNC_9(VAR_4, 0))
            || !FUNC_12(FUNC_9(VAR_5, 1)))
        goto err;


    for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
        if (!FUNC_12(FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0)))
                || !FUNC_10(VAR_2)
                || !FUNC_12(FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0)))
                || !FUNC_10(VAR_2)
                || !FUNC_12(FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0)))
                || !FUNC_10(VAR_2)
                || !FUNC_12(FUNC_4(VAR_2, 1, VAR_4, VAR_5, ((void*)0), ((void*)0)))
                || !FUNC_10(VAR_2)
                || !FUNC_12(FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0)))
                || !FUNC_10(VAR_2)
                || !FUNC_12(FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, ((void*)0)))
                || !FUNC_10(VAR_2))
            goto err;

        if (VAR_1 == 0)
            FUNC_8(VAR_5, 1);
    }

    VAR_0 = 1;
 err:
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    return VAR_0;
}
