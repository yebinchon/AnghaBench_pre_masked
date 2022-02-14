
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__ UINT ;
typedef scalar_t__ LPITEMIDLIST ;
typedef int IShellFolder ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int *,int *,scalar_t__*,int *,scalar_t__*,int *) ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (int **) ;
 scalar_t__ FUNC_10 (scalar_t__*,int *,scalar_t__*,int ,int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__* FUNC_13 () ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (int ,scalar_t__*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void FUNC_17(void)
{
    LPITEMIDLIST VAR_6, VAR_7;
    IShellFolder *VAR_8;
    WCHAR VAR_9[VAR_3];
    WCHAR VAR_10[10];
    WCHAR *VAR_11;
    HRESULT VAR_12;
    BOOL VAR_13, VAR_14;

if (0)
{

    FUNC_10(((void*)0), ((void*)0), ((void*)0), 0, ((void*)0));
    VAR_10[0] = 0;
    FUNC_10(VAR_10, ((void*)0), ((void*)0), 0, ((void*)0));
}

    VAR_6 = (LPITEMIDLIST)0xdeadbeef;
    VAR_12 = FUNC_10(((void*)0), ((void*)0), &VAR_6, 0, ((void*)0));
    FUNC_14(FUNC_12(VAR_12 == VAR_1) ||
       VAR_12 == VAR_0, "failed %08x\n", VAR_12);
    FUNC_14(VAR_6 == 0, "expected null ptr, got %p\n", VAR_6);


    VAR_10[0] = 0;
    VAR_12 = FUNC_10(VAR_10, ((void*)0), &VAR_6, 0, ((void*)0));
    FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
    VAR_12 = FUNC_9(&VAR_8);
    FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
    VAR_12 = FUNC_7(VAR_8, ((void*)0), ((void*)0), VAR_10, ((void*)0), &VAR_7, ((void*)0));
    FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
    VAR_13 = FUNC_6(VAR_6, VAR_7);
    FUNC_14(VAR_13 == VAR_5, "expected equal idls\n");
    FUNC_5(VAR_6);
    FUNC_5(VAR_7);


    FUNC_4( VAR_9, VAR_3 );

    VAR_12 = FUNC_10(VAR_9, ((void*)0), &VAR_6, 0, ((void*)0));
    FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
    VAR_12 = FUNC_7(VAR_8, ((void*)0), ((void*)0), VAR_9, ((void*)0), &VAR_7, ((void*)0));
    FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);

    VAR_13 = FUNC_6(VAR_6, VAR_7);
    FUNC_14(VAR_13 == VAR_5, "expected equal idls\n");
    FUNC_5(VAR_6);
    FUNC_5(VAR_7);


    if (!&FUNC_15 || !FUNC_15( FUNC_0(), &VAR_14 )) VAR_14 = VAR_2;
    if (VAR_14)
    {
        UINT VAR_15;
        *VAR_9 = 0;
        VAR_15 = FUNC_2(VAR_9, VAR_3);
        FUNC_14(VAR_15 > 0, "GetSystemDirectoryW failed: %u\n", FUNC_1());
        VAR_12 = FUNC_10(VAR_9, ((void*)0), &VAR_6, 0, ((void*)0));
        FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
        *VAR_9 = 0;
        VAR_15 = FUNC_3(VAR_9, VAR_3);
        FUNC_14(VAR_15 > 0, "GetSystemWow64DirectoryW failed: %u\n", FUNC_1());
        VAR_12 = FUNC_10(VAR_9, ((void*)0), &VAR_7, 0, ((void*)0));
        FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
        VAR_13 = FUNC_6(VAR_6, VAR_7);
        FUNC_14(VAR_13 == VAR_2, "expected different idls\n");
        FUNC_5(VAR_6);
        FUNC_5(VAR_7);
    }

    FUNC_8(VAR_8);

    VAR_11 = FUNC_13();
    if (!VAR_11)
        FUNC_16("No empty cdrom drive found, skipping test\n");
    else
    {
        VAR_12 = FUNC_10(VAR_11, ((void*)0), &VAR_6, 0, ((void*)0));
        FUNC_14(VAR_12 == VAR_4, "failed %08x\n", VAR_12);
        if (FUNC_11(VAR_12)) FUNC_5(VAR_6);
    }
}
