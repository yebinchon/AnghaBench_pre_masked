
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_29__ {int clr3dFace; } ;
struct TYPE_28__ {size_t bmWidth; size_t bmHeight; } ;
struct TYPE_23__ {scalar_t__ right; scalar_t__ left; size_t top; size_t bottom; } ;
struct TYPE_27__ {size_t itemID; int CtlID; int itemData; TYPE_1__ rcItem; void* hDC; int hwndItem; int itemState; int itemAction; int CtlType; } ;
struct TYPE_26__ {scalar_t__ nNotifyFormat; int iMargin; int hwndSelf; int himl; scalar_t__ nHeight; int hwndNotify; TYPE_3__* items; } ;
struct TYPE_25__ {int fmt; TYPE_1__ rect; scalar_t__ pszText; int iImage; scalar_t__ hbm; scalar_t__ bDown; int lParam; } ;
struct TYPE_24__ {int dwDrawStage; size_t dwItemSpec; int lItemlParam; int uItemState; TYPE_1__ rc; void* hdc; } ;
typedef TYPE_1__ RECT ;
typedef int NMHDR ;
typedef TYPE_2__ NMCUSTOMDRAW ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef size_t INT ;
typedef scalar_t__ HTHEME ;
typedef scalar_t__ HRGN ;
typedef TYPE_3__ HEADER_ITEM ;
typedef TYPE_4__ HEADER_INFO ;
typedef void* HDC ;
typedef TYPE_5__ DRAWITEMSTRUCT ;
typedef scalar_t__ BOOL ;
typedef TYPE_6__ BITMAP ;


 int FUNC_0 (void*,size_t,size_t,size_t,size_t,void*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (size_t,size_t,size_t,size_t) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*,scalar_t__,int,TYPE_1__*,int) ;
 int FUNC_6 (scalar_t__,void*,int ,int,scalar_t__,int,int,int ,TYPE_1__*) ;
 int FUNC_7 (void*,scalar_t__,int ) ;
 int VAR_14 ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,int,TYPE_6__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,void*,int ,int,scalar_t__,int,int,int *,TYPE_1__*) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_14 (TYPE_4__*,void*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_15 (TYPE_4__*,void*,TYPE_1__*,TYPE_3__*,scalar_t__) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_4__*,size_t,int) ;
 int FUNC_18 (TYPE_4__*,int ,int *) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_19 (int ,int ,void*,size_t,size_t,size_t,size_t,int ,int ,int ) ;
 scalar_t__ FUNC_20 (int ,size_t*,size_t*) ;
 size_t FUNC_21 (scalar_t__,int,int) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_22 (int ,void*) ;
 int VAR_37 ;
 int FUNC_23 (void*,scalar_t__) ;
 int FUNC_24 (void*,scalar_t__) ;
 scalar_t__ FUNC_25 (int ,int ,int ,int ) ;
 int FUNC_26 (void*,int ) ;
 size_t FUNC_27 (void*,size_t) ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (void*,int ) ;
 int FUNC_30 (char*,size_t,scalar_t__,int) ;
 size_t VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 TYPE_7__ VAR_41 ;
 scalar_t__ FUNC_31 (size_t,size_t,size_t,int) ;

