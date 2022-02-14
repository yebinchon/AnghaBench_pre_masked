
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int *,int *,int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    int VAR_7 = 0, VAR_8;

    if (!FUNC_8(VAR_2 = FUNC_4())
            || !FUNC_8(VAR_3 = FUNC_4())
            || !FUNC_8(VAR_4 = FUNC_4())
            || !FUNC_8(VAR_5 = FUNC_4())
            || !FUNC_8(VAR_6 = FUNC_4()))
        goto err;

    if (!(FUNC_9(FUNC_0(VAR_2, 1024, 0, 0))))
        goto err;
    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        if (!(FUNC_9(FUNC_0(VAR_3, 450 + VAR_8 * 10, 0, 0))))
            goto err;
        FUNC_5(VAR_2, FUNC_10());
        FUNC_5(VAR_3, FUNC_10());
        if (!(FUNC_9(FUNC_3(VAR_4, VAR_2, VAR_3, VAR_1))
                && FUNC_9(FUNC_1(VAR_5, VAR_6, VAR_2, VAR_3, VAR_1))
                && FUNC_9(FUNC_6(VAR_6, VAR_6, VAR_4))
                && FUNC_7(VAR_6)))
            goto err;
    }
    VAR_7 = 1;
 err:
    FUNC_2(VAR_2);
    FUNC_2(VAR_3);
    FUNC_2(VAR_4);
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    return VAR_7;
}
