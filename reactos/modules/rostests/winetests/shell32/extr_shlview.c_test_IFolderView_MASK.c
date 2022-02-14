
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ count; } ;
struct TYPE_9__ {scalar_t__ fFlags; int ViewMode; } ;
struct TYPE_8__ {void* x; void* y; } ;
typedef int RECT ;
typedef TYPE_1__ POINT ;
typedef void* PITEMID_CHILD ;
typedef int IUnknown ;
typedef int IShellView ;
typedef int IShellFolder ;
typedef int IShellBrowser ;
typedef scalar_t__ INT ;
typedef int IFolderView2 ;
typedef int IFolderView ;
typedef void* HWND ;
typedef void* HRESULT ;
typedef TYPE_2__ FOLDERSETTINGS ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *,scalar_t__*) ;
 void* FUNC_3 (int *,int *,void**) ;
 void* FUNC_4 (int *,scalar_t__*) ;
 void* FUNC_5 (int *,TYPE_1__*) ;
 void* FUNC_6 (int *,int ,void**) ;
 int FUNC_7 (int *,int ,scalar_t__*) ;
 void* FUNC_8 (int *,int *,void**) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_10 () ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (int *,int *,int *,void**) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int *,int *,TYPE_2__*,int *,int *,void**) ;
 void* FUNC_15 (int *) ;
 void* FUNC_16 (int *,int *,void**) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (void*) ;
 size_t VAR_10 ;
 void* FUNC_20 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_21 (int **) ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ FUNC_22 (void*,int ,int ,int ) ;
 int FUNC_23 (int *,int ,int ,int,int) ;
 scalar_t__ FUNC_24 (int) ;
 int VAR_16 ;
 int FUNC_25 (TYPE_3__**,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_26 (int,char*,...) ;
 int FUNC_27 (TYPE_3__**,size_t,int ,char*,int ) ;
 TYPE_3__** VAR_20 ;
 void* FUNC_28 (void*) ;
 int FUNC_29 (char*) ;

__attribute__((used)) static void FUNC_30(void)
{
    IShellFolder *VAR_21, *VAR_22;
    FOLDERSETTINGS VAR_23;
    IShellView *VAR_24;
    IShellBrowser *VAR_25;
    IFolderView2 *VAR_26;
    IFolderView *VAR_27;
    IUnknown *VAR_28;
    HWND VAR_29, VAR_30;
    PITEMID_CHILD VAR_31;
    HRESULT VAR_32;
    INT VAR_33, VAR_34;
    POINT VAR_35;
    RECT VAR_36;

    VAR_32 = FUNC_21(&VAR_21);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);

    VAR_32 = FUNC_12(VAR_21, ((void*)0), &VAR_8, (void**)&VAR_24);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);

    VAR_32 = FUNC_16(VAR_24, &VAR_5, (void**)&VAR_27);
    if (VAR_32 != VAR_15)
    {
        FUNC_29("IFolderView not supported by desktop folder\n");
        FUNC_17(VAR_24);
        FUNC_13(VAR_21);
        return;
    }


    VAR_32 = FUNC_5(VAR_27, ((void*)0));
    FUNC_26(VAR_32 == VAR_14 || FUNC_24(VAR_32 == VAR_15) , "got (0x%08x)\n", VAR_32);

    VAR_31 = (void*)0xdeadbeef;
    VAR_32 = FUNC_6(VAR_27, 0, &VAR_31);
    FUNC_26(VAR_32 == VAR_1 || FUNC_24(VAR_32 == VAR_0) , "got (0x%08x)\n", VAR_32);
    FUNC_26(VAR_31 == 0 || FUNC_24(VAR_31 == (void*)0xdeadbeef) , "got %p\n", VAR_31);

