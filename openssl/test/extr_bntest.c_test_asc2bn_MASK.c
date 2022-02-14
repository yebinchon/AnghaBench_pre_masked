
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int **,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(void)
{
    BIGNUM *VAR_0 = ((void*)0);
    int VAR_1 = 0;

    if (!FUNC_8(VAR_0 = FUNC_2()))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "0"))
            || !FUNC_5(VAR_0)
            || !FUNC_6(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "256"))
            || !FUNC_4(VAR_0, 256)
            || !FUNC_6(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "-42"))
            || !FUNC_3(VAR_0, 42)
            || !FUNC_7(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "0x1234"))
            || !FUNC_4(VAR_0, 0x1234)
            || !FUNC_6(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "0X1234"))
            || !FUNC_4(VAR_0, 0x1234)
            || !FUNC_6(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "-0xabcd"))
            || !FUNC_3(VAR_0, 0xabcd)
            || !FUNC_7(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "-0"))
            || !FUNC_5(VAR_0)
            || !FUNC_6(VAR_0))
        goto err;

    if (!FUNC_9(FUNC_0(&VAR_0, "123trailing garbage is ignored"))
            || !FUNC_4(VAR_0, 123)
            || !FUNC_6(VAR_0))
        goto err;

    VAR_1 = 1;
 err:
    FUNC_1(VAR_0);
    return VAR_1;
}
