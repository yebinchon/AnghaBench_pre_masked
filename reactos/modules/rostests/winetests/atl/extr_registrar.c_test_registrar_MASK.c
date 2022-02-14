
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;
typedef int WCHAR ;
typedef int LONG ;
typedef int IRegistrar ;
typedef int INT ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int ,int ,int ,int,int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,int *) ;
 int FUNC_13 (int ,char*,int *,int *,int*,int*) ;
 int FUNC_14 (int) ;
 int VAR_6 ;
 int FUNC_15 (int,char*,...) ;
 int FUNC_16 (char*) ;
 int VAR_7 ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void FUNC_18(void)
{
    IRegistrar *VAR_8 = ((void*)0);
    HRESULT VAR_9;
    INT VAR_10;
    WCHAR *VAR_11 = ((void*)0);

    if (!FUNC_3(FUNC_2("atl.dll"), "AtlAxAttachControl"))
    {
        FUNC_17("Old versions of atl.dll don't support binary values\n");
        return;
    }

    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_5, (void**)&VAR_8);
    if (FUNC_1(VAR_9))
    {
        FUNC_17("creating IRegistrar failed, hr = 0x%08X\n", VAR_9);
        return;
    }

    VAR_10 = FUNC_10(VAR_2, 0, VAR_7, -1, ((void*)0), 0);
    VAR_11 = FUNC_5(FUNC_4(), 0, VAR_10 * sizeof(WCHAR));
    if (VAR_11)
    {
        DWORD VAR_12;
        DWORD VAR_13;
        LONG VAR_14;
        HKEY VAR_15;
        BYTE VAR_16[4];

        FUNC_10(VAR_2, 0, VAR_7, -1, VAR_11, VAR_10);
        VAR_9 = FUNC_8(VAR_8, VAR_11);
        FUNC_15(VAR_9 == VAR_6, "StringRegister failed: %08x\n", VAR_9);
        if (FUNC_1(VAR_9))
        {
            FUNC_7(VAR_8);
            return;
        }

        VAR_14 = FUNC_12(VAR_4, "eebf73c4-50fd-478f-bbcf-db212221227a", &VAR_15);
        FUNC_15(VAR_14 == VAR_3, "error %d opening registry key\n", VAR_14);

        VAR_13 = sizeof(VAR_12);
        VAR_14 = FUNC_13(VAR_15, "dword_unquoted_hex", ((void*)0), ((void*)0), (BYTE*)&VAR_12, &VAR_13);
        FUNC_15(VAR_14 == VAR_3, "RegQueryValueExA failed, error %d\n", VAR_14);
        FUNC_15(VAR_12 != 0xA, "unquoted hex is not supposed to be preserved\n");

        VAR_13 = sizeof(VAR_12);
        VAR_14 = FUNC_13(VAR_15, "dword_quoted_hex", ((void*)0), ((void*)0), (BYTE*)&VAR_12, &VAR_13);
        FUNC_15(VAR_14 == VAR_3, "RegQueryValueExA failed, error %d\n", VAR_14);
        FUNC_15(VAR_12 != 0xA, "quoted hex is not supposed to be preserved\n");

        VAR_13 = sizeof(VAR_12);
        VAR_14 = FUNC_13(VAR_15, "dword_unquoted_dec", ((void*)0), ((void*)0), (BYTE*)&VAR_12, &VAR_13);
        FUNC_15(VAR_14 == VAR_3, "RegQueryValueExA failed, error %d\n", VAR_14);
        FUNC_15(VAR_12 == 1, "unquoted dec is not supposed to be %d\n", VAR_12);

        VAR_13 = sizeof(VAR_12);
        VAR_14 = FUNC_13(VAR_15, "dword_quoted_dec", ((void*)0), ((void*)0), (BYTE*)&VAR_12, &VAR_13);
        FUNC_15(VAR_14 == VAR_3, "RegQueryValueExA failed, error %d\n", VAR_14);
        FUNC_15(VAR_12 == 1, "quoted dec is not supposed to be %d\n", VAR_12);

        VAR_13 = 4;
        VAR_14 = FUNC_13(VAR_15, "binary_quoted", ((void*)0), ((void*)0), VAR_16, &VAR_13);
        FUNC_15(VAR_14 == VAR_3, "RegQueryValueA, failed, error %d\n", VAR_14);
        FUNC_15(VAR_16[0] == 0xde && VAR_16[1] == 0xad && VAR_16[2] == 0xbe && VAR_16[3] == 0xef,
            "binary quoted value was not preserved (it's 0x%02X%02X%02X%02X)\n",
            0xff & VAR_16[0], 0xff & VAR_16[1], 0xff & VAR_16[2], 0xff & VAR_16[3]);

        VAR_13 = 4;
        VAR_14 = FUNC_13(VAR_15, "binary_unquoted", ((void*)0), ((void*)0), VAR_16, &VAR_13);
        FUNC_15(VAR_14 == VAR_3, "RegQueryValueA, failed, error %d\n", VAR_14);
        FUNC_15(VAR_16[0] == 0xde && VAR_16[1] == 0xad && VAR_16[2] == 0xbe && VAR_16[3] == 0xef,
            "binary unquoted value was not preserved (it's 0x%02X%02X%02X%02X)\n",
            0xff & VAR_16[0], 0xff & VAR_16[1], 0xff & VAR_16[2], 0xff & VAR_16[3]);

        VAR_9 = FUNC_9(VAR_8, VAR_11);
        FUNC_15(FUNC_14(VAR_9), "IRegistrar_StringUnregister failed, hr = 0x%08X\n", VAR_9);
        FUNC_11(VAR_15);

        FUNC_6(FUNC_4(), 0, VAR_11);
    }
    else
        FUNC_16("allocating memory failed\n");

    FUNC_7(VAR_8);
}
