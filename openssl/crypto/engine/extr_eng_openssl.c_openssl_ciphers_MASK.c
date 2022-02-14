
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;
typedef int ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int const**) ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;

__attribute__((used)) static int FUNC_4(ENGINE *VAR_3, const EVP_CIPHER **VAR_4,
                           const int **VAR_5, int VAR_6)
{
    if (!VAR_4) {

        return FUNC_1(VAR_5);
    }

    if (VAR_6 == VAR_0)
        *VAR_4 = FUNC_3();
    else if (VAR_6 == VAR_1)
        *VAR_4 = FUNC_2();
    else {




        *VAR_4 = ((void*)0);
        return 0;
    }
    return 1;
}
