
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * member_1; int member_0; } ;
struct TYPE_8__ {scalar_t__ pszObjId; TYPE_1__ member_1; int * member_0; } ;
struct TYPE_7__ {int cbData; int pbData; } ;
typedef scalar_t__ LPSTR ;
typedef scalar_t__ LPCSTR ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef scalar_t__ DWORD ;
typedef TYPE_2__ CRYPT_DATA_BLOB ;
typedef TYPE_3__ CRYPT_ALGORITHM_IDENTIFIER ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_3__*,int *,int *,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char*,scalar_t__,...) ;
 int FUNC_5 (int ,int ,int ,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_6(HCRYPTPROV VAR_5, const CRYPT_DATA_BLOB *VAR_6,
 LPCSTR VAR_7, BYTE *VAR_8, DWORD *VAR_9)
{
    BOOL VAR_10;
    DWORD VAR_11 = 0;
    CRYPT_ALGORITHM_IDENTIFIER VAR_12 = { ((void*)0), { 0, ((void*)0) } };
    HCRYPTKEY VAR_13;







    VAR_10 = FUNC_2(0, 0, 0, VAR_6->pbData, VAR_6->cbData,
     &VAR_12, ((void*)0), ((void*)0), &VAR_11);
    FUNC_4(!VAR_10 && FUNC_3() == VAR_2,
     "Expected NTE_BAD_ALGID, got %08x\n", FUNC_3());
    VAR_12.pszObjId = (LPSTR)VAR_7;
    VAR_10 = FUNC_2(0, 0, 0, VAR_6->pbData, VAR_6->cbData,
     &VAR_12, ((void*)0), ((void*)0), &VAR_11);
    FUNC_4(!VAR_10 &&
     (FUNC_3() == VAR_1 || FUNC_3() == VAR_2),
     "Expected ERROR_INVALID_PARAMETER or NTE_BAD_ALGID, got %08x\n",
     FUNC_3());
    VAR_10 = FUNC_2(0, VAR_0, 0, VAR_6->pbData,
     VAR_6->cbData, &VAR_12, ((void*)0), ((void*)0), &VAR_11);
    FUNC_4(!VAR_10 &&
     (FUNC_3() == VAR_1 || FUNC_3() == VAR_2),
     "Expected ERROR_INVALID_PARAMETER or NTE_BAD_ALGID, got %08x\n",
     FUNC_3());


    VAR_10 = FUNC_2(VAR_5, VAR_0, 0, VAR_6->pbData,
     VAR_6->cbData, &VAR_12, ((void*)0), ((void*)0), &VAR_11);
    FUNC_4(!VAR_10 && (FUNC_3() == VAR_3 || FUNC_3() ==
     VAR_4), "Expected NTE_BAD_KEYSET or NTE_NO_KEY, got %08x\n",
     FUNC_3());
    VAR_10 = FUNC_1(VAR_5, VAR_0, 0, &VAR_13);
    FUNC_4(VAR_10, "CryptGenKey failed: %08x\n", FUNC_3());
    if (VAR_10)
    {
        VAR_10 = FUNC_2(VAR_5, VAR_0, 0, VAR_6->pbData,
         VAR_6->cbData, &VAR_12, ((void*)0), ((void*)0), &VAR_11);
        FUNC_4(VAR_10, "CryptSignCertificate failed: %08x\n", FUNC_3());
        FUNC_4(VAR_11 <= *VAR_9, "Expected size <= %d, got %d\n", *VAR_9, VAR_11);
        if (VAR_10)
        {
            VAR_10 = FUNC_2(VAR_5, VAR_0, 0, VAR_6->pbData,
             VAR_6->cbData, &VAR_12, ((void*)0), VAR_8, &VAR_11);
            FUNC_4(VAR_10, "CryptSignCertificate failed: %08x\n", FUNC_3());
            if (VAR_10)
            {
                *VAR_9 = VAR_11;
                FUNC_5(VAR_5, VAR_6->pbData, VAR_6->cbData, VAR_8,
                 VAR_11);
            }
        }
        FUNC_0(VAR_13);
    }
}
