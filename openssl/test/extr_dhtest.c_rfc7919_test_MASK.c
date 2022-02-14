
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char DH ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,int*) ;
 int FUNC_1 (unsigned char*,int const*,unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int const**,int *) ;
 unsigned char* FUNC_5 (int ) ;
 int FUNC_6 (unsigned char*) ;
 int VAR_4 ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned char*,int,unsigned char*,int) ;
 int FUNC_11 (unsigned char*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(void)
{
    DH *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    const BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    unsigned char *VAR_9 = ((void*)0);
    unsigned char *VAR_10 = ((void*)0);
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16 = 0;

    if (!FUNC_11(VAR_5 = FUNC_5(VAR_4)))
         goto err;

    if (!FUNC_0(VAR_5, &VAR_11))
        goto err;
    if (!FUNC_9(VAR_11 & VAR_0)
            || !FUNC_9(VAR_11 & VAR_1)
            || !FUNC_9(VAR_11 & VAR_3)
            || !FUNC_9(VAR_11 & VAR_2)
            || !FUNC_9(VAR_11))
        goto err;

    if (!FUNC_3(VAR_5))
        goto err;
    FUNC_4(VAR_5, &VAR_7, ((void*)0));


    if (!FUNC_11(VAR_6 = FUNC_5(VAR_4)))
        goto err;

    if (!FUNC_3(VAR_6))
        goto err;
    FUNC_4(VAR_6, &VAR_8, ((void*)0));

    VAR_12 = FUNC_6(VAR_5);
    if (!FUNC_11(VAR_9 = FUNC_8(VAR_12))
            || !FUNC_12((VAR_14 = FUNC_1(VAR_9, VAR_8, VAR_5)) != -1))
        goto err;

    VAR_13 = FUNC_6(VAR_6);
    if (!FUNC_11(VAR_10 = FUNC_8(VAR_13))
            || !FUNC_12((VAR_15 = FUNC_1(VAR_10, VAR_7, VAR_6)) != -1))
        goto err;

    if (!FUNC_12(VAR_14 >= 20)
            || !FUNC_10(VAR_9, VAR_14, VAR_10, VAR_15))
        goto err;

    VAR_16 = 1;

 err:
    FUNC_7(VAR_9);
    FUNC_7(VAR_10);
    FUNC_2(VAR_5);
    FUNC_2(VAR_6);
    return VAR_16;
}
