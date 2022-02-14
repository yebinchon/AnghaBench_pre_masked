
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (int,int *,int *,int) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,int *,int *) ;

__attribute__((used)) static int FUNC_13(void)
{
    BIGNUM *VAR_2 = ((void*)0), *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    int VAR_6, VAR_7, VAR_8 = 0;

    if (!FUNC_10(VAR_2 = FUNC_5())
            || !FUNC_10(VAR_3 = FUNC_5())
            || !FUNC_10(VAR_4 = FUNC_5())
            || !FUNC_10(VAR_5 = FUNC_5()))
        goto err;

    if (!(FUNC_11(FUNC_0(VAR_2, 1024, 1, 0))
            && FUNC_11(FUNC_0(VAR_3, 1024, 1, 0))
            && FUNC_10(FUNC_2(VAR_4, VAR_2))
            && FUNC_10(FUNC_2(VAR_5, VAR_3))))
        goto err;
    VAR_6 = FUNC_6(VAR_2) / VAR_0;


    FUNC_8(VAR_2, VAR_3);
    if (!FUNC_12("swap", VAR_2, VAR_5)
            || !FUNC_12("swap", VAR_3, VAR_4))
        goto err;


    VAR_7 = 1;
    FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6);
    if (!FUNC_12("cswap true", VAR_2, VAR_4)
            || !FUNC_12("cswap true", VAR_3, VAR_5))
        goto err;


    VAR_7 = 0;
    FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6);
    if (!FUNC_12("cswap false", VAR_2, VAR_4)
            || !FUNC_12("cswap false", VAR_3, VAR_5))
        goto err;


    FUNC_7(VAR_2, VAR_1);

    FUNC_8(VAR_2, VAR_3);
    if (!FUNC_12("swap, flags", VAR_2, VAR_5)
            || !FUNC_12("swap, flags", VAR_3, VAR_4)
            || !FUNC_11(FUNC_4(VAR_3, VAR_1))
            || !FUNC_9(FUNC_4(VAR_2, VAR_1)))
        goto err;

    VAR_7 = 1;
    FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6);
    if (!FUNC_12("cswap true, flags", VAR_2, VAR_4)
            || !FUNC_12("cswap true, flags", VAR_3, VAR_5)
            || !FUNC_11(FUNC_4(VAR_2, VAR_1))
            || !FUNC_9(FUNC_4(VAR_3, VAR_1)))
        goto err;

    VAR_7 = 0;
    FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6);
    if (!FUNC_12("cswap false, flags", VAR_2, VAR_4)
            || !FUNC_12("cswap false, flags", VAR_3, VAR_5)
            || !FUNC_11(FUNC_4(VAR_2, VAR_1))
            || !FUNC_9(FUNC_4(VAR_3, VAR_1)))
        goto err;

    VAR_8 = 1;
 err:
    FUNC_3(VAR_2);
    FUNC_3(VAR_3);
    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    return VAR_8;
}
