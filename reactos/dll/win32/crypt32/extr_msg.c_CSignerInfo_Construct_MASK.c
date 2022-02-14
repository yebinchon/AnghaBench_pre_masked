
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_30__ {int Parameters; scalar_t__ pszObjId; } ;
struct TYPE_19__ {int Parameters; scalar_t__ pszObjId; } ;
struct TYPE_28__ {TYPE_12__ Algorithm; } ;
struct TYPE_29__ {TYPE_7__ SubjectPublicKeyInfo; int SerialNumber; int Issuer; } ;
struct TYPE_23__ {int SerialNumber; int Issuer; } ;
struct TYPE_26__ {int KeyId; TYPE_2__ IssuerSerialNumber; } ;
struct TYPE_27__ {scalar_t__ dwIdChoice; TYPE_5__ u; } ;
struct TYPE_22__ {int SerialNumber; int Issuer; } ;
struct TYPE_24__ {int KeyId; TYPE_1__ IssuerSerialNumber; } ;
struct TYPE_25__ {TYPE_3__ u; scalar_t__ dwIdChoice; } ;
struct TYPE_17__ {int Parameters; int pszObjId; } ;
struct TYPE_21__ {int UnauthAttrs; int AuthAttrs; TYPE_10__ HashAlgorithm; TYPE_9__ HashEncryptionAlgorithm; TYPE_4__ SignerId; void* dwVersion; } ;
struct TYPE_18__ {int Parameters; int pszObjId; } ;
struct TYPE_20__ {int cbSize; int cUnauthAttr; int cAuthAttr; TYPE_11__ HashAlgorithm; TYPE_8__* pCertInfo; TYPE_12__ HashEncryptionAlgorithm; TYPE_6__ SignerId; } ;
typedef int CRYPT_ATTRIBUTES ;
typedef TYPE_12__ CRYPT_ALGORITHM_IDENTIFIER ;
typedef TYPE_13__ CMSG_SIGNER_ENCODE_INFO_WITH_CMS ;
typedef int CMSG_SIGNER_ENCODE_INFO ;
typedef TYPE_14__ CMSG_CMS_SIGNER_INFO ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_2(CMSG_CMS_SIGNER_INFO *VAR_4,
 const CMSG_SIGNER_ENCODE_INFO_WITH_CMS *VAR_5)
{
    BOOL VAR_6;

    if (VAR_5->cbSize == sizeof(CMSG_SIGNER_ENCODE_INFO))
    {
        VAR_4->dwVersion = VAR_2;
        VAR_6 = FUNC_1(&VAR_4->SignerId.u.IssuerSerialNumber.Issuer,
         &VAR_5->pCertInfo->Issuer);
        if (VAR_6)
            VAR_6 = FUNC_1(
             &VAR_4->SignerId.u.IssuerSerialNumber.SerialNumber,
             &VAR_5->pCertInfo->SerialNumber);
        VAR_4->SignerId.dwIdChoice = VAR_0;
        VAR_4->HashEncryptionAlgorithm.pszObjId =
         VAR_5->pCertInfo->SubjectPublicKeyInfo.Algorithm.pszObjId;
        if (VAR_6)
            VAR_6 = FUNC_1(&VAR_4->HashEncryptionAlgorithm.Parameters,
             &VAR_5->pCertInfo->SubjectPublicKeyInfo.Algorithm.Parameters);
    }
    else
    {
        const CRYPT_ALGORITHM_IDENTIFIER *VAR_7;




        if (!VAR_5->SignerId.dwIdChoice)
        {
            VAR_4->dwVersion = VAR_2;
            VAR_6 = FUNC_1(&VAR_4->SignerId.u.IssuerSerialNumber.Issuer,
             &VAR_5->pCertInfo->Issuer);
            if (VAR_6)
                VAR_6 = FUNC_1(
                 &VAR_4->SignerId.u.IssuerSerialNumber.SerialNumber,
                 &VAR_5->pCertInfo->SerialNumber);
            VAR_4->SignerId.dwIdChoice = VAR_0;
        }
        else if (VAR_5->SignerId.dwIdChoice == VAR_0)
        {
            VAR_4->dwVersion = VAR_2;
            VAR_4->SignerId.dwIdChoice = VAR_0;
            VAR_6 = FUNC_1(&VAR_4->SignerId.u.IssuerSerialNumber.Issuer,
             &VAR_5->SignerId.u.IssuerSerialNumber.Issuer);
            if (VAR_6)
                VAR_6 = FUNC_1(
                 &VAR_4->SignerId.u.IssuerSerialNumber.SerialNumber,
                 &VAR_5->SignerId.u.IssuerSerialNumber.SerialNumber);
        }
        else
        {

            VAR_4->dwVersion = VAR_3;
            VAR_4->SignerId.dwIdChoice = VAR_1;
            VAR_6 = FUNC_1(&VAR_4->SignerId.u.KeyId,
             &VAR_5->SignerId.u.KeyId);
        }
        VAR_7 = VAR_5->HashEncryptionAlgorithm.pszObjId ?
         &VAR_5->HashEncryptionAlgorithm :
         &VAR_5->pCertInfo->SubjectPublicKeyInfo.Algorithm;
        VAR_4->HashEncryptionAlgorithm.pszObjId = VAR_7->pszObjId;
        if (VAR_6)
            VAR_6 = FUNC_1(&VAR_4->HashEncryptionAlgorithm.Parameters,
             &VAR_7->Parameters);
    }



    VAR_4->HashAlgorithm.pszObjId = VAR_5->HashAlgorithm.pszObjId;
    if (VAR_6)
        VAR_6 = FUNC_1(&VAR_4->HashAlgorithm.Parameters,
         &VAR_5->HashAlgorithm.Parameters);
    if (VAR_6)
        VAR_6 = FUNC_0(&VAR_4->AuthAttrs,
         (CRYPT_ATTRIBUTES *)&VAR_5->cAuthAttr);
    if (VAR_6)
        VAR_6 = FUNC_0(&VAR_4->UnauthAttrs,
         (CRYPT_ATTRIBUTES *)&VAR_5->cUnauthAttr);
    return VAR_6;
}
