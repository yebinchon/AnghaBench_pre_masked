
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;

__attribute__((used)) static int FUNC_14(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
    int VAR_5, VAR_6 = 0;

    if (!FUNC_11(VAR_2 = FUNC_5())
            || !FUNC_11(VAR_3 = FUNC_5())
            || !FUNC_11(VAR_4 = FUNC_5()))
        goto err;

    for (VAR_5 = 0; VAR_5 < VAR_0 + VAR_1; VAR_5++) {
        if (VAR_5 < VAR_1) {
            if (!(FUNC_12(FUNC_2(VAR_2, 512, 0, 0)))
                    && FUNC_11(FUNC_3(VAR_3, VAR_2))
                    && FUNC_10(FUNC_6(VAR_2, VAR_5), 0)
                    && FUNC_12(FUNC_1(VAR_3, VAR_5)))
                goto err;
        } else {
            if (!FUNC_12(FUNC_2(VAR_3, 400 + VAR_5 - VAR_1, 0, 0)))
                goto err;
            FUNC_7(VAR_2, FUNC_13());
            FUNC_7(VAR_3, FUNC_13());
        }
        if (!(FUNC_12(FUNC_8(VAR_4, VAR_2, VAR_3))
                && FUNC_12(FUNC_0(VAR_4, VAR_4, VAR_3))
                && FUNC_12(FUNC_8(VAR_4, VAR_4, VAR_2))
                && FUNC_9(VAR_4)))
            goto err;
    }
    VAR_6 = 1;
 err:
    FUNC_4(VAR_2);
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
    return VAR_6;
}
