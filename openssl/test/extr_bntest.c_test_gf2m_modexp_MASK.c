
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int VAR_0 ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_11(void)
{
    BIGNUM *VAR_4 = ((void*)0), *VAR_5[2] = {((void*)0),((void*)0)}, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10, VAR_11, VAR_12 = 0;

    if (!FUNC_9(VAR_4 = FUNC_7())
            || !FUNC_9(VAR_5[0] = FUNC_7())
            || !FUNC_9(VAR_5[1] = FUNC_7())
            || !FUNC_9(VAR_6 = FUNC_7())
            || !FUNC_9(VAR_7 = FUNC_7())
            || !FUNC_9(VAR_8 = FUNC_7())
            || !FUNC_9(VAR_9 = FUNC_7()))
        goto err;

    if (!(FUNC_10(FUNC_1(VAR_2, VAR_5[0]))
            && FUNC_10(FUNC_1(VAR_3, VAR_5[1]))))
        goto err;

    for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        if (!(FUNC_10(FUNC_5(VAR_4, 512, 0, 0))
                && FUNC_10(FUNC_5(VAR_6, 512, 0, 0))
                && FUNC_10(FUNC_5(VAR_7, 512, 0, 0))))
            goto err;
        for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
            if (!(FUNC_10(FUNC_2(VAR_8, VAR_4, VAR_6, VAR_5[VAR_11], VAR_1))
                    && FUNC_10(FUNC_2(VAR_9, VAR_4, VAR_7, VAR_5[VAR_11], VAR_1))
                    && FUNC_10(FUNC_3(VAR_8, VAR_8, VAR_9, VAR_5[VAR_11], VAR_1))
                    && FUNC_10(FUNC_4(VAR_9, VAR_6, VAR_7))
                    && FUNC_10(FUNC_2(VAR_9, VAR_4, VAR_9, VAR_5[VAR_11], VAR_1))
                    && FUNC_10(FUNC_0(VAR_9, VAR_8, VAR_9))

                    && FUNC_8(VAR_9)))
                goto err;
        }
    }
    VAR_12 = 1;
 err:
    FUNC_6(VAR_4);
    FUNC_6(VAR_5[0]);
    FUNC_6(VAR_5[1]);
    FUNC_6(VAR_6);
    FUNC_6(VAR_7);
    FUNC_6(VAR_8);
    FUNC_6(VAR_9);
    return VAR_12;
}
