
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int cbData; int * pbData; } ;
struct TYPE_13__ {TYPE_4__* info; TYPE_2__* signerHandles; } ;
struct TYPE_12__ {size_t cSignerInfo; size_t* signerKeySpec; TYPE_3__* rgSignerInfo; } ;
struct TYPE_9__ {scalar_t__ cAttr; } ;
struct TYPE_11__ {TYPE_8__ EncryptedHash; TYPE_1__ AuthAttrs; } ;
struct TYPE_10__ {int contentHash; int authAttrHash; } ;
typedef int HCRYPTHASH ;
typedef size_t DWORD ;
typedef TYPE_5__ CSignedMsgData ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,size_t,int *,int ,int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,TYPE_5__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_4(CSignedMsgData *VAR_3)
{
    DWORD VAR_4;
    BOOL VAR_5 = VAR_2;

    FUNC_3("(%p)\n", VAR_3);

    for (VAR_4 = 0; VAR_5 && VAR_4 < VAR_3->info->cSignerInfo; VAR_4++)
    {
        HCRYPTHASH VAR_6;
        DWORD VAR_7 = VAR_3->info->signerKeySpec[VAR_4];

        if (!VAR_7)
            VAR_7 = VAR_0;
        if (VAR_3->info->rgSignerInfo[VAR_4].AuthAttrs.cAttr)
            VAR_6 = VAR_3->signerHandles[VAR_4].authAttrHash;
        else
            VAR_6 = VAR_3->signerHandles[VAR_4].contentHash;
        VAR_5 = FUNC_2(VAR_6, VAR_7, ((void*)0), 0, ((void*)0),
         &VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash.cbData);
        if (VAR_5)
        {
            VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash.pbData =
             FUNC_1(
             VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash.cbData);
            if (VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash.pbData)
            {
                VAR_5 = FUNC_2(VAR_6, VAR_7, ((void*)0), 0,
                 VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash.pbData,
                 &VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash.cbData);
                if (VAR_5)
                    FUNC_0(
                     &VAR_3->info->rgSignerInfo[VAR_4].EncryptedHash);
            }
            else
                VAR_5 = VAR_1;
        }
    }
    return VAR_5;
}
