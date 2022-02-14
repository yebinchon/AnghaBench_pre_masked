
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_9__ {TYPE_2__* rKeyId; TYPE_1__* issuerAndSerialNumber; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_3__ d; } ;
struct TYPE_10__ {TYPE_5__* rid; } ;
struct TYPE_8__ {int * other; int * date; int * subjectKeyIdentifier; } ;
struct TYPE_7__ {int * serialNumber; int * issuer; } ;
typedef TYPE_4__ CMS_RecipientEncryptedKey ;
typedef int CMS_OtherKeyAttribute ;
typedef TYPE_5__ CMS_KeyAgreeRecipientIdentifier ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;
typedef int ASN1_GENERALIZEDTIME ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(CMS_RecipientEncryptedKey *VAR_2,
                                      ASN1_OCTET_STRING **VAR_3,
                                      ASN1_GENERALIZEDTIME **VAR_4,
                                      CMS_OtherKeyAttribute **VAR_5,
                                      X509_NAME **VAR_6, ASN1_INTEGER **VAR_7)
{
    CMS_KeyAgreeRecipientIdentifier *VAR_8 = VAR_2->rid;
    if (VAR_8->type == VAR_0) {
        if (VAR_6)
            *VAR_6 = VAR_8->d.issuerAndSerialNumber->issuer;
        if (VAR_7)
            *VAR_7 = VAR_8->d.issuerAndSerialNumber->serialNumber;
        if (VAR_3)
            *VAR_3 = ((void*)0);
        if (VAR_4)
            *VAR_4 = ((void*)0);
        if (VAR_5)
            *VAR_5 = ((void*)0);
    } else if (VAR_8->type == VAR_1) {
        if (VAR_3)
            *VAR_3 = VAR_8->d.rKeyId->subjectKeyIdentifier;
        if (VAR_4)
            *VAR_4 = VAR_8->d.rKeyId->date;
        if (VAR_5)
            *VAR_5 = VAR_8->d.rKeyId->other;
        if (VAR_6)
            *VAR_6 = ((void*)0);
        if (VAR_7)
            *VAR_7 = ((void*)0);
    } else
        return 0;
    return 1;
}
