
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cbData; } ;
struct TYPE_17__ {TYPE_1__ Parameters; scalar_t__ pszObjId; } ;
struct TYPE_16__ {scalar_t__ cbData; } ;
struct TYPE_12__ {TYPE_7__ SerialNumber; TYPE_7__ Issuer; } ;
struct TYPE_13__ {TYPE_7__ KeyId; TYPE_2__ IssuerSerialNumber; } ;
struct TYPE_14__ {scalar_t__ dwIdChoice; TYPE_3__ u; } ;
struct TYPE_15__ {int UnauthAttrs; int AuthAttrs; TYPE_7__ EncryptedHash; TYPE_9__ HashEncryptionAlgorithm; TYPE_9__ HashAlgorithm; TYPE_4__ SignerId; int dwVersion; } ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ CMSG_CMS_SIGNER_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_9__*,TYPE_9__*,int **) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (TYPE_7__*,TYPE_7__*,int **) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,void*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_9(void *VAR_4, DWORD *VAR_5,
 const CMSG_CMS_SIGNER_INFO *VAR_6)
{
    DWORD VAR_7 = sizeof(CMSG_CMS_SIGNER_INFO);
    BOOL VAR_8;

    FUNC_7("(%p, %d, %p)\n", VAR_4, VAR_4 ? *VAR_5 : 0, VAR_6);

    if (VAR_6->SignerId.dwIdChoice == VAR_0)
    {
        VAR_7 += VAR_6->SignerId.u.IssuerSerialNumber.Issuer.cbData;
        VAR_7 += VAR_6->SignerId.u.IssuerSerialNumber.SerialNumber.cbData;
    }
    else
        VAR_7 += VAR_6->SignerId.u.KeyId.cbData;
    if (VAR_6->HashAlgorithm.pszObjId)
        VAR_7 += FUNC_8(VAR_6->HashAlgorithm.pszObjId) + 1;
    VAR_7 += VAR_6->HashAlgorithm.Parameters.cbData;
    if (VAR_6->HashEncryptionAlgorithm.pszObjId)
        VAR_7 += FUNC_8(VAR_6->HashEncryptionAlgorithm.pszObjId) + 1;
    VAR_7 += VAR_6->HashEncryptionAlgorithm.Parameters.cbData;
    VAR_7 += VAR_6->EncryptedHash.cbData;

    VAR_7 = FUNC_0(VAR_7);
    VAR_7 += FUNC_4(&VAR_6->AuthAttrs);
    VAR_7 += FUNC_4(&VAR_6->UnauthAttrs);
    if (!VAR_4)
    {
        *VAR_5 = VAR_7;
        VAR_8 = VAR_3;
    }
    else if (*VAR_5 < VAR_7)
    {
        *VAR_5 = VAR_7;
        FUNC_6(VAR_1);
        VAR_8 = VAR_2;
    }
    else
    {
        LPBYTE VAR_9 = (BYTE *)VAR_4 + sizeof(CMSG_CMS_SIGNER_INFO);
        CMSG_CMS_SIGNER_INFO *VAR_10 = VAR_4;

        VAR_10->dwVersion = VAR_6->dwVersion;
        VAR_10->SignerId.dwIdChoice = VAR_6->SignerId.dwIdChoice;
        if (VAR_6->SignerId.dwIdChoice == VAR_0)
        {
            FUNC_3(&VAR_10->SignerId.u.IssuerSerialNumber.Issuer,
             &VAR_6->SignerId.u.IssuerSerialNumber.Issuer, &VAR_9);
            FUNC_3(&VAR_10->SignerId.u.IssuerSerialNumber.SerialNumber,
             &VAR_6->SignerId.u.IssuerSerialNumber.SerialNumber, &VAR_9);
        }
        else
            FUNC_3(&VAR_10->SignerId.u.KeyId, &VAR_6->SignerId.u.KeyId, &VAR_9);
        FUNC_1(&VAR_10->HashAlgorithm, &VAR_6->HashAlgorithm,
         &VAR_9);
        FUNC_1(&VAR_10->HashEncryptionAlgorithm,
         &VAR_6->HashEncryptionAlgorithm, &VAR_9);
        FUNC_3(&VAR_10->EncryptedHash, &VAR_6->EncryptedHash, &VAR_9);
        VAR_9 = FUNC_5(VAR_9);
        FUNC_2(&VAR_10->AuthAttrs, &VAR_6->AuthAttrs, &VAR_9);
        FUNC_2(&VAR_10->UnauthAttrs, &VAR_6->UnauthAttrs, &VAR_9);
        VAR_8 = VAR_3;
    }
    FUNC_7("returning %d\n", VAR_8);
    return VAR_8;
}
