
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IMoniker ;
typedef int IHlinkBrowseContext ;
typedef int IHlink ;
typedef int IBindCtx ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (char*,char*,int **) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int **) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,char*,int *) ;
 scalar_t__ FUNC_8 (int *,int ,int **,int *) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int *,int *,int *,char**) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (int,char*,scalar_t__,...) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    IHlinkBrowseContext *VAR_8;
    IHlink *VAR_9;
    IMoniker *VAR_10, *VAR_11;
    IBindCtx *VAR_12;
    WCHAR VAR_13[] = {'1',0};
    WCHAR VAR_14[] = {'5',0};
    WCHAR *VAR_15, *VAR_16;
    HRESULT VAR_17;

    VAR_17 = FUNC_1(0, &VAR_12);
    FUNC_13(VAR_17 == VAR_7, "CreateBindCtx failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_2(VAR_13, VAR_14, &VAR_10);
    FUNC_13(VAR_17 == VAR_7, "CreateItemMoniker failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_10(VAR_10, VAR_12, ((void*)0), &VAR_16);
    FUNC_13(VAR_17 == VAR_7, "GetDisplayName failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_3(((void*)0), &VAR_6, (void**)&VAR_8);
    FUNC_13(VAR_17 == VAR_7, "HlinkCreateBrowseContext failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_7(VAR_8, VAR_10, VAR_13, ((void*)0));
    FUNC_13(VAR_17 == VAR_7, "SetInitialHlink failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_7(VAR_8, VAR_10, VAR_13, ((void*)0));
    FUNC_13(VAR_17 == VAR_0, "got 0x%08x\n", VAR_17);

    VAR_17 = FUNC_7(VAR_8, VAR_10, VAR_14, ((void*)0));
    FUNC_13(VAR_17 == VAR_0, "got 0x%08x\n", VAR_17);


    VAR_17 = FUNC_5(VAR_8, VAR_4, &VAR_9);
    FUNC_13(VAR_17 == VAR_1, "got 0x%08x\n", VAR_17);

    VAR_17 = FUNC_5(VAR_8, VAR_3, &VAR_9);
    FUNC_13(VAR_17 == VAR_1, "got 0x%08x\n", VAR_17);

    VAR_17 = FUNC_5(VAR_8, VAR_2, &VAR_9);
    FUNC_13(VAR_17 == VAR_7, "GetHlink failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_8(VAR_9, VAR_5, &VAR_11, ((void*)0));
    FUNC_13(VAR_17 == VAR_7, "GetMonikerReference failed: 0x%08x\n", VAR_17);

    VAR_17 = FUNC_10(VAR_11, VAR_12, ((void*)0), &VAR_15);
    FUNC_13(VAR_17 == VAR_7, "GetDisplayName failed: 0x%08x\n", VAR_17);
    FUNC_13(!FUNC_12(VAR_15, VAR_16), "Found display name should have been %s, was: %s\n", FUNC_14(VAR_16), FUNC_14(VAR_15));

    FUNC_0(VAR_16);
    FUNC_0(VAR_15);

    FUNC_4(VAR_12);
    FUNC_11(VAR_11);
    FUNC_9(VAR_9);
    FUNC_6(VAR_8);
    FUNC_11(VAR_10);
}
