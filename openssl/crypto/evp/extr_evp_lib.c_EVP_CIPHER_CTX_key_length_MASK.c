
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t key_len; int provctx; int cipher; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t*) ;
 int FUNC_1 (int ,int ,int *) ;

int FUNC_2(const EVP_CIPHER_CTX *VAR_3)
{
    int VAR_4;
    size_t VAR_5 = VAR_3->key_len;
    OSSL_PARAM VAR_6[2] = { VAR_2, VAR_2 };

    VAR_6[0] = FUNC_0(VAR_1, &VAR_5);
    VAR_4 = FUNC_1(VAR_3->cipher, VAR_3->provctx, VAR_6);

    return VAR_4 != 0 ? (int)VAR_5 : VAR_0;
}
