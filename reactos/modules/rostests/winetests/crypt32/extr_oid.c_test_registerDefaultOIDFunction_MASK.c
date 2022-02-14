
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LSTATUS ;
typedef char* LPSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int *) ;
 int FUNC_2 (int ,char*,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,char const*,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char const*,int ,char const*) ;

__attribute__((used)) static void FUNC_13(void)
{
    static const char VAR_10[] =
     "Software\\Microsoft\\Cryptography\\OID\\EncodingType %d\\%s\\DEFAULT";
    static const char VAR_11[] = "CertDllOpenStoreProv";
    char VAR_12[VAR_5];
    BOOL VAR_13;
    LSTATUS VAR_14;
    HKEY VAR_15;

    VAR_13 = FUNC_1(0, ((void*)0), 0, ((void*)0));
    FUNC_10(!VAR_13 && FUNC_3() == VAR_3,
     "Expected E_INVALIDARG, got %08x\n", FUNC_3());




    FUNC_7(0xdeadbeef);
    VAR_13 = FUNC_1(0, "CertDllOpenStoreProv", 0,
     VAR_9);
    if (!VAR_13 && FUNC_3() == VAR_0)
    {
        FUNC_11("Need admin rights\n");
        return;
    }
    FUNC_10(VAR_13, "CryptRegisterDefaultOIDFunction failed: %08x\n", FUNC_3());

    VAR_13 = FUNC_1(0, "CertDllOpenStoreProv", 0,
     VAR_9);
    FUNC_10(!VAR_13 && FUNC_3() == VAR_1,
     "Expected ERROR_FILE_EXISTS, got %08x\n", FUNC_3());

    VAR_13 = FUNC_1(0, "CertDllOpenStoreProv", 1,
     VAR_9);
    FUNC_10(!VAR_13 && FUNC_3() == VAR_1,
     "Expected ERROR_FILE_EXISTS, got %08x\n", FUNC_3());

    VAR_13 = FUNC_1(0, "CertDllOpenStoreProv", 1,
     VAR_8);
    FUNC_10(VAR_13, "CryptRegisterDefaultOIDFunction failed: %08x\n", FUNC_3());
    FUNC_12(VAR_12, VAR_10, 0, VAR_11);
    VAR_14 = FUNC_5(VAR_4, VAR_12, &VAR_15);
    FUNC_10(VAR_14 == 0, "Expected key to exist, RegOpenKeyA failed: %d\n", VAR_14);
    if (VAR_14 == 0)
    {
        static const CHAR VAR_16[] = "Dll";
        static const CHAR VAR_17[] = "bogus.dll";
        static const CHAR VAR_18[] = "bogus2.dll";
        CHAR VAR_19[VAR_5];
        DWORD VAR_20, VAR_21;
        LPSTR VAR_22;

        VAR_21 = FUNC_0(VAR_19);
        VAR_14 = FUNC_6(VAR_15, VAR_16, ((void*)0), &VAR_20, (LPBYTE)VAR_19, &VAR_21);
        FUNC_10(VAR_14 == 0,
         "Expected Dll value to exist, RegQueryValueExA failed: %d\n", VAR_14);
        FUNC_10(VAR_20 == VAR_6, "Expected type REG_MULTI_SZ, got %d\n", VAR_20);

        VAR_22 = VAR_19;
        FUNC_10(!FUNC_8(VAR_22, VAR_17), "Unexpected dll\n");
        VAR_22 += FUNC_9(VAR_22) + 1;
        FUNC_10(!FUNC_8(VAR_22, VAR_18), "Unexpected dll\n");
        FUNC_4(VAR_15);
    }

    VAR_13 = FUNC_2(0, "CertDllOpenStoreProv",
     VAR_9);
    FUNC_10(VAR_13, "CryptUnregisterDefaultOIDFunction failed: %08x\n",
     FUNC_3());
    VAR_13 = FUNC_2(0, "CertDllOpenStoreProv",
     VAR_8);
    FUNC_10(VAR_13, "CryptUnregisterDefaultOIDFunction failed: %08x\n",
     FUNC_3());

    VAR_13 = FUNC_2(0, "CertDllOpenStoreProv",
     VAR_9);
    FUNC_10(!VAR_13 && FUNC_3() == VAR_2,
     "Expected ERROR_FILE_NOT_FOUND, got %d\n", FUNC_3());


    VAR_13 = FUNC_1(VAR_7,
     "CertDllOpenStoreProv", 0, VAR_9);
    FUNC_10(VAR_13, "CryptRegisterDefaultOIDFunction failed\n");
    VAR_13 = FUNC_2(VAR_7,
     "CertDllOpenStoreProv", VAR_9);
    FUNC_10(VAR_13, "CryptUnregisterDefaultOIDFunction failed\n");
    VAR_13 = FUNC_2(VAR_7,
     "CertDllOpenStoreProv", VAR_9);
    FUNC_10(!VAR_13 && FUNC_3() == VAR_2,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
}
