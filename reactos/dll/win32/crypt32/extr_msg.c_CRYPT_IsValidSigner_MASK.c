
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_23__ {int cbData; } ;
struct TYPE_21__ {int cbData; } ;
struct TYPE_20__ {int cbData; } ;
struct TYPE_22__ {TYPE_5__ Issuer; TYPE_4__ SerialNumber; } ;
struct TYPE_24__ {TYPE_7__ KeyId; TYPE_6__ IssuerSerialNumber; } ;
struct TYPE_25__ {int dwIdChoice; TYPE_8__ u; } ;
struct TYPE_18__ {int cbData; } ;
struct TYPE_17__ {int cbData; } ;
struct TYPE_19__ {TYPE_2__ Issuer; TYPE_1__ SerialNumber; } ;
struct TYPE_15__ {int pszObjId; } ;
struct TYPE_14__ {scalar_t__ pszObjId; } ;
struct TYPE_16__ {int cbSize; TYPE_11__ HashAlgorithm; int hCryptProv; TYPE_10__ HashEncryptionAlgorithm; TYPE_9__ SignerId; TYPE_3__* pCertInfo; } ;
typedef TYPE_12__ CMSG_SIGNER_ENCODE_INFO_WITH_CMS ;
typedef int CMSG_SIGNER_ENCODE_INFO ;
typedef int BOOL ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_3(const CMSG_SIGNER_ENCODE_INFO_WITH_CMS *VAR_4)
{
    if (VAR_4->cbSize != sizeof(CMSG_SIGNER_ENCODE_INFO) &&
     VAR_4->cbSize != sizeof(CMSG_SIGNER_ENCODE_INFO_WITH_CMS))
    {
        FUNC_2(VAR_1);
        return VAR_2;
    }
    if (VAR_4->cbSize == sizeof(CMSG_SIGNER_ENCODE_INFO))
    {
        if (!VAR_4->pCertInfo->SerialNumber.cbData)
        {
            FUNC_2(VAR_1);
            return VAR_2;
        }
        if (!VAR_4->pCertInfo->Issuer.cbData)
        {
            FUNC_2(VAR_1);
            return VAR_2;
        }
    }
    else if (VAR_4->cbSize == sizeof(CMSG_SIGNER_ENCODE_INFO_WITH_CMS))
    {
        switch (VAR_4->SignerId.dwIdChoice)
        {
        case 0:
            if (!VAR_4->pCertInfo->SerialNumber.cbData)
            {
                FUNC_2(VAR_1);
                return VAR_2;
            }
            if (!VAR_4->pCertInfo->Issuer.cbData)
            {
                FUNC_2(VAR_1);
                return VAR_2;
            }
            break;
        case 129:
            if (!VAR_4->SignerId.u.IssuerSerialNumber.SerialNumber.cbData)
            {
                FUNC_2(VAR_1);
                return VAR_2;
            }
            if (!VAR_4->SignerId.u.IssuerSerialNumber.Issuer.cbData)
            {
                FUNC_2(VAR_1);
                return VAR_2;
            }
            break;
        case 128:
            if (!VAR_4->SignerId.u.KeyId.cbData)
            {
                FUNC_2(VAR_1);
                return VAR_2;
            }
            break;
        default:
            FUNC_2(VAR_1);
        }
        if (VAR_4->HashEncryptionAlgorithm.pszObjId)
        {
            FUNC_1("CMSG_SIGNER_ENCODE_INFO with CMS fields unsupported\n");
            return VAR_2;
        }
    }
    if (!VAR_4->hCryptProv)
    {
        FUNC_2(VAR_1);
        return VAR_2;
    }
    if (!FUNC_0(VAR_4->HashAlgorithm.pszObjId))
    {
        FUNC_2(VAR_0);
        return VAR_2;
    }
    return VAR_3;
}
