
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* cipher_data; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;



void *FUNC_0(EVP_CIPHER_CTX *VAR_0, void *VAR_1)
{
    void *VAR_2;

    VAR_2 = VAR_0->cipher_data;
    VAR_0->cipher_data = VAR_1;

    return VAR_2;
}