__attribute__((used)) static INT
FUNC_32 (HEADER_INFO *VAR_42, HDC VAR_43, INT VAR_44, BOOL VAR_45, LRESULT VAR_46)
{
    HEADER_ITEM *VAR_47 = &VAR_42->items[VAR_44];
    RECT VAR_48;
    INT VAR_49;
    HTHEME VAR_50 = FUNC_13 (VAR_42->hwndSelf);
    NMCUSTOMDRAW VAR_51;
    int VAR_52 = 0;

    FUNC_30("DrawItem(iItem %d bHotTrack %d unicode flag %d)\n", VAR_44, VAR_45, (VAR_42->nNotifyFormat == VAR_32));

    VAR_48 = VAR_47->rect;
    if (VAR_48.right - VAR_48.left == 0)
 return VAR_47->rect.right;

    if (VAR_50)
        VAR_52 = (VAR_47->bDown) ? VAR_30 : (VAR_45 ? VAR_28 : VAR_29);


    FUNC_29(VAR_43, (VAR_45 && !VAR_50) ? VAR_8 : VAR_6);
    FUNC_26(VAR_43, VAR_41.clr3dFace);

    if (VAR_46 & VAR_3 && !(VAR_47->fmt & VAR_21))
    {
        LRESULT VAR_53;

        VAR_51.dwDrawStage = VAR_1 | VAR_0;
        VAR_51.hdc = VAR_43;
        VAR_51.dwItemSpec = VAR_44;
        VAR_51.rc = VAR_48;
        VAR_51.uItemState = VAR_47->bDown ? VAR_2 : 0;
        VAR_51.lItemlParam = VAR_47->lParam;

        VAR_53 = FUNC_18(VAR_42, VAR_33, (NMHDR *)&VAR_51);
        if (VAR_53 & VAR_4)
            return VAR_47->rect.right;
    }


    FUNC_15(VAR_42, VAR_43, &VAR_48, VAR_47, VAR_45);

    if (VAR_47->fmt & VAR_21)
    {
 DRAWITEMSTRUCT VAR_54;
        BOOL VAR_55;

 VAR_54.CtlType = VAR_36;
 VAR_54.CtlID = FUNC_12 (VAR_42->hwndSelf, VAR_14);
 VAR_54.itemID = VAR_44;
 VAR_54.itemAction = VAR_34;
 VAR_54.itemState = VAR_47->bDown ? VAR_35 : 0;
 VAR_54.hwndItem = VAR_42->hwndSelf;
 VAR_54.hDC = VAR_43;
 VAR_54.rcItem = VAR_47->rect;
 VAR_54.itemData = VAR_47->lParam;
        VAR_49 = FUNC_27(VAR_43, VAR_38);
        VAR_55 = FUNC_25 (VAR_42->hwndNotify, VAR_40, VAR_54.CtlID, (LPARAM)&VAR_54);
        if (VAR_49 != VAR_38)
            FUNC_27(VAR_43, VAR_49);

        if (!VAR_55)
            FUNC_15(VAR_42, VAR_43, &VAR_48, VAR_47, VAR_45);


        FUNC_14(VAR_42, VAR_43, &VAR_48, VAR_47);


        if (VAR_55) return VAR_47->rect.right;
    }
    else
        FUNC_14(VAR_42, VAR_43, &VAR_48, VAR_47);

    if (VAR_47->bDown) {
        VAR_48.left += 2;
        VAR_48.top += 2;
    }


    {
 INT VAR_56, VAR_57;
        INT *VAR_58 = ((void*)0);
        UINT *VAR_59 = ((void*)0);

        INT VAR_60, VAR_61, VAR_62, VAR_63;
 UINT VAR_64, VAR_65, VAR_66, VAR_67;
        INT VAR_68, VAR_69;
        INT VAR_70, VAR_71, VAR_72;
 BITMAP VAR_73;

        FUNC_17(VAR_42, VAR_44, VAR_27|VAR_26);
        VAR_64 = VAR_66 = VAR_67 = VAR_70 = VAR_72 = 0;
 VAR_56 = VAR_48.right - VAR_48.left;
 VAR_57 = VAR_48.bottom - VAR_48.top;

 if (VAR_47->fmt & VAR_25) {
     RECT VAR_74;

            FUNC_28(&VAR_74);

     if (VAR_50) {
  FUNC_11(VAR_50, VAR_43, VAR_31, VAR_52, VAR_47->pszText, -1,
      VAR_11|VAR_13|VAR_12, ((void*)0), &VAR_74);
     } else {
  FUNC_5 (VAR_43, VAR_47->pszText, -1,
   &VAR_74, VAR_11|VAR_13|VAR_12|VAR_9);
     }
     VAR_64 = VAR_74.right - VAR_74.left + 2 * VAR_42->iMargin;
 }

        if (VAR_47->fmt & (VAR_24 | VAR_23)) {
            VAR_72 = FUNC_21( VAR_42->nHeight - VAR_39, 4, 13 );
            VAR_70 = 2 * VAR_72 - 1 + VAR_42->iMargin * 2;
            VAR_64 += VAR_70;
        } else {
            if ((VAR_47->fmt & VAR_18) && FUNC_20( VAR_42->himl, &VAR_68, &VAR_69 )) {
                VAR_66 = VAR_68 + 2 * VAR_42->iMargin;
                VAR_58 = &VAR_62;
                VAR_59 = &VAR_66;
            }

            if ((VAR_47->fmt & VAR_15) && (VAR_47->hbm)) {
                FUNC_9 (VAR_47->hbm, sizeof(BITMAP), &VAR_73);
                VAR_67 = VAR_73.bmWidth + 2 * VAR_42->iMargin;
                if (!VAR_66) {
                    VAR_58 = &VAR_63;
                    VAR_59 = &VAR_67;
                }
            }
            if (VAR_67 || VAR_66)
                VAR_64 += *VAR_59;
        }


 if ((VAR_47->fmt & VAR_19) == VAR_20)
     VAR_60 = VAR_48.left;
 else if ((VAR_47->fmt & VAR_19) == VAR_17)
     VAR_60 = VAR_48.left + VAR_56 / 2 - VAR_64 / 2;
 else
     VAR_60 = VAR_48.right - VAR_64;


 if (VAR_60 < VAR_48.left)
     VAR_60 = VAR_48.left;
 if (VAR_60 + VAR_64 > VAR_48.right)
     VAR_64 = VAR_48.right - VAR_60;

 VAR_61 = VAR_60 + VAR_42->iMargin;

 VAR_65 = VAR_64 - VAR_42->iMargin * 2;

        VAR_65 -= VAR_70;
        VAR_71 = VAR_60 + VAR_65 + VAR_42->iMargin * 3;

 if (VAR_66 || VAR_67) {
     VAR_65 -= *VAR_59;
     if (VAR_47->fmt & VAR_16) {

  *VAR_58 = VAR_60 + VAR_65 + VAR_42->iMargin * 3;
     } else {
  *VAR_58 = VAR_60 + VAR_42->iMargin;

  VAR_61 += *VAR_59;
     }
 }

 if (VAR_66 && VAR_67) {




     if ((VAR_47->fmt & VAR_19) == VAR_22)
         VAR_63 = VAR_60 - VAR_67 + VAR_42->iMargin;
     else
         VAR_63 = VAR_60 + VAR_64 + VAR_42->iMargin;
 }

 if (VAR_70 || VAR_66 || VAR_67) {
     HDC VAR_75 = FUNC_8(VAR_42->hwndSelf);
     HRGN VAR_76 = FUNC_2(VAR_48.left, VAR_48.top, VAR_48.right, VAR_48.bottom);
     FUNC_23(VAR_75, VAR_76);

            if (VAR_70) {
                HRGN VAR_77 = FUNC_31( VAR_71, VAR_48.top + (VAR_57 - VAR_72) / 2,
                                                VAR_72, VAR_47->fmt & VAR_24 );
                if (VAR_77) {
                    FUNC_7( VAR_75, VAR_77, FUNC_10( VAR_7 ) );
                    FUNC_4( VAR_77 );
                }
            }

     if (VAR_67) {
         HDC VAR_78 = FUNC_1 (VAR_75);
         FUNC_24 (VAR_78, VAR_47->hbm);
         FUNC_0 (VAR_75, VAR_63, VAR_48.top + (VAR_57 - VAR_73.bmHeight) / 2,
          VAR_73.bmWidth, VAR_73.bmHeight, VAR_78, 0, 0, VAR_37);
         FUNC_3 (VAR_78);
     }

     if (VAR_66) {
         FUNC_19 (VAR_42->himl, VAR_47->iImage, VAR_75,
                           VAR_62, VAR_48.top + (VAR_57 - VAR_69) / 2,
                           VAR_68, VAR_69, VAR_5, VAR_5, 0);
     }

     FUNC_4(VAR_76);
     FUNC_22(VAR_42->hwndSelf, VAR_75);
 }

 if (((VAR_47->fmt & VAR_25)
  || (!(VAR_47->fmt & (VAR_21|VAR_25|VAR_15|
       VAR_16|VAR_18))))
     && (VAR_47->pszText)) {
     VAR_49 = FUNC_27(VAR_43, VAR_38);
     VAR_48.left = VAR_61;
     VAR_48.right = VAR_61 + VAR_65;
     if (VAR_50) {
  FUNC_6(VAR_50, VAR_43, VAR_31, VAR_52, VAR_47->pszText,
       -1, VAR_11|VAR_10|VAR_13|VAR_12,
       0, &VAR_48);
     } else {
  FUNC_5 (VAR_43, VAR_47->pszText, -1,
   &VAR_48, VAR_11|VAR_10|VAR_13|VAR_12);
     }
     if (VAR_49 != VAR_38)
         FUNC_27(VAR_43, VAR_49);
        }
        FUNC_16(VAR_47);
    }

    return VAR_47->rect.right;
}
