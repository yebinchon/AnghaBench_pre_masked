
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int provctx; int cipher; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(EVP_CIPHER_CTX *VAR_2, int VAR_3)
{
    int VAR_4;
    unsigned int VAR_5 = (unsigned int)VAR_3;
    OSSL_PARAM VAR_6[2] = { VAR_1, VAR_1 };

    VAR_6[0] = FUNC_0(VAR_0, &VAR_5);
    VAR_4 = FUNC_1(VAR_2->cipher, VAR_2->provctx, VAR_6);

    if (VAR_4 != 0)
        VAR_2->num = (int)VAR_5;
    return VAR_4 != 0;
}
