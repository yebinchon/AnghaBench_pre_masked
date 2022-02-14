
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cUnusedBits; int * pbData; void* cbData; } ;
struct TYPE_11__ {scalar_t__ cbData; } ;
struct TYPE_12__ {TYPE_2__ Parameters; scalar_t__ pszObjId; } ;
struct TYPE_10__ {int cbData; int * pbData; } ;
struct TYPE_15__ {TYPE_4__ Signature; TYPE_3__ SignatureAlgorithm; TYPE_1__ ToBeSigned; } ;
struct TYPE_14__ {int cbData; int * pbData; int * member_1; int member_0; } ;
typedef int * PCERT_PUBLIC_KEY_INFO ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef int * LPBYTE ;
typedef int HCRYPTPROV ;
typedef void* DWORD ;
typedef TYPE_5__ CRYPT_DATA_BLOB ;
typedef TYPE_6__ CERT_SIGNED_CONTENT_INFO ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,scalar_t__,int ,int *,int *,void**) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,void*) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int ,int ,TYPE_6__*,int ,int *,int **,void**) ;
 int FUNC_8 (int ,int ,int ,TYPE_5__*,int ,int *,int ,int *) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(HCRYPTPROV VAR_11, const CRYPT_DATA_BLOB *VAR_12,
 LPCSTR VAR_13, const BYTE *VAR_14, DWORD VAR_15)
{
    CERT_SIGNED_CONTENT_INFO VAR_16;
    LPBYTE VAR_17 = ((void*)0);
    DWORD VAR_18 = 0;
    BOOL VAR_19;

    if (!&FUNC_8)
    {
        FUNC_9("no CryptVerifyCertificateSignatureEx support\n");
        return;
    }
    if (!&FUNC_7)
    {
        FUNC_9("no CryptEncodeObjectEx support\n");
        return;
    }
    VAR_19 = FUNC_8(0, 0, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_19 && FUNC_1() == VAR_7,
     "Expected E_INVALIDARG, got %08x\n", FUNC_1());
    VAR_19 = FUNC_8(VAR_11, 0, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_19 && FUNC_1() == VAR_7,
     "Expected E_INVALIDARG, got %08x\n", FUNC_1());
    VAR_19 = FUNC_8(VAR_11, VAR_9, 0, ((void*)0), 0,
     ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_19 && FUNC_1() == VAR_7,
     "Expected E_INVALIDARG, got %08x\n", FUNC_1());




    VAR_16.ToBeSigned.cbData = VAR_12->cbData;
    VAR_16.ToBeSigned.pbData = VAR_12->pbData;
    VAR_16.SignatureAlgorithm.pszObjId = (LPSTR)VAR_13;
    VAR_16.SignatureAlgorithm.Parameters.cbData = 0;
    VAR_16.Signature.cbData = VAR_15;
    VAR_16.Signature.pbData = (BYTE *)VAR_14;
    VAR_16.Signature.cUnusedBits = 0;
    VAR_19 = FUNC_7(VAR_9, VAR_10, &VAR_16,
     VAR_1, ((void*)0), &VAR_17, &VAR_18);
    FUNC_6(VAR_19, "CryptEncodeObjectEx failed: %08x\n", FUNC_1());
    if (VAR_17)
    {
        CRYPT_DATA_BLOB VAR_20 = { 0, ((void*)0) };
        PCERT_PUBLIC_KEY_INFO VAR_21 = ((void*)0);

        VAR_19 = FUNC_8(VAR_11, VAR_9,
         VAR_6, &VAR_20, 0, ((void*)0), 0, ((void*)0));
        FUNC_6(!VAR_19 && FUNC_1() == VAR_3,
         "Expected CRYPT_E_ASN1_EOD, got %08x\n", FUNC_1());
        VAR_20.cbData = 1;
        VAR_20.pbData = (void *)0xdeadbeef;
        VAR_19 = FUNC_8(VAR_11, VAR_9,
         VAR_6, &VAR_20, 0, ((void*)0), 0, ((void*)0));
        FUNC_6(!VAR_19 && (FUNC_1() == VAR_8 ||
                    FUNC_1() == VAR_3 ||
                    FUNC_1() == VAR_2 ),
         "Expected STATUS_ACCESS_VIOLATION, CRYPT_E_ASN1_EOD, OR CRYPT_E_ASN1_BADTAG, got %08x\n",
         FUNC_1());

        VAR_20.cbData = VAR_18;
        VAR_20.pbData = VAR_17;
        VAR_19 = FUNC_8(VAR_11, VAR_9,
         VAR_6, &VAR_20, 0, ((void*)0), 0, ((void*)0));
        FUNC_6(!VAR_19 && FUNC_1() == VAR_7,
         "Expected E_INVALIDARG, got %08x\n", FUNC_1());
        VAR_19 = FUNC_8(VAR_11, VAR_9,
         VAR_6, &VAR_20,
         VAR_4, ((void*)0), 0, ((void*)0));
        FUNC_6(!VAR_19 && FUNC_1() == VAR_7,
         "Expected E_INVALIDARG, got %08x\n", FUNC_1());





        FUNC_0(VAR_11, VAR_0, VAR_9,
         (LPSTR)VAR_13, 0, ((void*)0), ((void*)0), &VAR_18);
        VAR_21 = FUNC_3(FUNC_2(), 0, VAR_18);
        if (VAR_21)
        {
            VAR_19 = FUNC_0(VAR_11, VAR_0,
             VAR_9, (LPSTR)VAR_13, 0, ((void*)0), VAR_21, &VAR_18);
            FUNC_6(VAR_19, "CryptExportKey failed: %08x\n", FUNC_1());
            if (VAR_19)
            {
                VAR_19 = FUNC_8(VAR_11, VAR_9,
                 VAR_6, &VAR_20,
                 VAR_5, VAR_21, 0, ((void*)0));
                FUNC_6(VAR_19, "CryptVerifyCertificateSignatureEx failed: %08x\n",
                 FUNC_1());
            }
            FUNC_4(FUNC_2(), 0, VAR_21);
        }
        FUNC_5(VAR_17);
    }
}
