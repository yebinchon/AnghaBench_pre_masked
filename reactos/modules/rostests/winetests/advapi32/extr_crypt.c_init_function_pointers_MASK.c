
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;

__attribute__((used)) static void FUNC_2(void)
{
    HMODULE VAR_33 = FUNC_0("advapi32.dll");

    VAR_0 = (void*)FUNC_1(VAR_33, "CryptAcquireContextA");
    VAR_10 = (void*)FUNC_1(VAR_33, "CryptEnumProviderTypesA");
    VAR_11 = (void*)FUNC_1(VAR_33, "CryptEnumProvidersA");
    VAR_15 = (void*)FUNC_1(VAR_33, "CryptGetDefaultProviderA");
    VAR_23 = (void*)FUNC_1(VAR_33, "CryptReleaseContext");
    VAR_27 = (void*)FUNC_1(VAR_33, "CryptSetProviderExA");
    VAR_2 = (void*)FUNC_1(VAR_33, "CryptCreateHash");
    VAR_5 = (void*)FUNC_1(VAR_33, "CryptDestroyHash");
    VAR_14 = (void*)FUNC_1(VAR_33, "CryptGenRandom");
    VAR_1 = (void*)FUNC_1(VAR_33, "CryptContextAddRef");
    VAR_13 = (void*)FUNC_1(VAR_33, "CryptGenKey");
    VAR_6 = (void*)FUNC_1(VAR_33, "CryptDestroyKey");
    VAR_3 = (void*)FUNC_1(VAR_33, "CryptDecrypt");
    VAR_4 = (void*)FUNC_1(VAR_33, "CryptDeriveKey");
    VAR_7 = (void*)FUNC_1(VAR_33, "CryptDuplicateHash");
    VAR_8 = (void*)FUNC_1(VAR_33, "CryptDuplicateKey");
    VAR_9 = (void*)FUNC_1(VAR_33, "CryptEncrypt");
    VAR_12 = (void*)FUNC_1(VAR_33, "CryptExportKey");
    VAR_16 = (void*)FUNC_1(VAR_33, "CryptGetHashParam");
    VAR_17 = (void*)FUNC_1(VAR_33, "CryptGetKeyParam");
    VAR_18 = (void*)FUNC_1(VAR_33, "CryptGetProvParam");
    VAR_19 = (void*)FUNC_1(VAR_33, "CryptGetUserKey");
    VAR_20 = (void*)FUNC_1(VAR_33, "CryptHashData");
    VAR_21 = (void*)FUNC_1(VAR_33, "CryptHashSessionKey");
    VAR_22 = (void*)FUNC_1(VAR_33, "CryptImportKey");
    VAR_28 = (void*)FUNC_1(VAR_33, "CryptSignHashW");
    VAR_24 = (void*)FUNC_1(VAR_33, "CryptSetHashParam");
    VAR_25 = (void*)FUNC_1(VAR_33, "CryptSetKeyParam");
    VAR_26 = (void*)FUNC_1(VAR_33, "CryptSetProvParam");
    VAR_29 = (void*)FUNC_1(VAR_33, "CryptVerifySignatureW");
    VAR_30 = (void*)FUNC_1(VAR_33, "SystemFunction004");
    VAR_31 = (void*)FUNC_1(VAR_33, "SystemFunction005");
    VAR_32 = (void*)FUNC_1(VAR_33, "SystemFunction036");
}
