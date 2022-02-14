
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cipher; int provctx; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int ,int ,int *) ;

int FUNC_5(const EVP_CIPHER_CTX *VAR_5)
{
    int VAR_6, VAR_7 = FUNC_2(VAR_5->cipher);
    size_t VAR_8 = VAR_7;
    OSSL_PARAM VAR_9[2] = { VAR_4, VAR_4 };

    VAR_9[0] = FUNC_3(VAR_3, &VAR_8);
    VAR_6 = FUNC_4(VAR_5->cipher, VAR_5->provctx, VAR_9);
    if (VAR_6 == VAR_2)
        goto legacy;
    return VAR_6 != 0 ? (int)VAR_8 : -1;

legacy:
    if ((FUNC_1(VAR_5->cipher) & VAR_0) != 0) {
        VAR_6 = FUNC_0((EVP_CIPHER_CTX *)VAR_5, VAR_1,
                                 0, &VAR_7);
        return (VAR_6 == 1) ? VAR_7 : -1;
    }
    return VAR_7;
}
