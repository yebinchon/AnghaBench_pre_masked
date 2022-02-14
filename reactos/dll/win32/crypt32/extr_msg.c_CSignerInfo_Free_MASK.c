
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_31__ {TYPE_15__* pbData; } ;
struct TYPE_29__ {TYPE_15__* pbData; } ;
struct TYPE_30__ {TYPE_7__ Parameters; } ;
struct TYPE_26__ {TYPE_15__* pbData; } ;
struct TYPE_24__ {TYPE_15__* pbData; } ;
struct TYPE_23__ {TYPE_15__* pbData; } ;
struct TYPE_25__ {TYPE_2__ SerialNumber; TYPE_1__ Issuer; } ;
struct TYPE_27__ {TYPE_4__ KeyId; TYPE_3__ IssuerSerialNumber; } ;
struct TYPE_28__ {scalar_t__ dwIdChoice; TYPE_5__ u; } ;
struct TYPE_22__ {size_t cValue; struct TYPE_22__* pszObjId; struct TYPE_22__* rgValue; struct TYPE_22__* pbData; } ;
struct TYPE_20__ {size_t cAttr; TYPE_15__* rgAttr; } ;
struct TYPE_19__ {size_t cAttr; TYPE_15__* rgAttr; } ;
struct TYPE_18__ {TYPE_15__* pbData; } ;
struct TYPE_17__ {TYPE_9__ Parameters; } ;
struct TYPE_21__ {TYPE_13__ UnauthAttrs; TYPE_12__ AuthAttrs; TYPE_11__ EncryptedHash; TYPE_10__ HashEncryptionAlgorithm; TYPE_8__ HashAlgorithm; TYPE_6__ SignerId; } ;
typedef size_t DWORD ;
typedef TYPE_14__ CMSG_CMS_SIGNER_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_15__*) ;

__attribute__((used)) static void FUNC_1(CMSG_CMS_SIGNER_INFO *VAR_1)
{
    DWORD VAR_2, VAR_3;

    if (VAR_1->SignerId.dwIdChoice == VAR_0)
    {
        FUNC_0(VAR_1->SignerId.u.IssuerSerialNumber.Issuer.pbData);
        FUNC_0(VAR_1->SignerId.u.IssuerSerialNumber.SerialNumber.pbData);
    }
    else
        FUNC_0(VAR_1->SignerId.u.KeyId.pbData);
    FUNC_0(VAR_1->HashAlgorithm.Parameters.pbData);
    FUNC_0(VAR_1->HashEncryptionAlgorithm.Parameters.pbData);
    FUNC_0(VAR_1->EncryptedHash.pbData);
    for (VAR_2 = 0; VAR_2 < VAR_1->AuthAttrs.cAttr; VAR_2++)
    {
        for (VAR_3 = 0; VAR_3 < VAR_1->AuthAttrs.rgAttr[VAR_2].cValue; VAR_3++)
            FUNC_0(VAR_1->AuthAttrs.rgAttr[VAR_2].rgValue[VAR_3].pbData);
        FUNC_0(VAR_1->AuthAttrs.rgAttr[VAR_2].rgValue);
        FUNC_0(VAR_1->AuthAttrs.rgAttr[VAR_2].pszObjId);
    }
    FUNC_0(VAR_1->AuthAttrs.rgAttr);
    for (VAR_2 = 0; VAR_2 < VAR_1->UnauthAttrs.cAttr; VAR_2++)
    {
        for (VAR_3 = 0; VAR_3 < VAR_1->UnauthAttrs.rgAttr[VAR_2].cValue; VAR_3++)
            FUNC_0(VAR_1->UnauthAttrs.rgAttr[VAR_2].rgValue[VAR_3].pbData);
        FUNC_0(VAR_1->UnauthAttrs.rgAttr[VAR_2].rgValue);
        FUNC_0(VAR_1->UnauthAttrs.rgAttr[VAR_2].pszObjId);
    }
    FUNC_0(VAR_1->UnauthAttrs.rgAttr);
}
