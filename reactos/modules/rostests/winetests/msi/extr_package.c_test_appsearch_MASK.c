
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int prop ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int CHAR ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int,char*,int *,int*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int ,int const*,scalar_t__) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int,char*) ;
 int FUNC_11 (int,char*,int,char*,char*,int) ;
 int FUNC_12 (int,char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int *) ;
 int VAR_7 ;
 int FUNC_19 (int,char*,...) ;
 scalar_t__ FUNC_20 (int,int*) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char const*) ;

__attribute__((used)) static void FUNC_23(void)
{
    MSIHANDLE VAR_8;
    UINT VAR_9;
    MSIHANDLE VAR_10;
    CHAR VAR_11[VAR_5];
    DWORD VAR_12;
    HKEY VAR_13;
    const char VAR_14[] = "%systemroot%\\system32\\notepad.exe";

    VAR_10 = FUNC_15();
    FUNC_19 ( VAR_10, "failed to create package database\n" );

    FUNC_13( VAR_10 );
    FUNC_9( VAR_10, "'WEBBROWSERPROG', 'NewSignature1'" );
    FUNC_9( VAR_10, "'NOTEPAD', 'NewSignature2'" );
    FUNC_9( VAR_10, "'REGEXPANDVAL', 'NewSignature3'" );

    FUNC_16( VAR_10 );
    FUNC_11( VAR_10, "NewSignature1", 0, "htmlfile\\shell\\open\\command", "", 1 );

    VAR_9 = FUNC_6(VAR_2, "Software\\Winetest_msi", 0, ((void*)0), 0, VAR_4, ((void*)0), &VAR_13, ((void*)0));
    FUNC_19( VAR_9 == VAR_1, "Could not create key: %d.\n", VAR_9 );
    VAR_9 = FUNC_8(VAR_13, ((void*)0), 0, VAR_6, (const BYTE*)VAR_14, FUNC_22(VAR_14) + 1);
    FUNC_19( VAR_9 == VAR_1, "Could not set key value: %d.\n", VAR_9);
    FUNC_5(VAR_13);
    FUNC_11( VAR_10, "NewSignature3", 1, "Software\\Winetest_msi", "", 1 );

    FUNC_14( VAR_10 );
    FUNC_10( VAR_10, "'NewSignature2', 0, 'c:\\windows\\system32', 0" );

    FUNC_17( VAR_10 );
    FUNC_12( VAR_10, "'NewSignature1', 'FileName', '', '', '', '', '', '', ''" );
    FUNC_12( VAR_10, "'NewSignature2', 'NOTEPAD.EXE|notepad.exe', '', '', '', '', '', '', ''" );
    FUNC_12( VAR_10, "'NewSignature3', 'NOTEPAD.EXE|notepad.exe', '', '', '', '', '', '', ''" );

    VAR_9 = FUNC_20( VAR_10, &VAR_8 );
    if (VAR_9 == VAR_0)
    {
        FUNC_21("Not enough rights to perform tests\n");
        FUNC_0(VAR_7);
        return;
    }
    FUNC_19( VAR_9 == VAR_1, "failed to create package %u\n", VAR_9 );
    FUNC_1( VAR_10 );
    if (VAR_9 != VAR_1)
        goto done;

    FUNC_4(VAR_3, ((void*)0));

    VAR_9 = FUNC_2( VAR_8, "AppSearch" );
    FUNC_19( VAR_9 == VAR_1, "AppSearch failed: %d\n", VAR_9);

    VAR_12 = sizeof(VAR_11);
    VAR_9 = FUNC_3( VAR_8, "WEBBROWSERPROG", VAR_11, &VAR_12 );
    FUNC_19( VAR_9 == VAR_1, "get property failed: %d\n", VAR_9);
    FUNC_19( FUNC_18(VAR_11) != 0, "Expected non-zero length\n");

    VAR_12 = sizeof(VAR_11);
    VAR_9 = FUNC_3( VAR_8, "NOTEPAD", VAR_11, &VAR_12 );
    FUNC_19( VAR_9 == VAR_1, "get property failed: %d\n", VAR_9);

    VAR_12 = sizeof(VAR_11);
    VAR_9 = FUNC_3( VAR_8, "REGEXPANDVAL", VAR_11, &VAR_12 );
    FUNC_19( VAR_9 == VAR_1, "get property failed: %d\n", VAR_9);
    FUNC_19( FUNC_18(VAR_11) != 0, "Expected non-zero length\n");

done:
    FUNC_1( VAR_8 );
    FUNC_0(VAR_7);
    FUNC_7(VAR_2, "Software\\Winetest_msi");
}
