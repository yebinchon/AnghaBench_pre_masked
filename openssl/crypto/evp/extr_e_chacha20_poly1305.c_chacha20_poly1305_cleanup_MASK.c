
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cipher_data; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;
typedef int EVP_CHACHA_AEAD_CTX ;


 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(EVP_CIPHER_CTX *VAR_0)
{
    EVP_CHACHA_AEAD_CTX *VAR_1 = FUNC_2(VAR_0);
    if (VAR_1)
        FUNC_0(VAR_0->cipher_data, sizeof(*VAR_1) + FUNC_1());
    return 1;
}
