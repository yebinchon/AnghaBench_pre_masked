
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef float WCHAR ;
struct TYPE_2__ {int GetFindData; } ;
typedef int IUnknown ;
typedef int ITEMIDLIST ;
typedef int IShellFolder ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,float*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int *,float*,int *,int **,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int **) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (int) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (float*,float*) ;
 int FUNC_13 (int,char*,scalar_t__) ;
 int FUNC_14 (int *,float*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    WCHAR VAR_10[] =
        {'F','i','l','e',' ','S','y','s','t','e','m',' ','B','i','n','d',' ','D','a','t','a',0};
    WCHAR VAR_11[] = {'C',':','\\','f','s','b','d','d','i','r',0};
    WCHAR VAR_12[] = {'C',':','\\','f','s','b','d','d','i','r','\\','f','i','l','e','.','t','x','t',0};
    WCHAR VAR_13[] = {'C',':','\\','f','s','b','d','d','i','r','\\','s','\\','f','i','l','e','.','t','x','t',0};
    const HRESULT VAR_14 = FUNC_3(VAR_1);

    IShellFolder *VAR_15;
    IBindCtx *VAR_16;
    HRESULT VAR_17;
    ITEMIDLIST *VAR_18;


    FUNC_11(0xdeadbeef);
    FUNC_12(VAR_11, VAR_11);
    if(FUNC_2() == VAR_0){
        FUNC_15("Most W-calls are not implemented\n");
        return;
    }

    VAR_17 = FUNC_9(&VAR_15);
    FUNC_13(VAR_17 == VAR_2, "SHGetDesktopFolder failed: 0x%08x\n", VAR_17);
    if(FUNC_1(VAR_17)){
        FUNC_15("Failed to get IShellFolder, can't run tests\n");
        return;
    }


    VAR_17 = FUNC_7(VAR_15, ((void*)0), ((void*)0), VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_14, "ParseDisplayName failed with wrong error: 0x%08x\n", VAR_17);
    VAR_17 = FUNC_7(VAR_15, ((void*)0), ((void*)0), VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_14, "ParseDisplayName failed with wrong error: 0x%08x\n", VAR_17);
    VAR_17 = FUNC_7(VAR_15, ((void*)0), ((void*)0), VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_14, "ParseDisplayName failed with wrong error: 0x%08x\n", VAR_17);


    VAR_17 = FUNC_0(0, &VAR_16);
    FUNC_13(VAR_17 == VAR_2, "CreateBindCtx failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_14, "ParseDisplayName failed with wrong error: 0x%08x\n", VAR_17);
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_14, "ParseDisplayName failed with wrong error: 0x%08x\n", VAR_17);
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_14, "ParseDisplayName failed with wrong error: 0x%08x\n", VAR_17);


    VAR_17 = FUNC_4(VAR_16, VAR_10, (IUnknown*)&VAR_3);
    FUNC_13(VAR_17 == VAR_2, "RegisterObjectParam failed: 0x%08x\n", VAR_17);


    VAR_18 = (ITEMIDLIST*)0xdeadbeef;
    VAR_4.GetFindData = VAR_5;
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_11);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_12);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_13);
        FUNC_6(VAR_18);
    }


    VAR_18 = (ITEMIDLIST*)0xdeadbeef;
    VAR_4.GetFindData = VAR_8;
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_11);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_12);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_13);
        FUNC_6(VAR_18);
    }


    VAR_18 = (ITEMIDLIST*)0xdeadbeef;
    VAR_4.GetFindData = VAR_7;
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_11);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_12);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_13);
        FUNC_6(VAR_18);
    }


    VAR_18 = (ITEMIDLIST*)0xdeadbeef;
    VAR_4.GetFindData = VAR_6;
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_11);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_12);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_13);
        FUNC_6(VAR_18);
    }


    VAR_18 = (ITEMIDLIST*)0xdeadbeef;
    VAR_4.GetFindData = VAR_9;
    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_11, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_11);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_12, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_12);
        FUNC_6(VAR_18);
    }

    VAR_17 = FUNC_7(VAR_15, ((void*)0), VAR_16, VAR_13, ((void*)0), &VAR_18, ((void*)0));
    FUNC_13(VAR_17 == VAR_2, "ParseDisplayName failed: 0x%08x\n", VAR_17);
    if(FUNC_10(VAR_17)){
        FUNC_14(VAR_18, VAR_13);
        FUNC_6(VAR_18);
    }

    FUNC_5(VAR_16);
    FUNC_8(VAR_15);
}
