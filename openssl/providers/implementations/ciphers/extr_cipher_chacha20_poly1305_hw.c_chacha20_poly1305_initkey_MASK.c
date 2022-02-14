
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ text; scalar_t__ aad; } ;
struct TYPE_7__ {int chacha; int tls_payload_length; scalar_t__ mac_inited; scalar_t__ aad; TYPE_1__ len; } ;
struct TYPE_6__ {scalar_t__ enc; } ;
typedef TYPE_2__ PROV_CIPHER_CTX ;
typedef TYPE_3__ PROV_CHACHA20_POLY1305_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char const*,size_t,int *,int ) ;
 int FUNC_1 (int *,unsigned char const*,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_1,
                                     const unsigned char *VAR_2, size_t VAR_3)
{
    PROV_CHACHA20_POLY1305_CTX *VAR_4 = (PROV_CHACHA20_POLY1305_CTX *)VAR_1;

    VAR_4->len.aad = 0;
    VAR_4->len.text = 0;
    VAR_4->aad = 0;
    VAR_4->mac_inited = 0;
    VAR_4->tls_payload_length = VAR_0;

    if (VAR_1->enc)
        return FUNC_1(&VAR_4->chacha, VAR_2, VAR_3, ((void*)0), 0);
    else
        return FUNC_0(&VAR_4->chacha, VAR_2, VAR_3, ((void*)0), 0);
}
