
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*,int const*) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(BIGNUM *VAR_0, const BIGNUM *VAR_1, const BIGNUM *VAR_2,
                           int VAR_3)
{
    int VAR_4 = (VAR_3 >> 1) - 100;

    if (!FUNC_3(VAR_0, VAR_1, VAR_2))
        return -1;
    FUNC_2(VAR_0, 0);

    if (FUNC_0(VAR_0))
        return 0;

    if (!FUNC_4(VAR_0, 1))
        return -1;
    return (FUNC_1(VAR_0) > VAR_4);
}
