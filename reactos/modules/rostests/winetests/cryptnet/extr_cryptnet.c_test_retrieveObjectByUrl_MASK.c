
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int certWithCRLDistPoint ;
typedef int aux ;
struct TYPE_9__ {int cBlob; TYPE_1__* rgBlob; } ;
struct TYPE_8__ {int cbSize; TYPE_2__* pLastSyncTime; int member_0; } ;
struct TYPE_7__ {scalar_t__ dwHighDateTime; scalar_t__ dwLowDateTime; int member_0; } ;
struct TYPE_6__ {int cbData; } ;
typedef int * PCCRL_CONTEXT ;
typedef scalar_t__ PCCERT_CONTEXT ;
typedef scalar_t__ HCERTSTORE ;
typedef TYPE_2__ FILETIME ;
typedef int DWORD ;
typedef TYPE_3__ CRYPT_RETRIEVE_AUX_INFO ;
typedef TYPE_4__ CRYPT_BLOB_ARRAY ;
typedef int BOOL ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,int *,int ,int ,...) ;
 int FUNC_6 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*,char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    BOOL VAR_12;
    char VAR_13[VAR_10], VAR_14[VAR_10 + 8];
    CRYPT_BLOB_ARRAY *VAR_15;
    PCCERT_CONTEXT VAR_16;
    PCCRL_CONTEXT VAR_17;
    HCERTSTORE VAR_18;
    CRYPT_RETRIEVE_AUX_INFO VAR_19 = { 0 };
    FILETIME VAR_20 = { 0 };

    FUNC_8(0xdeadbeef);
    VAR_12 = FUNC_5(((void*)0), ((void*)0), 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(!VAR_12 && (FUNC_7() == VAR_7 ||
                FUNC_7() == VAR_9),
       "got 0x%x/%u (expected ERROR_INVALID_PARAMETER or E_INVALIDARG)\n",
       FUNC_7(), FUNC_7());

    FUNC_10(VAR_13);
    FUNC_13(VAR_14, "file://%s", VAR_13);

    VAR_15 = (CRYPT_BLOB_ARRAY *)0xdeadbeef;
    VAR_12 = FUNC_5(VAR_14, ((void*)0), 0, 0, (void **)&VAR_15,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_12)
    {

        FUNC_14("File URLs not supported\n");
        return;
    }
    FUNC_11(VAR_12, "CryptRetrieveObjectByUrlA failed: %d\n", FUNC_7());
    FUNC_11(VAR_15 && VAR_15 != (CRYPT_BLOB_ARRAY *)0xdeadbeef,
     "Expected a valid pointer\n");
    if (VAR_15 && VAR_15 != (CRYPT_BLOB_ARRAY *)0xdeadbeef)
    {
        FUNC_11(VAR_15->cBlob == 1, "Expected 1 blob, got %d\n",
         VAR_15->cBlob);
        FUNC_11(VAR_15->rgBlob[0].cbData == sizeof(certWithCRLDistPoint),
         "Unexpected size %d\n", VAR_15->rgBlob[0].cbData);
        FUNC_4(VAR_15);
    }
    VAR_16 = (PCCERT_CONTEXT)0xdeadbeef;
    VAR_12 = FUNC_5(VAR_14, VAR_1, 0, 0,
     (void **)&VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_12, "CryptRetrieveObjectByUrlA failed: %d\n", FUNC_7());
    FUNC_11(VAR_16 && VAR_16 != (PCCERT_CONTEXT)0xdeadbeef, "Expected a cert\n");
    if (VAR_16 && VAR_16 != (PCCERT_CONTEXT)0xdeadbeef)
        FUNC_3(VAR_16);
    VAR_17 = (PCCRL_CONTEXT)0xdeadbeef;
    FUNC_8(0xdeadbeef);
    VAR_12 = FUNC_5(VAR_14, VAR_2, 0, 0, (void **)&VAR_17,
     ((void*)0), ((void*)0), ((void*)0), ((void*)0));



    FUNC_11(!VAR_12 && (FUNC_7() == VAR_5 ||
                FUNC_9(FUNC_7() == VAR_4 ||
                       FUNC_7() == VAR_11)),
        "got 0x%x/%u (expected CRYPT_E_NO_MATCH)\n", FUNC_7(), FUNC_7());


    if(!VAR_12 && FUNC_7() != VAR_4 &&
               FUNC_7() != VAR_11) {
        FUNC_11(VAR_17 == ((void*)0), "Expected CRL to be NULL\n");
    }

    if (VAR_17 && VAR_17 != (PCCRL_CONTEXT)0xdeadbeef)
        FUNC_2(VAR_17);
    VAR_18 = (HCERTSTORE)0xdeadbeef;
    VAR_12 = FUNC_5(VAR_14, VAR_0, 0, 0,
     &VAR_18, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_12, "CryptRetrieveObjectByUrlA failed: %d\n", FUNC_7());
    if (VAR_18 && VAR_18 != (HCERTSTORE)0xdeadbeef)
    {
        DWORD VAR_21 = 0;

        VAR_16 = ((void*)0);
        do {
            VAR_16 = FUNC_1(VAR_18, VAR_16);
            if (VAR_16)
                VAR_21++;
        } while (VAR_16);
        FUNC_11(VAR_21 == 1, "Expected 1 cert, got %d\n", VAR_21);
        FUNC_0(VAR_18, 0);
    }

    VAR_16 = (PCCERT_CONTEXT)0xdeadbeef;
    VAR_12 = FUNC_5(VAR_14, VAR_1,
     VAR_3, 0, (void **)&VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(VAR_12, "CryptRetrieveObjectByUrlA failed: %08x\n", FUNC_7());
    if (VAR_16 && VAR_16 != (PCCERT_CONTEXT)0xdeadbeef)
        FUNC_3(VAR_16);

    VAR_16 = (PCCERT_CONTEXT)0xdeadbeef;
    VAR_12 = FUNC_5(VAR_14, VAR_1, 0, 0,
     (void **)&VAR_16, ((void*)0), ((void*)0), ((void*)0), &VAR_19);

    FUNC_11(VAR_12 || FUNC_9(FUNC_7() == VAR_9),
       "got %u with 0x%x/%u (expected '!=0' or '0' with E_INVALIDARG)\n",
       VAR_12, FUNC_7(), FUNC_7());
    if (VAR_16 && VAR_16 != (PCCERT_CONTEXT)0xdeadbeef)
        FUNC_3(VAR_16);

    VAR_16 = (PCCERT_CONTEXT)0xdeadbeef;
    VAR_19.cbSize = sizeof(VAR_19);
    VAR_12 = FUNC_5(VAR_14, VAR_1, 0, 0,
     (void **)&VAR_16, ((void*)0), ((void*)0), ((void*)0), &VAR_19);

    FUNC_11(VAR_12 || FUNC_9(FUNC_7() == VAR_9),
       "got %u with 0x%x/%u (expected '!=0' or '0' with E_INVALIDARG)\n",
       VAR_12, FUNC_7(), FUNC_7());
    if (!VAR_12) {

        FUNC_6(VAR_13);
        FUNC_12("no usable CertificateContext\n");
        return;
    }
    FUNC_3(VAR_16);

    VAR_19.pLastSyncTime = &VAR_20;
    VAR_12 = FUNC_5(VAR_14, VAR_1, 0, 0,
     (void **)&VAR_16, ((void*)0), ((void*)0), ((void*)0), &VAR_19);
    FUNC_11(VAR_12, "CryptRetrieveObjectByUrlA failed: %08x\n", FUNC_7());
    FUNC_3(VAR_16);
    FUNC_11(VAR_20.dwLowDateTime || VAR_20.dwHighDateTime,
     "Expected last sync time to be set\n");
    FUNC_6(VAR_13);

    FUNC_8(0xdeadbeef);
    VAR_12 = FUNC_5(VAR_14, VAR_1,
     VAR_3, 0, (void **)&VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_11(!VAR_12 && (FUNC_7() == VAR_6 ||
     FUNC_7() == VAR_8),
     "Expected ERROR_FILE_NOT_FOUND or ERROR_PATH_NOT_FOUND, got %d\n",
     FUNC_7());
}
