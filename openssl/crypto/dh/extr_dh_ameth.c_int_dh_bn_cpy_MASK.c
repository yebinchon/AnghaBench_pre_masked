
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*,int ) ;

__attribute__((used)) static int FUNC_3(BIGNUM **VAR_2, const BIGNUM *VAR_3)
{
    BIGNUM *VAR_4;





    if (VAR_3 == ((void*)0))
        VAR_4 = ((void*)0);
    else if (FUNC_2(VAR_3, VAR_1)
                && !FUNC_2(VAR_3, VAR_0))
        VAR_4 = (BIGNUM *)VAR_3;
    else if ((VAR_4 = FUNC_1(VAR_3)) == ((void*)0))
        return 0;
    FUNC_0(*VAR_2);
    *VAR_2 = VAR_4;
    return 1;
}
