
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** counter; } ;
struct TYPE_4__ {TYPE_1__ chacha; void** nonce; } ;
typedef int PROV_CIPHER_CTX ;
typedef TYPE_2__ PROV_CHACHA20_POLY1305_CTX ;


 size_t VAR_0 ;
 void* FUNC_0 (unsigned char*) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_1,
                                            unsigned char *VAR_2, size_t VAR_3)
{
    PROV_CHACHA20_POLY1305_CTX *VAR_4 = (PROV_CHACHA20_POLY1305_CTX *)VAR_1;

    if (VAR_3 != VAR_0)
        return 0;
    VAR_4->nonce[0] = VAR_4->chacha.counter[1] = FUNC_0(VAR_2);
    VAR_4->nonce[1] = VAR_4->chacha.counter[2] = FUNC_0(VAR_2 + 4);
    VAR_4->nonce[2] = VAR_4->chacha.counter[3] = FUNC_0(VAR_2 + 8);
    return 1;
}
