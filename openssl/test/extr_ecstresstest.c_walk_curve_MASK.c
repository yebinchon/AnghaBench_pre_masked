
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ intmax_t ;
typedef int EC_POINT ;
typedef int EC_GROUP ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int const*,int *,int *,int *,int *) ;
 int FUNC_3 (int const*,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BIGNUM *FUNC_6(const EC_GROUP *VAR_0, EC_POINT *VAR_1, intmax_t VAR_2)
{
    BIGNUM *VAR_3 = ((void*)0);
    intmax_t VAR_4;

    if (!FUNC_4(VAR_3 = FUNC_1())
            || !FUNC_5(FUNC_2(VAR_0, VAR_1, VAR_3,
                                                          ((void*)0), ((void*)0))))
        goto err;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        if (!FUNC_5(FUNC_3(VAR_0, VAR_1, ((void*)0), VAR_1, VAR_3, ((void*)0)))
                || !FUNC_5(FUNC_2(VAR_0, VAR_1,
                                                              VAR_3,
                                                              ((void*)0), ((void*)0))))
            goto err;
    }
    return VAR_3;

err:
    FUNC_0(VAR_3);
    return ((void*)0);
}
