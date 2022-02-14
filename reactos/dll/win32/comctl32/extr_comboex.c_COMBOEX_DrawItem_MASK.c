
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_9__ ;
typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_13__ ;


typedef int nmce ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_38__ {int mask; int iIndent; int iImage; int iSelectedImage; int iOverlay; int lParam; scalar_t__ pszText; } ;
struct TYPE_37__ {int selected; int flags; int dwExtStyle; scalar_t__ hwndEdit; scalar_t__ himl; TYPE_9__ edit; scalar_t__ hwndCombo; scalar_t__ hwndSelf; } ;
struct TYPE_33__ {int top; int bottom; int left; int right; } ;
struct TYPE_36__ {scalar_t__ CtlType; int itemID; int itemAction; int itemState; int hDC; TYPE_4__ rcItem; int itemData; int hwndItem; int CtlID; } ;
struct TYPE_30__ {int left; int right; } ;
struct TYPE_35__ {TYPE_1__ rcImage; } ;
struct TYPE_31__ {int mask; int iItem; int iIndent; int iImage; int iSelectedImage; int iOverlay; int lParam; } ;
struct TYPE_34__ {TYPE_2__ ceItem; } ;
struct TYPE_32__ {int cy; int cx; } ;
struct TYPE_29__ {int clrWindowText; int clrHighlightText; int clrWindow; int clrHighlight; } ;
typedef TYPE_3__ SIZE ;
typedef TYPE_4__ RECT ;
typedef TYPE_5__ NMCOMBOBOXEXW ;
typedef int LRESULT ;
typedef int const* LPCWSTR ;
typedef int INT ;
typedef TYPE_6__ IMAGEINFO ;
typedef TYPE_7__ DRAWITEMSTRUCT ;
typedef TYPE_8__ COMBOEX_INFO ;
typedef int COLORREF ;
typedef TYPE_9__ CBE_ITEMDATA ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_9__*) ;
 int const* FUNC_3 (TYPE_8__*,TYPE_9__*) ;
 int FUNC_4 (TYPE_8__*,int ,TYPE_5__*) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (char*,int,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (int ,int,int,int,TYPE_4__*,int const*,int,int ) ;
 int FUNC_8 (int ,int const*,int,TYPE_3__*) ;
 int FUNC_9 (scalar_t__,TYPE_4__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_13 (scalar_t__,int,int ,int,int,int) ;
 int FUNC_14 (scalar_t__,int ,TYPE_6__*) ;
 int FUNC_15 (scalar_t__,int,int) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_4__*,int,int,int,int) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_21 (int ) ;
 int VAR_26 ;
 int FUNC_22 (TYPE_5__*,int) ;
 int VAR_27 ;
 TYPE_13__ VAR_28 ;
 int FUNC_23 (scalar_t__) ;
 TYPE_9__* FUNC_24 (TYPE_8__*,int) ;
 int FUNC_25 (int const*) ;
 int FUNC_26 (TYPE_4__*) ;

__attribute__((used)) static LRESULT FUNC_27 (COMBOEX_INFO *VAR_29, DRAWITEMSTRUCT const *VAR_30)
{
    static const WCHAR VAR_31[] = { 0 };
    CBE_ITEMDATA *VAR_32 = ((void*)0);
    SIZE VAR_33;
    RECT VAR_34;
    LPCWSTR VAR_35 = VAR_31;
    UINT VAR_36, VAR_37, VAR_38;
    INT VAR_39;
    COLORREF VAR_40, VAR_41, VAR_42, VAR_43;
    int VAR_44, VAR_45, VAR_46, VAR_47;

    FUNC_20("DRAWITEMSTRUCT: CtlType=0x%08x CtlID=0x%08x\n",
   VAR_30->CtlType, VAR_30->CtlID);
    FUNC_20("itemID=0x%08x itemAction=0x%08x itemState=0x%08x\n",
   VAR_30->itemID, VAR_30->itemAction, VAR_30->itemState);
    FUNC_20("hWnd=%p hDC=%p (%s) itemData=0x%08lx\n",
          VAR_30->hwndItem, VAR_30->hDC, FUNC_26(&VAR_30->rcItem), VAR_30->itemData);
    if (VAR_30->itemID == 0xffffffff) {
 if ( ( (VAR_30->itemAction & VAR_20) && (VAR_30->itemState & VAR_24)) ||
      ( (VAR_30->itemAction & (VAR_21 | VAR_19)) && (VAR_30->itemState & VAR_23) ) ) {

            FUNC_20("drawing item -1 special focus, rect=(%s)\n",
                  FUNC_26(&VAR_30->rcItem));
 }
 else if ((VAR_30->CtlType == VAR_25) &&
   (VAR_30->itemAction == VAR_19)) {


     if (FUNC_21(VAR_27)) {
  RECT VAR_48, VAR_49, VAR_50;
  FUNC_9 (VAR_29->hwndSelf, &VAR_48);
  FUNC_9 (VAR_29->hwndCombo, &VAR_49);
                FUNC_18(&VAR_50, -1, -1, -1, -1);
  if (VAR_29->hwndEdit) FUNC_9 (VAR_29->hwndEdit, &VAR_50);
                FUNC_20("window rects ex=(%s), cb=(%s), ed=(%s)\n",
                      FUNC_26(&VAR_48), FUNC_26(&VAR_49),
                      FUNC_26(&VAR_50));
     }
 }
 else {
            FUNC_6("NOT drawing item  -1 special focus, rect=(%s), action=%08x, state=%08x\n",
                FUNC_26(&VAR_30->rcItem),
                VAR_30->itemAction, VAR_30->itemState);
     return 0;
 }
    }


    if (VAR_30->itemID == 0xffffffff) {
        VAR_32 = &VAR_29->edit;

 if (VAR_29->hwndEdit) {

     FUNC_2(VAR_32);
     VAR_32->mask &= ~VAR_5;
     if( (VAR_39 = FUNC_10(VAR_29->hwndEdit)) ) {
  VAR_32->mask |= VAR_5;
                VAR_32->pszText = FUNC_0 ((VAR_39 + 1)*sizeof(WCHAR));
  if (VAR_32->pszText)
      FUNC_11(VAR_29->hwndEdit, VAR_32->pszText, VAR_39+1);

        FUNC_20("edit control hwndEdit=%p, text len=%d str=%s\n",
       VAR_29->hwndEdit, VAR_39, FUNC_23(VAR_32->pszText));
     }
 }
    }



    if (!VAR_32) {
        VAR_32 = FUNC_24(VAR_29, VAR_30->itemID);
 if (VAR_32 == (CBE_ITEMDATA *)VAR_12) {
     FUNC_6("invalid item for id %d\n", VAR_30->itemID);
     return 0;
 }
    }

    if (FUNC_21(VAR_27)) FUNC_1 (VAR_32);

    VAR_36 = VAR_11;
    if ((VAR_32->mask & VAR_2) && (VAR_30->itemState & VAR_22)) {
 INT VAR_51 = VAR_32->iIndent;
 if (VAR_51 == VAR_18) {
     NMCOMBOBOXEXW VAR_52;
     FUNC_22(&VAR_52, sizeof(VAR_52));
     VAR_52.ceItem.mask = VAR_2;
     VAR_52.ceItem.lParam = VAR_32->lParam;
     VAR_52.ceItem.iItem = VAR_30->itemID;
     FUNC_4(VAR_29, VAR_6, &VAR_52);
     if (VAR_52.ceItem.mask & VAR_0)
  VAR_32->iIndent = VAR_52.ceItem.iIndent;
     VAR_51 = VAR_52.ceItem.iIndent;
 }
        VAR_36 += (VAR_51 * VAR_9);
    }

    VAR_44 = -2;
    VAR_45 = VAR_15;
    VAR_47 = VAR_29->selected == VAR_30->itemID;

    if (VAR_32->mask & VAR_1)
 VAR_44 = VAR_32->iImage;
    if (VAR_32->mask & VAR_4 && VAR_47)
        VAR_44 = VAR_32->iSelectedImage;
    if (VAR_30->itemState & VAR_22) {

 if (VAR_30->itemState & VAR_24)
     VAR_45 = VAR_16;
    } else {

 if (FUNC_16(VAR_29->hwndEdit)) {



     if (VAR_29->flags & VAR_26)
  VAR_45 = VAR_16;
 } else



     if (VAR_30->itemState & VAR_24)
  VAR_45 = VAR_16;
    }

    if (VAR_29->himl && !(VAR_29->dwExtStyle & VAR_8)) {
     IMAGEINFO VAR_53;
        VAR_53.rcImage.left = VAR_53.rcImage.right = 0;
 FUNC_14(VAR_29->himl, 0, &VAR_53);
 VAR_46 = VAR_53.rcImage.right - VAR_53.rcImage.left + VAR_10;
    } else VAR_46 = 0;


    VAR_35 = FUNC_3(VAR_29, VAR_32);
    if (!VAR_35) VAR_35 = VAR_31;

    VAR_39 = FUNC_25 (VAR_35);
    FUNC_8 (VAR_30->hDC, VAR_35, VAR_39, &VAR_33);

    if (VAR_30->itemAction & (VAR_21 | VAR_19)) {
 int VAR_54 = VAR_32->iOverlay;

     if (VAR_44 == VAR_17) {
     NMCOMBOBOXEXW VAR_55;
     FUNC_22(&VAR_55, sizeof(VAR_55));
     VAR_55.ceItem.mask = VAR_47 ? VAR_4 : VAR_1;
     VAR_55.ceItem.lParam = VAR_32->lParam;
     VAR_55.ceItem.iItem = VAR_30->itemID;
     FUNC_4(VAR_29, VAR_6, &VAR_55);
     if (!VAR_47) {
      if (VAR_55.ceItem.mask & VAR_0) VAR_32->iImage = VAR_55.ceItem.iImage;
      VAR_44 = VAR_55.ceItem.iImage;
     } else {
         if (VAR_55.ceItem.mask & VAR_0) VAR_32->iSelectedImage = VAR_55.ceItem.iSelectedImage;
                VAR_44 = VAR_55.ceItem.iSelectedImage;
     }
        }

 if (VAR_54 == VAR_17) {
     NMCOMBOBOXEXW VAR_56;
     FUNC_22(&VAR_56, sizeof(VAR_56));
     VAR_56.ceItem.mask = VAR_3;
     VAR_56.ceItem.lParam = VAR_32->lParam;
     VAR_56.ceItem.iItem = VAR_30->itemID;
     FUNC_4(VAR_29, VAR_6, &VAR_56);
     if (VAR_56.ceItem.mask & VAR_0)
  VAR_32->iOverlay = VAR_56.ceItem.iOverlay;
     VAR_54 = VAR_56.ceItem.iOverlay;
 }

 if (VAR_44 >= 0 &&
     !(VAR_29->dwExtStyle & (VAR_7 | VAR_8))) {
     if (VAR_54 > 0) FUNC_15 (VAR_29->himl, VAR_54, 1);
     FUNC_13 (VAR_29->himl, VAR_44, VAR_30->hDC, VAR_36, VAR_30->rcItem.top,
       VAR_45 | (VAR_54 > 0 ? FUNC_12(1) : 0));
 }


 if (!FUNC_16 (VAR_29->hwndEdit)) {
     VAR_40 = (VAR_30->itemState & VAR_24) ?
             VAR_28.clrHighlight : VAR_28.clrWindow;
     VAR_42 = FUNC_17 (VAR_30->hDC, VAR_40);
     VAR_41 = (VAR_30->itemState & VAR_24) ?
             VAR_28.clrHighlightText : VAR_28.clrWindowText;
     VAR_43 = FUNC_19 (VAR_30->hDC, VAR_41);
     VAR_37 = VAR_36 + VAR_46;
     VAR_38 = VAR_30->rcItem.top +
         (VAR_30->rcItem.bottom - VAR_30->rcItem.top - VAR_33.cy) / 2;
            FUNC_18(&VAR_34, VAR_37, VAR_30->rcItem.top + 1, VAR_37 + VAR_33.cx, VAR_30->rcItem.bottom - 1);
            FUNC_20("drawing item %d text, rect=(%s)\n",
                  VAR_30->itemID, FUNC_26(&VAR_34));
     FUNC_7 (VAR_30->hDC, VAR_37, VAR_38, VAR_14 | VAR_13,
           &VAR_34, VAR_35, VAR_39, 0);
     FUNC_17 (VAR_30->hDC, VAR_42);
     FUNC_19 (VAR_30->hDC, VAR_43);
 }
    }

    if (VAR_30->itemAction & VAR_20) {
 VAR_34.left = VAR_36 + VAR_46 - 1;
 VAR_34.right = VAR_34.left + VAR_33.cx + 2;
 VAR_34.top = VAR_30->rcItem.top;
 VAR_34.bottom = VAR_30->rcItem.bottom;
 FUNC_5(VAR_30->hDC, &VAR_34);
    }

    return 0;
}
