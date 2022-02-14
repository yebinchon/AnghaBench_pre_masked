
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int dis ;
typedef scalar_t__ UINT ;
struct TYPE_14__ {scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_17__ {scalar_t__ itemID; scalar_t__ CtlID; int itemData; TYPE_1__ rcItem; int hDC; int hwndItem; int itemState; int itemAction; int CtlType; } ;
struct TYPE_16__ {scalar_t__ nFocusedItem; scalar_t__ uView; scalar_t__ nItemHeight; int dwStyle; int hwndSelf; int hwndNotify; scalar_t__ hDefaultFont; scalar_t__ hFont; } ;
struct TYPE_15__ {scalar_t__ iItem; int lParam; int mask; scalar_t__ iSubItem; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ LVITEMW ;
typedef int LPARAM ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef TYPE_4__ DRAWITEMSTRUCT ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__ const*,scalar_t__,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__ const*,scalar_t__) ;
 int FUNC_5 (TYPE_3__ const*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__) ;
 int VAR_8 ;
 int FUNC_10 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_11(const LISTVIEW_INFO *VAR_9, BOOL VAR_10)
{
    HDC VAR_11;

    FUNC_9("fShow=%d, nItem=%d\n", VAR_10, VAR_9->nFocusedItem);

    if (VAR_9->nFocusedItem < 0) return;


    if (VAR_9->uView == VAR_4)
    {
 RECT VAR_12;

 FUNC_2(VAR_9, VAR_9->nFocusedItem, &VAR_12);
 if ((VAR_12.bottom - VAR_12.top) > VAR_9->nItemHeight)
 {
     FUNC_5(VAR_9, &VAR_12);
     return;
 }
    }

    if (!(VAR_11 = FUNC_0(VAR_9->hwndSelf))) return;


    if ((VAR_9->dwStyle & VAR_2) && (VAR_9->uView == VAR_3))
    {
 DRAWITEMSTRUCT VAR_13;
 LVITEMW VAR_14;

 HFONT VAR_15 = VAR_9->hFont ? VAR_9->hFont : VAR_9->hDefaultFont;
 HFONT VAR_16 = FUNC_7(VAR_11, VAR_15);

        VAR_14.iItem = VAR_9->nFocusedItem;
 VAR_14.iSubItem = 0;
        VAR_14.mask = VAR_1;
 if (!FUNC_3(VAR_9, &VAR_14)) goto done;

 FUNC_10(&VAR_13, sizeof(VAR_13));
 VAR_13.CtlType = VAR_7;
 VAR_13.CtlID = (UINT)FUNC_1(VAR_9->hwndSelf, VAR_0);
 VAR_13.itemID = VAR_14.iItem;
 VAR_13.itemAction = VAR_5;
 if (VAR_10) VAR_13.itemState |= VAR_6;
 VAR_13.hwndItem = VAR_9->hwndSelf;
 VAR_13.hDC = VAR_11;
 FUNC_2(VAR_9, VAR_13.itemID, &VAR_13.rcItem);
 VAR_13.itemData = VAR_14.lParam;

 FUNC_8(VAR_9->hwndNotify, VAR_8, VAR_13.CtlID, (LPARAM)&VAR_13);

 FUNC_7(VAR_11, VAR_16);
    }
    else
        FUNC_4(VAR_9, VAR_9->nFocusedItem);

done:
    FUNC_6(VAR_9->hwndSelf, VAR_11);
}
