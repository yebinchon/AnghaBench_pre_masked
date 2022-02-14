
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static EC_GROUP *FUNC_10(const char *VAR_0, const char *VAR_1,
                                 const char *VAR_2, const char *VAR_3,
                                 const char *VAR_4, const char *VAR_5,
                                 const char *VAR_6)
{
    BIGNUM *VAR_7 = ((void*)0);
    BIGNUM *VAR_8 = ((void*)0);
    BIGNUM *VAR_9 = ((void*)0);
    BIGNUM *VAR_10 = ((void*)0);
    BIGNUM *VAR_11 = ((void*)0);
    BIGNUM *VAR_12 = ((void*)0);
    BIGNUM *VAR_13 = ((void*)0);
    EC_POINT *VAR_14 = ((void*)0);
    EC_GROUP *VAR_15 = ((void*)0);
    int VAR_16 = 0;

    if (!FUNC_9(FUNC_1(&VAR_7, VAR_0))
            || !FUNC_9(FUNC_1(&VAR_8, VAR_1))
            || !FUNC_9(FUNC_1(&VAR_9, VAR_2)))
        goto done;

    VAR_15 = FUNC_3(VAR_7, VAR_8, VAR_9, ((void*)0));
    if (!FUNC_8(VAR_15))
        goto done;

    VAR_14 = FUNC_6(VAR_15);
    if (!FUNC_8(VAR_14))
        goto done;

    if (!FUNC_9(FUNC_1(&VAR_10, VAR_3))
            || !FUNC_9(FUNC_1(&VAR_11, VAR_4))
            || !FUNC_9(FUNC_7(VAR_15, VAR_14, VAR_10,
                                                          VAR_11, ((void*)0))))
        goto done;

    if (!FUNC_9(FUNC_1(&VAR_12, VAR_5))
            || !FUNC_9(FUNC_1(&VAR_13, VAR_6))
            || !FUNC_9(FUNC_4(VAR_15, VAR_14, VAR_12, VAR_13)))
        goto done;

    VAR_16 = 1;
done:
    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    FUNC_5(VAR_14);
    FUNC_0(VAR_12);
    FUNC_0(VAR_13);
    if (!VAR_16) {
        FUNC_2(VAR_15);
        VAR_15 = ((void*)0);
    }

    return VAR_15;
}
