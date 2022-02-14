
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {TYPE_4__* info; TYPE_2__* signerHandles; } ;
struct TYPE_17__ {TYPE_5__ signed_data; } ;
struct TYPE_19__ {TYPE_6__ u; scalar_t__ crypt_prov; } ;
struct TYPE_18__ {int pbData; int cbData; } ;
struct TYPE_15__ {TYPE_3__* rgSignerInfo; } ;
struct TYPE_12__ {scalar_t__ cAttr; } ;
struct TYPE_14__ {int EncryptedHash; TYPE_1__ AuthAttrs; } ;
struct TYPE_13__ {int contentHash; int authAttrHash; } ;
typedef int PCERT_PUBLIC_KEY_INFO ;
typedef scalar_t__ HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int HCRYPTHASH ;
typedef size_t DWORD ;
typedef TYPE_7__ CRYPT_HASH_BLOB ;
typedef TYPE_8__ CDecodeMsg ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_7__*,int *) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static BOOL FUNC_6(CDecodeMsg *VAR_1,
 HCRYPTPROV VAR_2, DWORD VAR_3, PCERT_PUBLIC_KEY_INFO VAR_4)
{
    HCRYPTKEY VAR_5;
    BOOL VAR_6;

    if (!VAR_2)
        VAR_2 = VAR_1->crypt_prov;
    VAR_6 = FUNC_3(VAR_2, VAR_0, VAR_4, &VAR_5);
    if (VAR_6)
    {
        HCRYPTHASH VAR_7;
        CRYPT_HASH_BLOB VAR_8;

        if (VAR_1->u.signed_data.info->rgSignerInfo[VAR_3].AuthAttrs.cAttr)
            VAR_7 = VAR_1->u.signed_data.signerHandles[VAR_3].authAttrHash;
        else
            VAR_7 = VAR_1->u.signed_data.signerHandles[VAR_3].contentHash;
        VAR_6 = FUNC_0(&VAR_8,
         &VAR_1->u.signed_data.info->rgSignerInfo[VAR_3].EncryptedHash);
        if (VAR_6)
        {
            FUNC_1(&VAR_8);
            VAR_6 = FUNC_5(VAR_7, VAR_8.pbData,
             VAR_8.cbData, VAR_5, ((void*)0), 0);
            FUNC_4(VAR_8.pbData);
        }
        FUNC_2(VAR_5);
    }
    return VAR_6;
}
