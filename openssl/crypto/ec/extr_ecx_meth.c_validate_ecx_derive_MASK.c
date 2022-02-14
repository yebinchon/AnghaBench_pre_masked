
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {unsigned char* privkey; unsigned char* pubkey; } ;
struct TYPE_12__ {TYPE_4__* peerkey; TYPE_2__* pkey; } ;
struct TYPE_10__ {TYPE_6__* ecx; } ;
struct TYPE_11__ {TYPE_3__ pkey; } ;
struct TYPE_8__ {TYPE_6__* ecx; } ;
struct TYPE_9__ {TYPE_1__ pkey; } ;
typedef TYPE_5__ EVP_PKEY_CTX ;
typedef TYPE_6__ ECX_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(EVP_PKEY_CTX *VAR_4, unsigned char *VAR_5,
                                          size_t *VAR_6,
                                          const unsigned char **VAR_7,
                                          const unsigned char **VAR_8)
{
    const ECX_KEY *VAR_9, *VAR_10;

    if (VAR_4->pkey == ((void*)0) || VAR_4->peerkey == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    VAR_9 = VAR_4->pkey->pkey.ecx;
    VAR_10 = VAR_4->peerkey->pkey.ecx;
    if (VAR_9 == ((void*)0) || VAR_9->privkey == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    if (VAR_10 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    *VAR_7 = VAR_9->privkey;
    *VAR_8 = VAR_10->pubkey;

    return 1;
}
