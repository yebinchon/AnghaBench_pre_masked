
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DSA ;
typedef int BIGNUM ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int const**,int const**) ;
 int FUNC_2 (int *,int const**,int const**,int const**) ;
 int FUNC_3 (unsigned char*,int,int) ;
 int FUNC_4 (unsigned char**,int const*,int) ;

__attribute__((used)) static void FUNC_5(unsigned char **VAR_0, DSA *VAR_1, int VAR_2)
{
    int VAR_3;
    const BIGNUM *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    const BIGNUM *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

    FUNC_2(VAR_1, &VAR_4, &VAR_5, &VAR_6);
    FUNC_1(VAR_1, &VAR_7, &VAR_8);
    VAR_3 = FUNC_0(VAR_4);
    FUNC_4(VAR_0, VAR_4, VAR_3);
    FUNC_4(VAR_0, VAR_5, 20);
    FUNC_4(VAR_0, VAR_6, VAR_3);
    if (VAR_2)
        FUNC_4(VAR_0, VAR_7, VAR_3);
    else
        FUNC_4(VAR_0, VAR_8, 20);

    FUNC_3(*VAR_0, 0xff, 24);
    *VAR_0 += 24;
    return;
}
