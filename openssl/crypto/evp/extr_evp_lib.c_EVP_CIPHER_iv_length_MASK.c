
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t iv_len; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t*) ;
 int FUNC_1 (TYPE_1__ const*,int *) ;

int FUNC_2(const EVP_CIPHER *VAR_3)
{
    int VAR_4;
    size_t VAR_5 = VAR_3->iv_len;
    OSSL_PARAM VAR_6[2] = { VAR_2, VAR_2 };

    VAR_6[0] = FUNC_0(VAR_1, &VAR_5);
    VAR_4 = FUNC_1(VAR_3, VAR_6);

    return VAR_4 != 0 ? (int)VAR_5 : VAR_0;
}
