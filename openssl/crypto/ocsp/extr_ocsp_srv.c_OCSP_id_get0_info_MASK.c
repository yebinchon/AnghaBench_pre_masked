
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * algorithm; } ;
struct TYPE_5__ {int serialNumber; int issuerKeyHash; int issuerNameHash; TYPE_1__ hashAlgorithm; } ;
typedef TYPE_2__ OCSP_CERTID ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;



int FUNC_0(ASN1_OCTET_STRING **VAR_0, ASN1_OBJECT **VAR_1,
                      ASN1_OCTET_STRING **VAR_2,
                      ASN1_INTEGER **VAR_3, OCSP_CERTID *VAR_4)
{
    if (!VAR_4)
        return 0;
    if (VAR_1)
        *VAR_1 = VAR_4->hashAlgorithm.algorithm;
    if (VAR_0)
        *VAR_0 = &VAR_4->issuerNameHash;
    if (VAR_2)
        *VAR_2 = &VAR_4->issuerKeyHash;
    if (VAR_3)
        *VAR_3 = &VAR_4->serialNumber;
    return 1;
}
