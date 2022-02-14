
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* signedData; } ;
struct TYPE_9__ {TYPE_3__ d; } ;
struct TYPE_7__ {TYPE_1__* encapContentInfo; } ;
struct TYPE_6__ {int * eContentType; } ;
typedef int CMS_SignerInfo ;
typedef TYPE_4__ CMS_ContentInfo ;
typedef int ASN1_OBJECT ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(CMS_ContentInfo *VAR_2, CMS_SignerInfo *VAR_3)
{
    ASN1_OBJECT *VAR_4 = VAR_2->d.signedData->encapContentInfo->eContentType;


    return FUNC_0(VAR_3, VAR_0,
                                       VAR_1, VAR_4, -1) > 0;
}
