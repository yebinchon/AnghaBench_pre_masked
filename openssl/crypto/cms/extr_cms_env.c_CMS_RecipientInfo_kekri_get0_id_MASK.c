
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_11__ {TYPE_3__* other; int * date; int * keyIdentifier; } ;
struct TYPE_8__ {TYPE_1__* kekri; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_2__ d; } ;
struct TYPE_9__ {int * keyAttr; int * keyAttrId; } ;
struct TYPE_7__ {int * keyEncryptionAlgorithm; TYPE_5__* kekid; } ;
typedef TYPE_4__ CMS_RecipientInfo ;
typedef TYPE_5__ CMS_KEKIdentifier ;
typedef int ASN1_TYPE ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;
typedef int ASN1_GENERALIZEDTIME ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(CMS_RecipientInfo *VAR_3,
                                    X509_ALGOR **VAR_4,
                                    ASN1_OCTET_STRING **VAR_5,
                                    ASN1_GENERALIZEDTIME **VAR_6,
                                    ASN1_OBJECT **VAR_7,
                                    ASN1_TYPE **VAR_8)
{
    CMS_KEKIdentifier *VAR_9;
    if (VAR_3->type != VAR_1) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_9 = VAR_3->d.kekri->kekid;
    if (VAR_4)
        *VAR_4 = VAR_3->d.kekri->keyEncryptionAlgorithm;
    if (VAR_5)
        *VAR_5 = VAR_9->keyIdentifier;
    if (VAR_6)
        *VAR_6 = VAR_9->date;
    if (VAR_7) {
        if (VAR_9->other)
            *VAR_7 = VAR_9->other->keyAttrId;
        else
            *VAR_7 = ((void*)0);
    }
    if (VAR_8) {
        if (VAR_9->other)
            *VAR_8 = VAR_9->other->keyAttr;
        else
            *VAR_8 = ((void*)0);
    }
    return 1;
}
