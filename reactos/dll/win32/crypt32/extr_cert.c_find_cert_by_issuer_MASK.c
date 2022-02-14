
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_33__ {TYPE_6__* pCertInfo; int dwCertEncodingType; } ;
struct TYPE_24__ {scalar_t__ cbData; } ;
struct TYPE_27__ {TYPE_13__ DirectoryName; } ;
struct TYPE_32__ {scalar_t__ dwAltNameChoice; TYPE_3__ u; } ;
struct TYPE_25__ {int cbData; int pbData; } ;
struct TYPE_31__ {TYPE_1__ Value; } ;
struct TYPE_28__ {int SerialNumber; int Issuer; } ;
struct TYPE_29__ {int KeyId; TYPE_4__ IssuerSerialNumber; } ;
struct TYPE_22__ {TYPE_5__ u; void* dwIdChoice; } ;
struct TYPE_30__ {TYPE_10__ Issuer; int rgExtension; int cExtension; } ;
struct TYPE_26__ {size_t cAltEntry; TYPE_8__* rgAltEntry; } ;
struct TYPE_23__ {TYPE_13__ KeyId; TYPE_13__ AuthorityCertSerialNumber; TYPE_2__ AuthorityCertIssuer; TYPE_13__ CertSerialNumber; TYPE_13__ CertIssuer; } ;
typedef TYPE_7__* PCERT_EXTENSION ;
typedef TYPE_8__* PCERT_ALT_NAME_ENTRY ;
typedef TYPE_9__* PCCERT_CONTEXT ;
typedef int HCERTSTORE ;
typedef size_t DWORD ;
typedef int CRYPT_INTEGER_BLOB ;
typedef int CRYPT_HASH_BLOB ;
typedef int CERT_NAME_BLOB ;
typedef TYPE_10__ CERT_ID ;
typedef TYPE_11__ CERT_AUTHORITY_KEY_ID_INFO ;
typedef TYPE_11__ CERT_AUTHORITY_KEY_ID2_INFO ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int *,TYPE_11__**,size_t*) ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_11__*) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_9__* FUNC_4 (int ,TYPE_9__*,int ,size_t,size_t,TYPE_10__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,TYPE_13__*,int) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static PCCERT_CONTEXT FUNC_6(HCERTSTORE VAR_14, DWORD VAR_15,
 DWORD VAR_16, const void *VAR_17, PCCERT_CONTEXT VAR_18)
{
    BOOL VAR_19;
    PCCERT_CONTEXT VAR_20 = ((void*)0), VAR_21 = VAR_17;
    PCERT_EXTENSION VAR_22;
    DWORD VAR_23;

    if ((VAR_22 = FUNC_0(VAR_12,
     VAR_21->pCertInfo->cExtension, VAR_21->pCertInfo->rgExtension)))
    {
        CERT_AUTHORITY_KEY_ID_INFO *VAR_24;

        VAR_19 = FUNC_1(VAR_21->dwCertEncodingType,
         VAR_8, VAR_22->Value.pbData, VAR_22->Value.cbData,
         VAR_5 | VAR_6, ((void*)0),
         &VAR_24, &VAR_23);
        if (VAR_19)
        {
            CERT_ID VAR_25;

            if (VAR_24->CertIssuer.cbData && VAR_24->CertSerialNumber.cbData)
            {
                VAR_25.dwIdChoice = VAR_3;
                FUNC_5(&VAR_25.u.IssuerSerialNumber.Issuer, &VAR_24->CertIssuer,
                 sizeof(CERT_NAME_BLOB));
                FUNC_5(&VAR_25.u.IssuerSerialNumber.SerialNumber,
                 &VAR_24->CertSerialNumber, sizeof(CRYPT_INTEGER_BLOB));
            }
            else if (VAR_24->KeyId.cbData)
            {
                VAR_25.dwIdChoice = VAR_4;
                FUNC_5(&VAR_25.u.KeyId, &VAR_24->KeyId, sizeof(CRYPT_HASH_BLOB));
            }
            else
                VAR_19 = VAR_7;
            if (VAR_19)
                VAR_20 = FUNC_4(VAR_14, VAR_18,
                 VAR_10, VAR_15, VAR_16, &VAR_25);
            FUNC_3(VAR_24);
        }
    }
    else if ((VAR_22 = FUNC_0(VAR_13,
     VAR_21->pCertInfo->cExtension, VAR_21->pCertInfo->rgExtension)))
    {
        CERT_AUTHORITY_KEY_ID2_INFO *VAR_26;

        VAR_19 = FUNC_1(VAR_21->dwCertEncodingType,
         VAR_9, VAR_22->Value.pbData, VAR_22->Value.cbData,
         VAR_5 | VAR_6, ((void*)0),
         &VAR_26, &VAR_23);
        if (VAR_19)
        {
            CERT_ID VAR_27;

            if (VAR_26->AuthorityCertIssuer.cAltEntry &&
             VAR_26->AuthorityCertSerialNumber.cbData)
            {
                PCERT_ALT_NAME_ENTRY VAR_28 = ((void*)0);
                DWORD VAR_29;

                for (VAR_29 = 0; !VAR_28 &&
                 VAR_29 < VAR_26->AuthorityCertIssuer.cAltEntry; VAR_29++)
                    if (VAR_26->AuthorityCertIssuer.rgAltEntry[VAR_29].dwAltNameChoice
                     == VAR_0)
                        VAR_28 =
                         &VAR_26->AuthorityCertIssuer.rgAltEntry[VAR_29];
                if (VAR_28)
                {
                    VAR_27.dwIdChoice = VAR_3;
                    FUNC_5(&VAR_27.u.IssuerSerialNumber.Issuer,
                     &VAR_28->u.DirectoryName, sizeof(CERT_NAME_BLOB));
                    FUNC_5(&VAR_27.u.IssuerSerialNumber.SerialNumber,
                     &VAR_26->AuthorityCertSerialNumber,
                     sizeof(CRYPT_INTEGER_BLOB));
                }
                else
                {
                    FUNC_2("no supported name type in authority key id2\n");
                    VAR_19 = VAR_7;
                }
            }
            else if (VAR_26->KeyId.cbData)
            {
                VAR_27.dwIdChoice = VAR_4;
                FUNC_5(&VAR_27.u.KeyId, &VAR_26->KeyId, sizeof(CRYPT_HASH_BLOB));
            }
            else
                VAR_19 = VAR_7;
            if (VAR_19)
                VAR_20 = FUNC_4(VAR_14, VAR_18,
                 VAR_10, VAR_15, VAR_16, &VAR_27);
            FUNC_3(VAR_26);
        }
    }
    else
       VAR_20 = FUNC_4(VAR_14, VAR_18,
        VAR_11, VAR_1 | VAR_2,
        VAR_16, &VAR_21->pCertInfo->Issuer);
    return VAR_20;
}
