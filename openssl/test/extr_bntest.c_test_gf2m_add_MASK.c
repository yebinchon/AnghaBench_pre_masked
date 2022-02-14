
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 () ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(void)
{
    BIGNUM *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
    int VAR_4, VAR_5 = 0;

    if (!FUNC_10(VAR_1 = FUNC_4())
            || !FUNC_10(VAR_2 = FUNC_4())
            || !FUNC_10(VAR_3 = FUNC_4()))
        goto err;

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (!(FUNC_11(FUNC_5(VAR_1, 512, 0, 0))
                && FUNC_10(FUNC_1(VAR_2, FUNC_7()))))
            goto err;
        FUNC_6(VAR_1, FUNC_12());
        FUNC_6(VAR_2, FUNC_12());
        if (!(FUNC_11(FUNC_0(VAR_3, VAR_1, VAR_2))

                && FUNC_9((FUNC_3(VAR_1) && FUNC_3(VAR_3))
                        || (!FUNC_3(VAR_1) && !FUNC_3(VAR_3)))))
            goto err;
        if (!(FUNC_11(FUNC_0(VAR_3, VAR_3, VAR_3))

                && FUNC_8(VAR_3)))
            goto err;
    }
    VAR_5 = 1;
 err:
    FUNC_2(VAR_1);
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    return VAR_5;
}