if (0)
{

    FUNC_5(VAR_27, &VAR_35);


    FUNC_4(VAR_27, ((void*)0));
    FUNC_2(VAR_27, ((void*)0));


    FUNC_6(VAR_27, 0, ((void*)0));
}

    VAR_25 = FUNC_10();

    VAR_23.ViewMode = VAR_4;
    VAR_23.fFlags = 0;
    VAR_29 = (HWND)0xdeadbeef;
    FUNC_23(&VAR_36, 0, 0, 100, 100);
    VAR_32 = FUNC_14(VAR_24, ((void*)0), &VAR_23, VAR_25, &VAR_36, &VAR_29);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    FUNC_26(FUNC_19(VAR_29), "got %p\n", VAR_29);

    VAR_30 = FUNC_28(VAR_29);
    if (!VAR_30)
    {
        FUNC_29("Failed to subclass ListView control\n");
        FUNC_11(VAR_25);
        FUNC_9(VAR_27);
        FUNC_17(VAR_24);
        FUNC_13(VAR_21);
        return;
    }


    FUNC_25(VAR_20, VAR_12);
    VAR_32 = FUNC_5(VAR_27, ((void*)0));
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    FUNC_27(VAR_20, VAR_10, VAR_16, "IFolderView::GetSpacing, empty", VAR_3);

    FUNC_25(VAR_20, VAR_12);
    VAR_32 = FUNC_5(VAR_27, &VAR_35);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);

    if (VAR_20[VAR_10]->count)
    {
        FUNC_27(VAR_20, VAR_10, VAR_19, "IFolderView::GetSpacing", VAR_3);
        FUNC_26(VAR_35.x > 0, "got %d\n", VAR_35.x);
        FUNC_26(VAR_35.y > 0, "got %d\n", VAR_35.y);
        VAR_33 = FUNC_22(VAR_30, VAR_11, 0, 0);
        FUNC_26(VAR_35.x == FUNC_20(VAR_33) && VAR_35.y == FUNC_0(VAR_33), "got (%d, %d)\n", FUNC_20(VAR_33), FUNC_0(VAR_33));
    }


if (0)
{

    FUNC_7(VAR_27, VAR_13, ((void*)0));
}

    FUNC_25(VAR_20, VAR_12);
    FUNC_7(VAR_27, VAR_13, &VAR_34);


if (0)
{

    FUNC_4(VAR_27, ((void*)0));
}

    FUNC_25(VAR_20, VAR_12);
    VAR_32 = FUNC_4(VAR_27, &VAR_33);
    if (VAR_34)
        FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    else
        FUNC_26(VAR_32 == VAR_14, "got (0x%08x)\n", VAR_32);
    FUNC_27(VAR_20, VAR_10, VAR_18,
                "IFolderView::GetSelectionMarkedItem", VAR_3);


    FUNC_25(VAR_20, VAR_12);
    VAR_32 = FUNC_2(VAR_27, &VAR_33);
    if (VAR_34)
        FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    else
        FUNC_26(VAR_32 == VAR_14, "got (0x%08x)\n", VAR_32);
    FUNC_27(VAR_20, VAR_10, VAR_17,
                "IFolderView::GetFocusedItem", VAR_3);


if (0)
{

    FUNC_3(VAR_27, ((void*)0), (void**)&VAR_22);
    FUNC_3(VAR_27, ((void*)0), ((void*)0));
}

    VAR_32 = FUNC_3(VAR_27, &VAR_7, ((void*)0));
    FUNC_26(VAR_32 == VAR_2, "got (0x%08x)\n", VAR_32);

    VAR_32 = FUNC_3(VAR_27, &VAR_7, (void**)&VAR_22);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    FUNC_26(VAR_21 == VAR_22, "\n");
    if (VAR_22) FUNC_13(VAR_22);

    VAR_32 = FUNC_3(VAR_27, &VAR_9, (void**)&VAR_28);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    if (VAR_28) FUNC_18(VAR_28);

    VAR_32 = FUNC_8(VAR_27, &VAR_6, (void**)&VAR_26);
    if (VAR_32 != VAR_15)
        FUNC_29("IFolderView2 is not supported.\n");
    if (VAR_26) FUNC_1(VAR_26);

    VAR_32 = FUNC_15(VAR_24);
    FUNC_26(VAR_32 == VAR_15, "got (0x%08x)\n", VAR_32);
    FUNC_26(!FUNC_19(VAR_29), "hwnd %p still valid\n", VAR_29);

    FUNC_11(VAR_25);
    FUNC_9(VAR_27);
    FUNC_17(VAR_24);
    FUNC_13(VAR_21);
}
