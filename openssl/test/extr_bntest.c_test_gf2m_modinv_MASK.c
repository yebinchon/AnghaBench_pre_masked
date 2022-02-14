
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *,int *,int ) ;
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
    BIGNUM *VAR_4 = ((void*)0), *VAR_5[2] = {((void*)0),((void*)0)}, *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    int VAR_8, VAR_9, VAR_10 = 0;

    if (!FUNC_7(VAR_4 = FUNC_5())
            || !FUNC_7(VAR_5[0] = FUNC_5())
            || !FUNC_7(VAR_5[1] = FUNC_5())
            || !FUNC_7(VAR_6 = FUNC_5())
            || !FUNC_7(VAR_7 = FUNC_5()))
        goto err;

    if (!(FUNC_8(FUNC_0(VAR_2, VAR_5[0]))
            && FUNC_8(FUNC_0(VAR_3, VAR_5[1]))))
        goto err;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        if (!FUNC_8(FUNC_3(VAR_4, 512, 0, 0)))
            goto err;
        for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
            if (!(FUNC_8(FUNC_1(VAR_6, VAR_4, VAR_5[VAR_9], VAR_1))
                    && FUNC_8(FUNC_2(VAR_7, VAR_4, VAR_6, VAR_5[VAR_9], VAR_1))

                    && FUNC_6(VAR_7)))
                goto err;
        }
    }
    VAR_10 = 1;
 err:
    FUNC_4(VAR_4);
    FUNC_4(VAR_5[0]);
    FUNC_4(VAR_5[1]);
    FUNC_4(VAR_6);
    FUNC_4(VAR_7);
    return VAR_10;
}
