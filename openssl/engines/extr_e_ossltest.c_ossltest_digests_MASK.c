
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD ;
typedef int ENGINE ;







 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (int const**) ;

__attribute__((used)) static int FUNC_6(ENGINE *VAR_0, const EVP_MD **VAR_1,
                          const int **VAR_2, int VAR_3)
{
    int VAR_4 = 1;
    if (!VAR_1) {

        return FUNC_5(VAR_2);
    }

    switch (VAR_3) {
    case 132:
        *VAR_1 = FUNC_0();
        break;
    case 131:
        *VAR_1 = FUNC_1();
        break;
    case 130:
        *VAR_1 = FUNC_2();
        break;
    case 129:
        *VAR_1 = FUNC_3();
        break;
    case 128:
        *VAR_1 = FUNC_4();
        break;
    default:
        VAR_4 = 0;
        *VAR_1 = ((void*)0);
        break;
    }
    return VAR_4;
}
