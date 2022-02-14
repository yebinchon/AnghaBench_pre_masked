
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int SFGAOF ;
typedef int LPITEMIDLIST ;
typedef int IShellItem ;
typedef int IShellFolder ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int *,char*,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int*) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int **) ;
 int FUNC_10 (int *,int ,int *) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int,char*,int) ;
 int FUNC_17 (int *,int *,int ,int **) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19(void)
{
    IShellItem *VAR_6, *VAR_7, *VAR_8;
    IShellFolder *VAR_9;
    LPITEMIDLIST VAR_10, VAR_11;
    SFGAOF VAR_12;
    HRESULT VAR_13;
    WCHAR VAR_14[VAR_2];
    WCHAR VAR_15[VAR_2];
    static const WCHAR VAR_16[] = {'t','e','s','t','d','i','r',0};
    static const WCHAR VAR_17[] = {'t','e','s','t','d','i','r','\\','t','e','s','t','1','.','t','x','t',0};

    if(!&FUNC_17)
    {
        FUNC_18("SHCreateShellItem missing.\n");
        return;
    }

    VAR_13 = FUNC_10(((void*)0), VAR_0, &VAR_10);
    FUNC_16(VAR_13 == VAR_5, "Got 0x%08x\n", VAR_13);
    if(FUNC_11(VAR_13))
    {
        VAR_13 = FUNC_17(((void*)0), ((void*)0), VAR_10, &VAR_6);
        FUNC_16(VAR_13 == VAR_5, "Got 0x%08x\n", VAR_13);
        FUNC_4(VAR_10);
    }
    if(FUNC_2(VAR_13))
    {
        FUNC_18("Skipping tests.\n");
        return;
    }

    if(0)
    {

        FUNC_7(VAR_6, 0, ((void*)0));
    }


    VAR_12 = 0xdeadbeef;
    VAR_13 = FUNC_7(VAR_6, VAR_3, &VAR_12);
    FUNC_16(VAR_13 == VAR_5 || FUNC_12(VAR_13 == VAR_1) , "Got 0x%08x\n", VAR_13);
    FUNC_16(VAR_12 == VAR_3 || FUNC_12(VAR_12 == 0) , "Got 0x%08x\n", VAR_12);

    FUNC_8(VAR_6);

    FUNC_1();

    FUNC_9(&VAR_9);

    FUNC_3(VAR_2, VAR_14);
    FUNC_15(VAR_14);

    FUNC_14(VAR_15, VAR_14);
    FUNC_13(VAR_15, VAR_16);
    VAR_13 = FUNC_5(VAR_9, ((void*)0), ((void*)0), VAR_15, ((void*)0), &VAR_11, ((void*)0));
    FUNC_16(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);
    VAR_13 = FUNC_17(((void*)0), ((void*)0), VAR_11, &VAR_7);
    FUNC_16(VAR_13 == VAR_5, "Got 0x%08x\n", VAR_12);
    FUNC_4(VAR_11);

    FUNC_14(VAR_15, VAR_14);
    FUNC_13(VAR_15, VAR_17);
    VAR_13 = FUNC_5(VAR_9, ((void*)0), ((void*)0), VAR_15, ((void*)0), &VAR_11, ((void*)0));
    FUNC_16(VAR_13 == VAR_5, "got 0x%08x\n", VAR_13);
    VAR_13 = FUNC_17(((void*)0), ((void*)0), VAR_11, &VAR_8);
    FUNC_16(VAR_13 == VAR_5, "Got 0x%08x\n", VAR_12);
    FUNC_4(VAR_11);

    FUNC_6(VAR_9);

    VAR_12 = 0xdeadbeef;
    VAR_13 = FUNC_7(VAR_7, 0, &VAR_12);
    FUNC_16(VAR_13 == VAR_5, "Got 0x%08x\n", VAR_13);
    FUNC_16(VAR_12 == 0, "Got 0x%08x\n", VAR_12);

    VAR_12 = 0xdeadbeef;
    VAR_13 = FUNC_7(VAR_7, VAR_3, &VAR_12);
    FUNC_16(VAR_13 == VAR_5, "Got 0x%08x\n", VAR_13);
    FUNC_16(VAR_12 == VAR_3, "Got 0x%08x\n", VAR_12);

    VAR_12 = 0xdeadbeef;
    VAR_13 = FUNC_7(VAR_8, VAR_3, &VAR_12);
    FUNC_16(VAR_13 == VAR_4, "Got 0x%08x\n", VAR_13);
    FUNC_16(VAR_12 == 0, "Got 0x%08x\n", VAR_12);

    FUNC_8(VAR_7);
    FUNC_8(VAR_8);

    FUNC_0();
}
