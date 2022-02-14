
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int **,char*) ;

__attribute__((used)) static int FUNC_14(void)
{
    BIGNUM *VAR_0 = ((void*)0);
    int VAR_1 = 0;

    if (!FUNC_12(FUNC_13(&VAR_0, "0"), 1)
            || !FUNC_3(VAR_0, 0)
            || !FUNC_4(VAR_0)
            || !FUNC_8(VAR_0)
            || !FUNC_6(VAR_0)
            || !FUNC_5(VAR_0))
        goto err;
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);

    if (!FUNC_12(FUNC_13(&VAR_0, "256"), 3)
            || !FUNC_3(VAR_0, 256)
            || !FUNC_6(VAR_0)
            || !FUNC_7(VAR_0)
            || !FUNC_10(VAR_0)
            || !FUNC_5(VAR_0))
        goto err;
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);

    if (!FUNC_12(FUNC_13(&VAR_0, "-42"), 3)
            || !FUNC_1(VAR_0, 42)
            || !FUNC_9(VAR_0)
            || !FUNC_8(VAR_0)
            || !FUNC_10(VAR_0)
            || !FUNC_5(VAR_0))
        goto err;
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);

    if (!FUNC_12(FUNC_13(&VAR_0, "1"), 1)
            || !FUNC_3(VAR_0, 1)
            || !FUNC_10(VAR_0)
            || !FUNC_7(VAR_0)
            || !FUNC_6(VAR_0)
            || !FUNC_2(VAR_0)
            || !FUNC_11(VAR_0))
        goto err;
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);

    if (!FUNC_12(FUNC_13(&VAR_0, "-0"), 2)
            || !FUNC_4(VAR_0)
            || !FUNC_6(VAR_0)
            || !FUNC_8(VAR_0)
            || !FUNC_5(VAR_0))
        goto err;
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);

    if (!FUNC_12(FUNC_13(&VAR_0, "42trailing garbage is ignored"), 2)
            || !FUNC_1(VAR_0, 42)
            || !FUNC_6(VAR_0)
            || !FUNC_7(VAR_0)
            || !FUNC_10(VAR_0)
            || !FUNC_5(VAR_0))
        goto err;

    VAR_1 = 1;
 err:
    FUNC_0(VAR_0);
    return VAR_1;
}
