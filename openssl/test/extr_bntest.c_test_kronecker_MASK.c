
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int *,int *,int ) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int *) ;
 int VAR_0 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;
 int VAR_1 ;
 int FUNC_20 () ;

__attribute__((used)) static int FUNC_21(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6, VAR_7, VAR_8, VAR_9 = 0;

    if (!FUNC_18(VAR_2 = FUNC_10())
            || !FUNC_18(VAR_3 = FUNC_10())
            || !FUNC_18(VAR_4 = FUNC_10())
            || !FUNC_18(VAR_5 = FUNC_10()))
        goto err;
    if (!FUNC_19(FUNC_4(VAR_3, 512, 0, ((void*)0), ((void*)0), ((void*)0))))
        goto err;
    FUNC_12(VAR_3, FUNC_20());

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (!FUNC_19(FUNC_1(VAR_2, 512, 0, 0)))
            goto err;
        FUNC_12(VAR_2, FUNC_20());


        if (!FUNC_19(FUNC_2(VAR_5, VAR_3)))
            goto err;
        FUNC_12(VAR_5, 0);
        if (!FUNC_19(FUNC_13(VAR_5, 1)))
            goto err;
        if (!FUNC_19(FUNC_11(VAR_5, VAR_5)))
            goto err;

        FUNC_12(VAR_3, 0);

        if (!FUNC_19(FUNC_9(VAR_4, VAR_2, VAR_5, VAR_3, VAR_1)))
            goto err;
        FUNC_12(VAR_3, 1);

        if (FUNC_6(VAR_4, 1))
            VAR_7 = 1;
        else if (FUNC_7(VAR_4))
            VAR_7 = 0;
        else {
            if (!FUNC_19(FUNC_0(VAR_4, 1)))
                goto err;
            if (!FUNC_16(FUNC_14(VAR_4, VAR_3), 0)) {
                FUNC_15("Legendre symbol computation failed");
                goto err;
            }
            VAR_7 = -1;
        }

        if (!FUNC_17(VAR_8 = FUNC_8(VAR_2, VAR_3, VAR_1), -1))
            goto err;

        if (FUNC_5(VAR_2) && FUNC_5(VAR_3))
            VAR_8 = -VAR_8;

        if (!FUNC_16(VAR_7, VAR_8))
            goto err;
    }

    VAR_9 = 1;
 err:
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    return VAR_9;
}
