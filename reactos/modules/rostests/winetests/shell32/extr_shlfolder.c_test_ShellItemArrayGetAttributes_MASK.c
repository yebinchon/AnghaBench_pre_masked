
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int SFGAOF ;
typedef int LPITEMIDLIST ;
typedef scalar_t__ LPCITEMIDLIST ;
typedef int IShellItemArray ;
typedef int IShellFolder ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,char*,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int,int*) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (char*) ;
 int VAR_2 ;
 int FUNC_10 (int **) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,char*,int) ;
 int FUNC_16 (int,scalar_t__*,int **) ;
 int VAR_7 ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void FUNC_18(void)
{
    IShellItemArray *VAR_8, *VAR_9, *VAR_10, *VAR_11;
    IShellFolder *VAR_12;
    LPCITEMIDLIST VAR_13[5];
    SFGAOF VAR_14;
    HRESULT VAR_15;
    WCHAR VAR_16[VAR_1];
    WCHAR VAR_17[VAR_1];
    UINT VAR_18;
    static const WCHAR VAR_19[] = {'t','e','s','t','d','i','r',0};
    static const WCHAR VAR_20[] = {'t','e','s','t','d','i','r','\\','t','e','s','t','d','i','r','2',0};
    static const WCHAR VAR_21[] = {'t','e','s','t','d','i','r','\\','t','e','s','t','d','i','r','3',0};
    static const WCHAR VAR_22[] = {'t','e','s','t','d','i','r','\\','t','e','s','t','1','.','t','x','t',0};
    static const WCHAR VAR_23[] = {'t','e','s','t','d','i','r','\\','t','e','s','t','2','.','t','x','t',0};
    static const WCHAR *VAR_24[5] = { VAR_19, VAR_20, VAR_21, VAR_22, VAR_23 };

    if(!VAR_7)
    {
        FUNC_17("No SHCreateShellItemArrayFromShellItem, skipping test...\n");
        return;
    }

    FUNC_2();
    FUNC_1(".\\testdir\\testdir3", ((void*)0));

    FUNC_10(&VAR_12);

    FUNC_3(VAR_1, VAR_16);
    FUNC_14(VAR_16);

    for(VAR_18 = 0; VAR_18 < 5; VAR_18++)
    {
        FUNC_13(VAR_17, VAR_16);
        FUNC_12(VAR_17, VAR_24[VAR_18]);
        VAR_15 = FUNC_5(VAR_12, ((void*)0), ((void*)0), VAR_17, ((void*)0), (LPITEMIDLIST*)&VAR_13[VAR_18], ((void*)0));
        FUNC_15(VAR_15 == VAR_6, "got 0x%08x\n", VAR_15);
    }
    FUNC_6(VAR_12);

    VAR_15 = FUNC_16(2, VAR_13, &VAR_9);
    FUNC_15(VAR_15 == VAR_6, "got 0x%08x\n", VAR_15);
    VAR_15 = FUNC_16(2, &VAR_13[1], &VAR_10);
    FUNC_15(VAR_15 == VAR_6, "got 0x%08x\n", VAR_15);
    VAR_15 = FUNC_16(2, &VAR_13[3], &VAR_8);
    FUNC_15(VAR_15 == VAR_6, "got 0x%08x\n", VAR_15);
    VAR_15 = FUNC_16(4, &VAR_13[1], &VAR_11);
    FUNC_15(VAR_15 == VAR_6, "got 0x%08x\n", VAR_15);

    for(VAR_18 = 0; VAR_18 < 5; VAR_18++)
        FUNC_4((LPITEMIDLIST)VAR_13[VAR_18]);


    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_9, VAR_3, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_6 || FUNC_11(VAR_15 == VAR_0) , "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == VAR_2 || FUNC_11(VAR_14 == 0) , "Got 0x%08x\n", VAR_14);
    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_9, VAR_4, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_6 || FUNC_11(VAR_15 == VAR_0) , "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == VAR_2 || FUNC_11(VAR_14 == 0) , "Got 0x%08x\n", VAR_14);


    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_10, VAR_3, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_6, "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == VAR_2, "Got 0x%08x\n", VAR_14);
    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_8, VAR_3, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_5 || FUNC_11(VAR_15 == VAR_6) , "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == 0, "Got 0x%08x\n", VAR_14);
    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_11, VAR_3, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_5 || FUNC_11(VAR_15 == VAR_6) , "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == 0, "Got 0x%08x\n", VAR_14);
    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_10, VAR_4, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_6, "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == VAR_2, "Got 0x%08x\n", VAR_14);
    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_8, VAR_4, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_5 || FUNC_11(VAR_15 == VAR_6) , "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == 0, "Got 0x%08x\n", VAR_14);
    VAR_14 = 0xdeadbeef;
    VAR_15 = FUNC_7(VAR_11, VAR_4, VAR_2, &VAR_14);
    FUNC_15(VAR_15 == VAR_6, "Got 0x%08x\n", VAR_15);
    FUNC_15(VAR_14 == VAR_2, "Got 0x%08x\n", VAR_14);

    FUNC_8(VAR_9);
    FUNC_8(VAR_10);
    FUNC_8(VAR_8);
    FUNC_8(VAR_11);

    FUNC_9(".\\testdir\\testdir3");
    FUNC_0();
}
