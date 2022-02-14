
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* pkey_meths ) (TYPE_1__*,int **,int const**,int const) ;} ;
typedef int EVP_PKEY_METHOD ;
typedef TYPE_1__ ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int **,int const**,int const) ;
 int FUNC_2 (TYPE_1__*,int **,int const**,int const) ;

void FUNC_3(ENGINE *VAR_0)
{
    int VAR_1;
    EVP_PKEY_METHOD *VAR_2;
    if (VAR_0->pkey_meths) {
        const int *VAR_3;
        int VAR_4;
        VAR_4 = VAR_0->pkey_meths(VAR_0, ((void*)0), &VAR_3, 0);
        for (VAR_1 = 0; VAR_1 < VAR_4; VAR_1++) {
            if (VAR_0->pkey_meths(VAR_0, &VAR_2, ((void*)0), VAR_3[VAR_1])) {
                FUNC_0(VAR_2);
            }
        }
    }
}
