
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_6__ {int * subjectKeyIdentifier; TYPE_1__* issuerAndSerialNumber; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_5__ {int * serialNumber; int * issuer; } ;
typedef TYPE_3__ CMS_SignerIdentifier ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(CMS_SignerIdentifier *VAR_2,
                                        ASN1_OCTET_STRING **VAR_3,
                                        X509_NAME **VAR_4,
                                        ASN1_INTEGER **VAR_5)
{
    if (VAR_2->type == VAR_0) {
        if (VAR_4)
            *VAR_4 = VAR_2->d.issuerAndSerialNumber->issuer;
        if (VAR_5)
            *VAR_5 = VAR_2->d.issuerAndSerialNumber->serialNumber;
    } else if (VAR_2->type == VAR_1) {
        if (VAR_3)
            *VAR_3 = VAR_2->d.subjectKeyIdentifier;
    } else
        return 0;
    return 1;
}
