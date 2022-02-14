
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* signerHandles; TYPE_4__* info; } ;
struct TYPE_12__ {int authAttrHash; int contentHash; } ;
struct TYPE_11__ {TYPE_3__* rgSignerInfo; } ;
struct TYPE_9__ {scalar_t__ cAttr; } ;
struct TYPE_8__ {int pszObjId; } ;
struct TYPE_10__ {TYPE_2__ AuthAttrs; TYPE_1__ HashAlgorithm; } ;
typedef int HCRYPTPROV ;
typedef size_t DWORD ;
typedef TYPE_6__ CSignedMsgData ;
typedef scalar_t__ BOOL ;
typedef int ALG_ID ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL FUNC_3(CSignedMsgData *VAR_2,
 DWORD VAR_3, HCRYPTPROV *VAR_4, DWORD *VAR_5)
{
    ALG_ID VAR_6;
    BOOL VAR_7;

    VAR_6 = FUNC_0(
     VAR_2->info->rgSignerInfo[VAR_3].HashAlgorithm.pszObjId);

    if (!*VAR_4)
    {
        *VAR_4 = FUNC_2(VAR_6);
        if (!*VAR_4) return VAR_1;
        *VAR_5 &= ~VAR_0;
    }

    VAR_7 = FUNC_1(*VAR_4, VAR_6, 0, 0,
     &VAR_2->signerHandles->contentHash);
    if (VAR_7 && VAR_2->info->rgSignerInfo[VAR_3].AuthAttrs.cAttr > 0)
        VAR_7 = FUNC_1(*VAR_4, VAR_6, 0, 0,
         &VAR_2->signerHandles->authAttrHash);
    return VAR_7;
}
