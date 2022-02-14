
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_string ;
typedef int data ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int *,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int *,int*,int) ;
 int FUNC_4 (int ,int ,int ,int ,int *,int*) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int *,int,int ,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int * FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,char const*,int) ;
 int FUNC_15 (int *,char const*,int) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (char const*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_18(void)
{
    static const char VAR_11[] = "Well this is a fine how-do-you-do.";
    HCRYPTPROV VAR_12;
    HCRYPTKEY VAR_13, VAR_14;
    BOOL VAR_15;
    BYTE VAR_16[256], *VAR_17;
    DWORD VAR_18, VAR_19;

    FUNC_0(&VAR_12, VAR_10, ((void*)0), VAR_8,
     VAR_2);


    VAR_15 = FUNC_0(&VAR_12, VAR_10, ((void*)0), VAR_8,
     VAR_4);
    FUNC_16(VAR_15, "CryptAcquireContextA failed: %08x\n", FUNC_9());
    VAR_15 = FUNC_5(VAR_12, VAR_1, VAR_3, &VAR_13);
    FUNC_16(VAR_15, "CryptGenKey with CALG_RSA_KEYX failed with error %08x\n", FUNC_9());
    VAR_15 = FUNC_6(VAR_12, VAR_0, &VAR_14);
    FUNC_16(VAR_15, "CryptGetUserKey failed: %08x\n", FUNC_9());

    FUNC_15(VAR_16, VAR_11, FUNC_17(VAR_11) + 1);
    VAR_18 = FUNC_17(VAR_11) + 1;
    VAR_15 = FUNC_3(VAR_14, 0, VAR_9, 0, VAR_16, &VAR_18,
                          sizeof(VAR_16));
    FUNC_16(VAR_15 || FUNC_13(FUNC_9() == VAR_5 ) ||
       FUNC_13(FUNC_9() == VAR_6 ),
       "CryptEncrypt failed: %08x\n", FUNC_9());

    VAR_15 = FUNC_4(VAR_14, 0, VAR_7, 0, ((void*)0),
                            &VAR_19);
    FUNC_16(VAR_15, "CryptExportKey failed: %08x\n", FUNC_9());
    VAR_17 = FUNC_11(FUNC_10(), 0, VAR_19);
    VAR_15 = FUNC_4(VAR_14, 0, VAR_7, 0, VAR_17,
                            &VAR_19);
    FUNC_16(VAR_15, "CryptExportKey failed: %08x\n", FUNC_9());

    FUNC_2(VAR_14);
    FUNC_2(VAR_13);

    VAR_15 = FUNC_7(VAR_12, VAR_17, VAR_19, 0, 0, &VAR_14);
    FUNC_16(VAR_15, "CryptImportKey failed: %08x\n", FUNC_9());
    FUNC_12(FUNC_10(), 0, VAR_17);



    VAR_15 = FUNC_1(VAR_14, 0, VAR_9, 0, VAR_16, &VAR_18);
    FUNC_16(VAR_15 || FUNC_13(FUNC_9() == VAR_5 ) ||
       FUNC_13(FUNC_9() == VAR_6 ),
       "CryptDecrypt failed: %08x\n", FUNC_9());
    if (VAR_15)
    {
        FUNC_16(VAR_18 == sizeof(VAR_11), "unexpected size %d\n", VAR_18);
        FUNC_16(!FUNC_14(VAR_16, VAR_11, sizeof(VAR_11)), "unexpected value\n");
    }
    FUNC_2(VAR_14);
    FUNC_8(VAR_12, 0);

    FUNC_0(&VAR_12, VAR_10, ((void*)0), VAR_8,
     VAR_2);
}
