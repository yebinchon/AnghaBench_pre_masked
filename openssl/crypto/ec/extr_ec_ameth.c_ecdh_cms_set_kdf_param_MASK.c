
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_PKEY_CTX ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int*,int*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    const EVP_MD *VAR_9;
    if (VAR_5 == VAR_3)
        return 0;


    if (!FUNC_4(VAR_5, &VAR_7, &VAR_6))
        return 0;

    if (VAR_6 == VAR_2)
        VAR_8 = 0;
    else if (VAR_6 == VAR_1)
        VAR_8 = 1;
    else
        return 0;

    if (FUNC_0(VAR_4, VAR_8) <= 0)
        return 0;

    if (FUNC_2(VAR_4, VAR_0) <= 0)
        return 0;

    VAR_9 = FUNC_3(VAR_7);
    if (!VAR_9)
        return 0;

    if (FUNC_1(VAR_4, VAR_9) <= 0)
        return 0;
    return 1;
}
