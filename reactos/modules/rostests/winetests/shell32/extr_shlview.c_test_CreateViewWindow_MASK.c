
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * ULONG ;
struct TYPE_6__ {scalar_t__ fFlags; int ViewMode; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int IUnknown ;
typedef int IShellView ;
typedef int IShellFolder ;
typedef int IDropTarget ;
typedef int * HWND ;
typedef int * HRESULT ;
typedef TYPE_2__ FOLDERSETTINGS ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int *,int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *,TYPE_2__*,int *,TYPE_1__*,int **) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *,void**) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int **) ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int,char*,int *,...) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_15(void)
{
    IShellFolder *VAR_8;
    HWND VAR_9, VAR_10;
    FOLDERSETTINGS VAR_11;
    IShellView *VAR_12;
    IDropTarget *VAR_13;
    HRESULT VAR_14;
    RECT VAR_15 = {0};
    ULONG VAR_16, VAR_17;
    IUnknown *VAR_18;

    VAR_14 = FUNC_12(&VAR_8);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);

    VAR_14 = FUNC_3(VAR_8, ((void*)0), &VAR_4, (void**)&VAR_12);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);

    VAR_14 = FUNC_8(VAR_12, &VAR_2, (void **)&VAR_18);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);
    FUNC_14(VAR_18 == (IUnknown *)VAR_12, "got %p\n", VAR_18);
    FUNC_10(VAR_18);

if (0)
{

    FUNC_6(VAR_12, ((void*)0), &VAR_11, ((void*)0), ((void*)0), ((void*)0));
}

    VAR_11.ViewMode = VAR_1;
    VAR_11.fFlags = 0;
    VAR_9 = (HWND)0xdeadbeef;
    VAR_14 = FUNC_6(VAR_12, ((void*)0), &VAR_11, ((void*)0), ((void*)0), &VAR_9);
    FUNC_14(VAR_14 == VAR_0, "got (0x%08x)\n", VAR_14);
    FUNC_14(VAR_9 == 0, "got %p\n", VAR_9);

    VAR_9 = (HWND)0xdeadbeef;
    VAR_14 = FUNC_6(VAR_12, ((void*)0), &VAR_11, ((void*)0), &VAR_15, &VAR_9);
    FUNC_14(VAR_14 == VAR_0, "got (0x%08x)\n", VAR_14);
    FUNC_14(VAR_9 == 0, "got %p\n", VAR_9);

    VAR_9 = ((void*)0);
    VAR_14 = FUNC_6(VAR_12, ((void*)0), &VAR_11, &VAR_7, &VAR_15, &VAR_9);
    FUNC_14(VAR_14 == VAR_6 || FUNC_13(VAR_14 == VAR_5), "got (0x%08x)\n", VAR_14);
    FUNC_14(VAR_9 != 0, "got %p\n", VAR_9);

    VAR_10 = (HWND)0xdeadbeef;
    VAR_14 = FUNC_6(VAR_12, ((void*)0), &VAR_11, &VAR_7, &VAR_15, &VAR_10);
    FUNC_14(VAR_14 == VAR_0, "got (0x%08x)\n", VAR_14);
    FUNC_14(VAR_10 == ((void*)0), "got %p\n", VAR_10);


    VAR_14 = FUNC_8(VAR_12, &VAR_3, (void**)&VAR_13);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);
    VAR_14 = FUNC_1(VAR_13);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);
    FUNC_2(VAR_13);

    FUNC_5(VAR_12);
    VAR_16 = FUNC_9(VAR_12);
    VAR_14 = FUNC_7(VAR_12);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);
    FUNC_14(!FUNC_11(VAR_9), "hwnd %p still valid\n", VAR_9);
    VAR_17 = FUNC_9(VAR_12);
    FUNC_14(VAR_16 > VAR_17, "expected %u > %u\n", VAR_16, VAR_17);
    VAR_16 = VAR_17;


    VAR_14 = FUNC_3(VAR_8, ((void*)0), &VAR_4, (void**)&VAR_12);
    FUNC_14(VAR_14 == VAR_6, "got (0x%08x)\n", VAR_14);
    VAR_9 = ((void*)0);
    VAR_14 = FUNC_6(VAR_12, ((void*)0), &VAR_11, &VAR_7, &VAR_15, &VAR_9);
    FUNC_14(VAR_14 == VAR_6 || FUNC_13(VAR_14 == VAR_5), "got (0x%08x)\n", VAR_14);
    FUNC_14(VAR_9 != ((void*)0), "got %p\n", VAR_9);
    FUNC_14(FUNC_11(VAR_9), "hwnd %p still valid\n", VAR_9);
    VAR_17 = FUNC_9(VAR_12);
    FUNC_14(VAR_17 != 0, "ref2 = %u\n", VAR_17);
    FUNC_14(VAR_17 > VAR_16, "expected %u > %u\n", VAR_17, VAR_16);
    FUNC_14(FUNC_11(VAR_9), "hwnd %p still valid\n", VAR_9);
    FUNC_0(VAR_9);

    FUNC_4(VAR_8);
}
