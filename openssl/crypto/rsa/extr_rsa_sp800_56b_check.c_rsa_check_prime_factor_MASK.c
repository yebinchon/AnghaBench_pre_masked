
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int,int *) ;

int FUNC_10(BIGNUM *VAR_0, BIGNUM *VAR_1, int VAR_2, BN_CTX *VAR_3)
{
    int VAR_4 = 0;
    BIGNUM *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);


    if (FUNC_3(VAR_0, VAR_3, ((void*)0)) != 1

            || FUNC_9(VAR_0, VAR_2, VAR_3) != 1)
        return 0;

    FUNC_2(VAR_3);
    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = FUNC_1(VAR_3);
    VAR_4 = (VAR_6 != ((void*)0))

          && (FUNC_5(VAR_5, VAR_0) != ((void*)0))
          && FUNC_8(VAR_5, 1)
          && FUNC_6(VAR_6, VAR_5, VAR_1, VAR_3)
          && FUNC_7(VAR_6);

    FUNC_4(VAR_5);
    FUNC_0(VAR_3);
    return VAR_4;
}
