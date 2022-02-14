
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ keylen; } ;
struct TYPE_5__ {int ks; } ;
struct TYPE_6__ {scalar_t__ key_bits; TYPE_1__ ks; } ;
typedef int RC2_KEY ;
typedef TYPE_2__ PROV_RC2_CTX ;
typedef TYPE_3__ PROV_CIPHER_CTX ;


 int FUNC_0 (int *,int,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_0,
                                 const unsigned char *VAR_1, size_t VAR_2)
{
    PROV_RC2_CTX *VAR_3 = (PROV_RC2_CTX *)VAR_0;
    RC2_KEY *VAR_4 = &(VAR_3->ks.ks);

    FUNC_0(VAR_4, (int)VAR_0->keylen, VAR_1, (int)VAR_3->key_bits);
    return 1;
}
