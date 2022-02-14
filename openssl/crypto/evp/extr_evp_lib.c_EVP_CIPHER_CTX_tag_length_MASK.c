
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int provctx; int cipher; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(const EVP_CIPHER_CTX *VAR_2)
{
    int VAR_3;
    size_t VAR_4 = 0;
    OSSL_PARAM VAR_5[2] = { VAR_1, VAR_1 };

    VAR_5[0] = FUNC_0(VAR_0, &VAR_4);
    VAR_3 = FUNC_1(VAR_2->cipher, VAR_2->provctx, VAR_5);
    return VAR_3 == 1 ? (int)VAR_4 : 0;
}
