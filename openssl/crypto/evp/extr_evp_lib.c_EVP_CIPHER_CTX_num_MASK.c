
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int provctx; int cipher; scalar_t__ num; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(const EVP_CIPHER_CTX *VAR_3)
{
    int VAR_4;
    unsigned int VAR_5 = (unsigned int)VAR_3->num;
    OSSL_PARAM VAR_6[2] = { VAR_2, VAR_2 };

    VAR_6[0] = FUNC_0(VAR_1, &VAR_5);
    VAR_4 = FUNC_1(VAR_3->cipher, VAR_3->provctx, VAR_6);

    return VAR_4 != 0 ? (int)VAR_5 : VAR_0;
}
