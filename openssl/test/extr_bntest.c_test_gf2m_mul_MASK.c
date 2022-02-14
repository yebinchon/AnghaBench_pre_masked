
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int VAR_0 ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(void)
{
    BIGNUM *VAR_4, *VAR_5[2] = {((void*)0), ((void*)0)}, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12, VAR_13, VAR_14 = 0;

    if (!FUNC_7(VAR_4 = FUNC_5())
            || !FUNC_7(VAR_5[0] = FUNC_5())
            || !FUNC_7(VAR_5[1] = FUNC_5())
            || !FUNC_7(VAR_6 = FUNC_5())
            || !FUNC_7(VAR_7 = FUNC_5())
            || !FUNC_7(VAR_8 = FUNC_5())
            || !FUNC_7(VAR_9 = FUNC_5())
            || !FUNC_7(VAR_10 = FUNC_5())
            || !FUNC_7(VAR_11 = FUNC_5()))
        goto err;

    if (!(FUNC_8(FUNC_1(VAR_2, VAR_5[0]))
            && FUNC_8(FUNC_1(VAR_3, VAR_5[1]))))
        goto err;

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
        if (!(FUNC_8(FUNC_3(VAR_4, 1024, 0, 0))
                && FUNC_8(FUNC_3(VAR_6, 1024, 0, 0))
                && FUNC_8(FUNC_3(VAR_7, 1024, 0, 0))))
            goto err;
        for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
            if (!(FUNC_8(FUNC_2(VAR_8, VAR_4, VAR_6, VAR_5[VAR_13], VAR_1))
                    && FUNC_8(FUNC_0(VAR_9, VAR_4, VAR_7))
                    && FUNC_8(FUNC_2(VAR_10, VAR_9, VAR_6, VAR_5[VAR_13], VAR_1))
                    && FUNC_8(FUNC_2(VAR_11, VAR_7, VAR_6, VAR_5[VAR_13], VAR_1))
                    && FUNC_8(FUNC_0(VAR_9, VAR_8, VAR_10))
                    && FUNC_8(FUNC_0(VAR_9, VAR_9, VAR_11))

                    && FUNC_6(VAR_9)))
                goto err;
        }
    }
    VAR_14 = 1;

 err:
    FUNC_4(VAR_4);
    FUNC_4(VAR_5[0]);
    FUNC_4(VAR_5[1]);
    FUNC_4(VAR_6);
    FUNC_4(VAR_7);
    FUNC_4(VAR_8);
    FUNC_4(VAR_9);
    FUNC_4(VAR_10);
    FUNC_4(VAR_11);
    return VAR_14;
}
