
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mask; int cChildren; scalar_t__ lParam; void* iSelectedImage; void* iImage; int pszText; int cchTextMax; } ;
struct TYPE_5__ {int hParent; scalar_t__ hInsertAfter; TYPE_1__ item; } ;
typedef TYPE_1__ TVITEMW ;
typedef TYPE_2__ TVINSERTSTRUCTW ;
typedef int LPWSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;
typedef int BOOL ;


 int FUNC_0 (int ,scalar_t__,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static BOOL FUNC_6(HWND VAR_18, LPWSTR VAR_19)
{
    TVITEMW VAR_20;
    TVINSERTSTRUCTW VAR_21;
    HTREEITEM VAR_22;

    VAR_20.mask = VAR_15 | VAR_12 | VAR_14 | VAR_11 | VAR_13;

    VAR_20.pszText = VAR_19;
    VAR_20.cchTextMax = FUNC_5(VAR_20.pszText);

    VAR_20.iImage = VAR_7;
    VAR_20.iSelectedImage = VAR_7;
    VAR_20.cChildren = 5;

    VAR_20.lParam = (LPARAM)((void*)0);
    VAR_21.item = VAR_20;
    VAR_21.hInsertAfter = (HTREEITEM)VAR_16;
    VAR_21.hParent = VAR_17;

    if (!(VAR_22 = FUNC_3(VAR_18, &VAR_21))) return VAR_0;

    if (!FUNC_0(VAR_18, VAR_22, L"HKEY_CLASSES_ROOT", VAR_1, 1)) return VAR_0;
    if (!FUNC_0(VAR_18, VAR_22, L"HKEY_CURRENT_USER", VAR_3, 1)) return VAR_0;
    if (!FUNC_0(VAR_18, VAR_22, L"HKEY_LOCAL_MACHINE", VAR_5, 1)) return VAR_0;
    if (!FUNC_0(VAR_18, VAR_22, L"HKEY_USERS", VAR_6, 1)) return VAR_0;
    if (!FUNC_0(VAR_18, VAR_22, L"HKEY_CURRENT_CONFIG", VAR_2, 1)) return VAR_0;

    if (FUNC_1() & 0x80000000)
    {

        if (!FUNC_0(VAR_18, VAR_22, L"HKEY_DYN_DATA", VAR_4, 1)) return VAR_0;
    }


    (void)FUNC_2(VAR_18, VAR_22, VAR_9);
    (void)FUNC_4(VAR_18, VAR_22, VAR_10);
    return VAR_8;
}
