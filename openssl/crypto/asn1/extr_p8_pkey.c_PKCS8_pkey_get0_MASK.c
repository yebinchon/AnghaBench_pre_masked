
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_6__ {TYPE_1__* pkeyalg; int pkey; } ;
typedef TYPE_2__ PKCS8_PRIV_KEY_INFO ;
typedef int ASN1_OBJECT ;


 unsigned char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(const ASN1_OBJECT **VAR_0,
                    const unsigned char **VAR_1, int *VAR_2,
                    const X509_ALGOR **VAR_3, const PKCS8_PRIV_KEY_INFO *VAR_4)
{
    if (VAR_0)
        *VAR_0 = VAR_4->pkeyalg->algorithm;
    if (VAR_1) {
        *VAR_1 = FUNC_0(VAR_4->pkey);
        *VAR_2 = FUNC_1(VAR_4->pkey);
    }
    if (VAR_3)
        *VAR_3 = VAR_4->pkeyalg;
    return 1;
}
