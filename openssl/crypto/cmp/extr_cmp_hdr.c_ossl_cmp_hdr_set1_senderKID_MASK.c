
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int senderKID; } ;
typedef TYPE_1__ OSSL_CMP_PKIHEADER ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int const*) ;

int FUNC_2(OSSL_CMP_PKIHEADER *VAR_0,
                                const ASN1_OCTET_STRING *VAR_1)
{
    if (!FUNC_0(VAR_0 != ((void*)0)))
        return 0;
    return FUNC_1(&VAR_0->senderKID, VAR_1);
}
