
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int ENGINE ;



 int FUNC_0 (int const**) ;
 int * FUNC_1 () ;

__attribute__((used)) static int FUNC_2(ENGINE *VAR_0, const EVP_MD **VAR_1,
                          const int **VAR_2, int VAR_3)
{
    int VAR_4 = 1;
    if (!VAR_1) {

        return FUNC_0(VAR_2);
    }

    switch (VAR_3) {
    case 128:
        *VAR_1 = FUNC_1();
        break;
    default:
        VAR_4 = 0;
        *VAR_1 = ((void*)0);
        break;
    }
    return VAR_4;
}
