
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int hwndTreeView; int hWnd; TYPE_1__* lpBrowseInfo; } ;
typedef TYPE_2__ browse_info ;
struct TYPE_6__ {int ulFlags; int pidlRoot; } ;
typedef int LPVOID ;
typedef int LPITEMIDLIST ;
typedef int LPCITEMIDLIST ;
typedef int LPARAM ;
typedef int IShellFolder ;
typedef int IEnumIDList ;
typedef scalar_t__ HTREEITEM ;
typedef int HRESULT ;
typedef scalar_t__ HIMAGELIST ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ,int *,int *) ;
 int FUNC_8 (int *,int ,int ,int **) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int *,int ,int ,int *,scalar_t__) ;
 int FUNC_11 (int **) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int *,scalar_t__*) ;
 int FUNC_14 (char*,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (char*,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18( browse_info *VAR_6 )
{
    LPITEMIDLIST VAR_7, VAR_8;
    HIMAGELIST VAR_9;
    HRESULT VAR_10;
    IShellFolder *VAR_11, *VAR_12;
    IEnumIDList * VAR_13 = ((void*)0);
    HTREEITEM VAR_14;
    DWORD VAR_15;
    LPCITEMIDLIST VAR_16 = VAR_6->lpBrowseInfo->pidlRoot;

    FUNC_14("%p\n", VAR_6 );

    FUNC_13(((void*)0), &VAR_9);

    if (VAR_9)
        FUNC_12( VAR_6->hwndTreeView, VAR_5, 0, (LPARAM)VAR_9 );
    VAR_7 = FUNC_2(VAR_16);
    FUNC_5(VAR_7);
    VAR_8 = FUNC_2(FUNC_3(VAR_16));

    if (FUNC_16(VAR_7)) {
        VAR_10 = FUNC_11(&VAR_11);
    } else {
        IShellFolder *VAR_17;
        VAR_10 = FUNC_11(&VAR_17);
        if (FUNC_1(VAR_10)) {
            FUNC_15("SHGetDesktopFolder failed! hr = %08x\n", VAR_10);
            FUNC_4(VAR_8);
            FUNC_4(VAR_7);
            return;
        }
        VAR_10 = FUNC_7(VAR_17, VAR_7, 0, &VAR_0, (LPVOID*)&VAR_11);
        FUNC_9(VAR_17);
    }

    if (FUNC_1(VAR_10)) {
        FUNC_15("Could not bind to parent shell folder! hr = %08x\n", VAR_10);
        FUNC_4(VAR_8);
        FUNC_4(VAR_7);
        return;
    }

    if (!FUNC_17(VAR_8)) {
        VAR_10 = FUNC_7(VAR_11, VAR_8, 0, &VAR_0, (LPVOID*)&VAR_12);
    } else {
        VAR_12 = VAR_11;
        VAR_10 = FUNC_6(VAR_11);
    }

    if (FUNC_1(VAR_10)) {
        FUNC_15("Could not bind to root shell folder! hr = %08x\n", VAR_10);
        FUNC_9(VAR_11);
        FUNC_4(VAR_8);
        FUNC_4(VAR_7);
        return;
    }

    VAR_15 = FUNC_0( VAR_6->lpBrowseInfo->ulFlags );
    VAR_10 = FUNC_8( VAR_12, VAR_6->hWnd, VAR_15, &VAR_13 );
    if (FUNC_1(VAR_10)) {
        FUNC_15("Could not get child iterator! hr = %08x\n", VAR_10);
        FUNC_9(VAR_11);
        FUNC_9(VAR_12);
        FUNC_4(VAR_8);
        FUNC_4(VAR_7);
        return;
    }

    FUNC_12( VAR_6->hwndTreeView, VAR_3, 0, (LPARAM)VAR_2 );
    VAR_14 = FUNC_10( VAR_6, VAR_11, VAR_8,
                               VAR_7, VAR_13, VAR_2 );
    FUNC_12( VAR_6->hwndTreeView, VAR_4, VAR_1, (LPARAM)VAR_14 );

    FUNC_4(VAR_8);
    FUNC_4(VAR_7);
    FUNC_9(VAR_12);
    FUNC_9(VAR_11);
}
