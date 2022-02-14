
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_33__ {int * eContent; } ;
struct TYPE_32__ {TYPE_7__* encryptedContentInfo; } ;
struct TYPE_31__ {int * encryptedContent; } ;
struct TYPE_30__ {TYPE_5__* encapContentInfo; } ;
struct TYPE_29__ {int * eContent; } ;
struct TYPE_28__ {TYPE_3__* encryptedContentInfo; } ;
struct TYPE_27__ {int * encryptedContent; } ;
struct TYPE_26__ {TYPE_1__* encapContentInfo; } ;
struct TYPE_25__ {int * eContent; } ;
struct TYPE_23__ {TYPE_14__* other; TYPE_12__* compressedData; TYPE_10__* authenticatedData; TYPE_8__* encryptedData; TYPE_6__* digestedData; TYPE_4__* envelopedData; TYPE_2__* signedData; int * data; } ;
struct TYPE_24__ {TYPE_15__ d; int contentType; } ;
struct TYPE_21__ {int * octet_string; } ;
struct TYPE_22__ {TYPE_13__ value; int type; } ;
struct TYPE_20__ {TYPE_11__* encapContentInfo; } ;
struct TYPE_19__ {int * eContent; } ;
struct TYPE_18__ {TYPE_9__* encapContentInfo; } ;
typedef TYPE_16__ CMS_ContentInfo ;
typedef int ASN1_OCTET_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;







 int FUNC_1 (int ) ;
 int VAR_2 ;

ASN1_OCTET_STRING **FUNC_2(CMS_ContentInfo *VAR_3)
{
    switch (FUNC_1(VAR_3->contentType)) {

    case 132:
        return &VAR_3->d.data;

    case 128:
        return &VAR_3->d.signedData->encapContentInfo->eContent;

    case 129:
        return &VAR_3->d.envelopedData->encryptedContentInfo->encryptedContent;

    case 131:
        return &VAR_3->d.digestedData->encapContentInfo->eContent;

    case 130:
        return &VAR_3->d.encryptedData->encryptedContentInfo->encryptedContent;

    case 134:
        return &VAR_3->d.authenticatedData->encapContentInfo->eContent;

    case 133:
        return &VAR_3->d.compressedData->encapContentInfo->eContent;

    default:
        if (VAR_3->d.other->type == VAR_2)
            return &VAR_3->d.other->value.octet_string;
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);

    }
}
