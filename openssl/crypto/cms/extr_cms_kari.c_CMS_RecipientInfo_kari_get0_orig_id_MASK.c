
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509_NAME ;
typedef int X509_ALGOR ;
struct TYPE_13__ {TYPE_4__* originatorKey; int * subjectKeyIdentifier; TYPE_3__* issuerAndSerialNumber; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_5__ d; } ;
struct TYPE_10__ {TYPE_1__* kari; } ;
struct TYPE_14__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_12__ {int * publicKey; int * algorithm; } ;
struct TYPE_11__ {int * serialNumber; int * issuer; } ;
struct TYPE_9__ {TYPE_7__* originator; } ;
typedef TYPE_6__ CMS_RecipientInfo ;
typedef TYPE_7__ CMS_OriginatorIdentifierOrKey ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_INTEGER ;
typedef int ASN1_BIT_STRING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(CMS_RecipientInfo *VAR_6,
                                        X509_ALGOR **VAR_7,
                                        ASN1_BIT_STRING **VAR_8,
                                        ASN1_OCTET_STRING **VAR_9,
                                        X509_NAME **VAR_10,
                                        ASN1_INTEGER **VAR_11)
{
    CMS_OriginatorIdentifierOrKey *VAR_12;
    if (VAR_6->type != VAR_4) {
        FUNC_0(VAR_0,
               VAR_5);
        return 0;
    }
    VAR_12 = VAR_6->d.kari->originator;
    if (VAR_10)
        *VAR_10 = ((void*)0);
    if (VAR_11)
        *VAR_11 = ((void*)0);
    if (VAR_9)
        *VAR_9 = ((void*)0);
    if (VAR_7)
        *VAR_7 = ((void*)0);
    if (VAR_8)
        *VAR_8 = ((void*)0);
    if (VAR_12->type == VAR_1) {
        if (VAR_10)
            *VAR_10 = VAR_12->d.issuerAndSerialNumber->issuer;
        if (VAR_11)
            *VAR_11 = VAR_12->d.issuerAndSerialNumber->serialNumber;
    } else if (VAR_12->type == VAR_2) {
        if (VAR_9)
            *VAR_9 = VAR_12->d.subjectKeyIdentifier;
    } else if (VAR_12->type == VAR_3) {
        if (VAR_7)
            *VAR_7 = VAR_12->d.originatorKey->algorithm;
        if (VAR_8)
            *VAR_8 = VAR_12->d.originatorKey->publicKey;
    } else
        return 0;
    return 1;
}
