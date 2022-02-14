
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;
typedef int ENGINE ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int const**) ;

__attribute__((used)) static int FUNC_2(ENGINE *VAR_0, const EVP_CIPHER **VAR_1,
                             const int **VAR_2, int VAR_3)
{
    if (VAR_1 == ((void*)0))
        return FUNC_1(VAR_2);

    *VAR_1 = FUNC_0(VAR_3);

    return *VAR_1 != ((void*)0);
}
