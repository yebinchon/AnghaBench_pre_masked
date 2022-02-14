
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t md_size; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,size_t*) ;
 int FUNC_2 (TYPE_1__ const*,int *) ;

int FUNC_3(const EVP_MD *VAR_4)
{
    int VAR_5;
    size_t VAR_6 = VAR_4->md_size;
    OSSL_PARAM VAR_7[2] = { VAR_3, VAR_3 };

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    VAR_7[0] = FUNC_1(VAR_2, &VAR_6);
    VAR_5 = FUNC_2(VAR_4, VAR_7);

    return VAR_5 != 0 ? (int)VAR_6 : -1;
}
