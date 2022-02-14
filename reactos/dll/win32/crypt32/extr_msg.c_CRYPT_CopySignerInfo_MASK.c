
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cbData; } ;
struct TYPE_17__ {TYPE_1__ Parameters; scalar_t__ pszObjId; } ;
struct TYPE_16__ {scalar_t__ cbData; } ;
struct TYPE_11__ {TYPE_8__ SerialNumber; TYPE_8__ Issuer; } ;
struct TYPE_12__ {int KeyId; TYPE_2__ IssuerSerialNumber; } ;
struct TYPE_13__ {scalar_t__ dwIdChoice; TYPE_3__ u; } ;
struct TYPE_15__ {int UnauthAttrs; int AuthAttrs; TYPE_8__ EncryptedHash; TYPE_9__ HashEncryptionAlgorithm; TYPE_9__ HashAlgorithm; TYPE_4__ SignerId; int dwVersion; } ;
struct TYPE_14__ {int UnauthAttrs; int AuthAttrs; int EncryptedHash; int HashEncryptionAlgorithm; int HashAlgorithm; int SerialNumber; int Issuer; int dwVersion; } ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ CMSG_SIGNER_INFO ;
typedef TYPE_6__ CMSG_CMS_SIGNER_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,TYPE_9__*,int **) ;
 int FUNC_2 (int *,int *,int **) ;
 int FUNC_3 (int *,TYPE_8__*,int **) ;
 int FUNC_4 (int *,int *,int *,scalar_t__,int **) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,void*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_11(void *VAR_4, DWORD *VAR_5,
 const CMSG_CMS_SIGNER_INFO *VAR_6)
{
    DWORD VAR_7 = sizeof(CMSG_SIGNER_INFO), VAR_8 = 0;
    BOOL VAR_9;

    FUNC_9("(%p, %d, %p)\n", VAR_4, VAR_4 ? *VAR_5 : 0, VAR_6);

    if (VAR_6->SignerId.dwIdChoice == VAR_0)
    {
        VAR_7 += VAR_6->SignerId.u.IssuerSerialNumber.Issuer.cbData;
        VAR_7 += VAR_6->SignerId.u.IssuerSerialNumber.SerialNumber.cbData;
    }
    else
    {
        VAR_8 = FUNC_6(&VAR_6->SignerId.u.KeyId);
        VAR_7 += VAR_8;
    }
    if (VAR_6->HashAlgorithm.pszObjId)
        VAR_7 += FUNC_10(VAR_6->HashAlgorithm.pszObjId) + 1;
    VAR_7 += VAR_6->HashAlgorithm.Parameters.cbData;
    if (VAR_6->HashEncryptionAlgorithm.pszObjId)
        VAR_7 += FUNC_10(VAR_6->HashEncryptionAlgorithm.pszObjId) + 1;
    VAR_7 += VAR_6->HashEncryptionAlgorithm.Parameters.cbData;
    VAR_7 += VAR_6->EncryptedHash.cbData;

    VAR_7 = FUNC_0(VAR_7);
    VAR_7 += FUNC_5(&VAR_6->AuthAttrs);
    VAR_7 += FUNC_5(&VAR_6->UnauthAttrs);
    if (!VAR_4)
    {
        VAR_9 = VAR_3;
    }
    else if (*VAR_5 < VAR_7)
    {
        FUNC_8(VAR_1);
        VAR_9 = VAR_2;
    }
    else
    {
        LPBYTE VAR_10 = (BYTE *)VAR_4 + sizeof(CMSG_SIGNER_INFO);
        CMSG_SIGNER_INFO *VAR_11 = VAR_4;

        VAR_9 = VAR_3;
        VAR_11->dwVersion = VAR_6->dwVersion;
        if (VAR_6->SignerId.dwIdChoice == VAR_0)
        {
            FUNC_3(&VAR_11->Issuer,
             &VAR_6->SignerId.u.IssuerSerialNumber.Issuer, &VAR_10);
            FUNC_3(&VAR_11->SerialNumber,
             &VAR_6->SignerId.u.IssuerSerialNumber.SerialNumber, &VAR_10);
        }
        else
            VAR_9 = FUNC_4(&VAR_11->Issuer, &VAR_11->SerialNumber,
             &VAR_6->SignerId.u.KeyId, VAR_8, &VAR_10);
        if (VAR_9)
        {
            FUNC_1(&VAR_11->HashAlgorithm, &VAR_6->HashAlgorithm,
             &VAR_10);
            FUNC_1(&VAR_11->HashEncryptionAlgorithm,
             &VAR_6->HashEncryptionAlgorithm, &VAR_10);
            FUNC_3(&VAR_11->EncryptedHash, &VAR_6->EncryptedHash, &VAR_10);
            VAR_10 = FUNC_7(VAR_10);
            FUNC_2(&VAR_11->AuthAttrs, &VAR_6->AuthAttrs, &VAR_10);
            FUNC_2(&VAR_11->UnauthAttrs, &VAR_6->UnauthAttrs, &VAR_10);
        }
    }
    *VAR_5 = VAR_7;
    FUNC_9("returning %d\n", VAR_9);
    return VAR_9;
}
