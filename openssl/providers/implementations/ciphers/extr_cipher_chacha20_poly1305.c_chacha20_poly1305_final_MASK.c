
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hw; } ;
struct TYPE_4__ {scalar_t__ (* aead_cipher ) (TYPE_2__*,unsigned char*,size_t*,int *,int ) ;} ;
typedef TYPE_1__ PROV_CIPHER_HW_CHACHA20_POLY1305 ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 scalar_t__ FUNC_0 (TYPE_2__*,unsigned char*,size_t*,int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                                   size_t VAR_3)
{
    PROV_CIPHER_CTX *VAR_4 = (PROV_CIPHER_CTX *)VAR_0;
    PROV_CIPHER_HW_CHACHA20_POLY1305 *VAR_5 =
        (PROV_CIPHER_HW_CHACHA20_POLY1305 *)VAR_4->hw;

    if (VAR_5->aead_cipher(VAR_4, VAR_1, VAR_2, ((void*)0), 0) <= 0)
        return 0;

    *VAR_2 = 0;
    return 1;
}
