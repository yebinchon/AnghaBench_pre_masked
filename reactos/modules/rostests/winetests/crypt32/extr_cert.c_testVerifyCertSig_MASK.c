
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ cUnusedBits; int * pbData; scalar_t__ cbData; } ;
struct TYPE_10__ {scalar_t__ cbData; } ;
struct TYPE_11__ {TYPE_2__ Parameters; scalar_t__ pszObjId; } ;
struct TYPE_9__ {int pbData; int cbData; } ;
struct TYPE_14__ {TYPE_4__ Signature; TYPE_3__ SignatureAlgorithm; TYPE_1__ ToBeSigned; } ;
struct TYPE_13__ {int pbData; int cbData; } ;
typedef int * PCERT_PUBLIC_KEY_INFO ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef int * LPBYTE ;
typedef int HCRYPTPROV ;
typedef scalar_t__ DWORD ;
typedef TYPE_5__ CRYPT_DATA_BLOB ;
typedef TYPE_6__ CERT_SIGNED_CONTENT_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ,int *,int *,scalar_t__*) ;
 int FUNC_1 (int ,int ,int *,scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (int ,int ,TYPE_6__*,int ,int *,int **,scalar_t__*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(HCRYPTPROV VAR_7, const CRYPT_DATA_BLOB *VAR_8,
 LPCSTR VAR_9, const BYTE *VAR_10, DWORD VAR_11)
{
    CERT_SIGNED_CONTENT_INFO VAR_12;
    LPBYTE VAR_13 = ((void*)0);
    DWORD VAR_14 = 0;
    BOOL VAR_15;

    if (!&FUNC_8)
    {
        FUNC_9("no CryptEncodeObjectEx support\n");
        return;
    }
    VAR_15 = FUNC_1(0, 0, ((void*)0), 0, ((void*)0));
    FUNC_7(!VAR_15 && FUNC_2() == VAR_3,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_2());
    VAR_15 = FUNC_1(VAR_7, 0, ((void*)0), 0, ((void*)0));
    FUNC_7(!VAR_15 && FUNC_2() == VAR_3,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_2());
    VAR_15 = FUNC_1(VAR_7, VAR_5, ((void*)0), 0,
     ((void*)0));
    FUNC_7(!VAR_15 && (FUNC_2() == VAR_2 ||
     FUNC_2() == VAR_4),
     "Expected CRYPT_E_ASN1_EOD or OSS_BAD_ARG, got %08x\n", FUNC_2());
    VAR_12.ToBeSigned.cbData = VAR_8->cbData;
    VAR_12.ToBeSigned.pbData = VAR_8->pbData;
    VAR_12.SignatureAlgorithm.pszObjId = (LPSTR)VAR_9;
    VAR_12.SignatureAlgorithm.Parameters.cbData = 0;
    VAR_12.Signature.cbData = VAR_11;
    VAR_12.Signature.pbData = (BYTE *)VAR_10;
    VAR_12.Signature.cUnusedBits = 0;
    VAR_15 = FUNC_8(VAR_5, VAR_6, &VAR_12,
     VAR_1, ((void*)0), &VAR_13, &VAR_14);
    FUNC_7(VAR_15, "CryptEncodeObjectEx failed: %08x\n", FUNC_2());
    if (VAR_13)
    {
        PCERT_PUBLIC_KEY_INFO VAR_16 = ((void*)0);
        DWORD VAR_17;

        if (0)
        {

            VAR_15 = FUNC_1(VAR_7, VAR_5,
             VAR_13, VAR_14, ((void*)0));
        }
        FUNC_0(VAR_7, VAR_0, VAR_5,
         (LPSTR)VAR_9, 0, ((void*)0), ((void*)0), &VAR_17);
        VAR_16 = FUNC_4(FUNC_3(), 0, VAR_17);
        if (VAR_16)
        {
            VAR_15 = FUNC_0(VAR_7, VAR_0,
             VAR_5, (LPSTR)VAR_9, 0, ((void*)0), VAR_16,
             &VAR_17);
            FUNC_7(VAR_15, "CryptExportKey failed: %08x\n", FUNC_2());
            if (VAR_15)
            {
                VAR_15 = FUNC_1(VAR_7, VAR_5,
                 VAR_13, VAR_14, VAR_16);
                FUNC_7(VAR_15, "CryptVerifyCertificateSignature failed: %08x\n",
                 FUNC_2());
            }
            FUNC_5(FUNC_3(), 0, VAR_16);
        }
        FUNC_6(VAR_13);
    }
}
