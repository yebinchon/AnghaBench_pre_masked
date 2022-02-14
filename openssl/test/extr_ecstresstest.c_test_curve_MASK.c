
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int VAR_0 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_12 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_13(void)
{
    EC_GROUP *VAR_5 = ((void*)0);
    EC_POINT *VAR_6 = ((void*)0);
    BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9 = 0;





    if (!FUNC_10(VAR_5 = FUNC_6(VAR_0))
            || !FUNC_10(VAR_6 = FUNC_7(FUNC_5(VAR_5),
                                              VAR_5))
            || !FUNC_10(VAR_7 = FUNC_12(VAR_5, VAR_6, VAR_3)))
        return 0;

    if (VAR_4) {
        FUNC_3(VAR_1, VAR_7);
        FUNC_0(VAR_1, "\n");
        VAR_9 = 1;
    } else {
        if (!FUNC_11(FUNC_2(&VAR_8, VAR_2))
                || !FUNC_10(VAR_8)
                || !FUNC_9(VAR_7, VAR_8))
            goto err;
        VAR_9 = 1;
    }

err:
    FUNC_4(VAR_5);
    FUNC_8(VAR_6);
    FUNC_1(VAR_7);
    FUNC_1(VAR_8);
    return VAR_9;
}
