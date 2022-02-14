
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_CTX ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int const*,int *,int const*,int *,int *) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int const*,int *) ;

__attribute__((used)) static BIGNUM *FUNC_8(const BIGNUM *VAR_0, const BIGNUM *VAR_1,
                                      BN_CTX *VAR_2)
{
    BIGNUM *VAR_3 = ((void*)0);
    BIGNUM *VAR_4, *VAR_5;

    if ((VAR_4 = FUNC_5()) == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_2);
    if ((VAR_5 = FUNC_1(VAR_2)) != ((void*)0)
            && FUNC_6(VAR_4, 2)
            && FUNC_7(VAR_5, VAR_1, VAR_4)
            && FUNC_4(VAR_4, VAR_0, VAR_5, VAR_1, VAR_2, ((void*)0)))
        VAR_3 = VAR_4;
    else
        FUNC_3(VAR_4);
    FUNC_0(VAR_2);
    return VAR_3;
}
