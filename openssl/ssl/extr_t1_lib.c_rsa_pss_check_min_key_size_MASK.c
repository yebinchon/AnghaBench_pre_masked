
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIGALG_LOOKUP ;
typedef int RSA ;
typedef int EVP_MD ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int const**) ;

__attribute__((used)) static int FUNC_3(const RSA *VAR_0, const SIGALG_LOOKUP *VAR_1)
{
    const EVP_MD *VAR_2;

    if (VAR_0 == ((void*)0))
        return 0;
    if (!FUNC_2(VAR_1, &VAR_2) || VAR_2 == ((void*)0))
        return 0;
    if (FUNC_1(VAR_0) < FUNC_0(VAR_2))
        return 0;
    return 1;
}
