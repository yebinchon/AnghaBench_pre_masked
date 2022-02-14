
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSA ;
typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const**,int const**) ;
 int FUNC_2 (int *,int const**,int const**,int const**) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(DSA *VAR_4, int VAR_5, unsigned int *VAR_6)
{
    int VAR_7;
    const BIGNUM *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    const BIGNUM *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);

    FUNC_2(VAR_4, &VAR_8, &VAR_9, &VAR_10);
    FUNC_1(VAR_4, &VAR_11, &VAR_12);
    VAR_7 = FUNC_0(VAR_8);
    if ((VAR_7 & 7) || (FUNC_0(VAR_9) != 160)
        || (FUNC_0(VAR_10) > VAR_7))
        goto badkey;
    if (VAR_5) {
        if (FUNC_0(VAR_11) > VAR_7)
            goto badkey;
        *VAR_6 = VAR_0;
    } else {
        if (FUNC_0(VAR_12) > 160)
            goto badkey;
        *VAR_6 = VAR_1;
    }

    return VAR_7;
 badkey:
    FUNC_3(VAR_2, VAR_3);
    return 0;
}
