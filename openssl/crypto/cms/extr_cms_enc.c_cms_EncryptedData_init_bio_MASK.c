
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cipher; } ;
struct TYPE_6__ {TYPE_2__* encryptedData; } ;
struct TYPE_8__ {TYPE_1__ d; } ;
struct TYPE_7__ {int version; TYPE_5__* encryptedContentInfo; scalar_t__ unprotectedAttrs; } ;
typedef TYPE_2__ CMS_EncryptedData ;
typedef TYPE_3__ CMS_ContentInfo ;
typedef int BIO ;


 int * FUNC_0 (TYPE_5__*) ;

BIO *FUNC_1(const CMS_ContentInfo *VAR_0)
{
    CMS_EncryptedData *VAR_1 = VAR_0->d.encryptedData;
    if (VAR_1->encryptedContentInfo->cipher && VAR_1->unprotectedAttrs)
        VAR_1->version = 2;
    return FUNC_0(VAR_1->encryptedContentInfo);
}
