
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int clr3dShadow; } ;
struct TYPE_7__ {int uItemState; int hdc; } ;
struct TYPE_9__ {int nHLStringBkMode; int clrText; int clrMark; int clrTextHighlight; int clrBtnHighlight; TYPE_1__ nmcd; } ;
struct TYPE_8__ {scalar_t__ nMaxTextRows; int dwDTFlags; int hFont; int hwndSelf; } ;
typedef TYPE_2__ TOOLBAR_INFO ;
typedef int RECT ;
typedef TYPE_3__ NMTBCUSTOMDRAW ;
typedef int LPCWSTR ;
typedef scalar_t__ HTHEME ;
typedef int HFONT ;
typedef int HDC ;
typedef int DWORD ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,int *,int ) ;
 int FUNC_1 (scalar_t__,int ,int,int,int ,int,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (const TOOLBAR_INFO *VAR_16, RECT *VAR_17, LPCWSTR VAR_18,
                    const NMTBCUSTOMDRAW *VAR_19, DWORD VAR_20)
{
    HDC VAR_21 = VAR_19->nmcd.hdc;
    HFONT VAR_22 = 0;
    COLORREF VAR_23 = 0;
    COLORREF VAR_24 = 0;
    int VAR_25 = 0;
    UINT VAR_26 = VAR_19->nmcd.uItemState;





    if (VAR_18 && VAR_16->nMaxTextRows > 0) {
        FUNC_8("string=%s rect=(%s)\n", FUNC_9(VAR_18),
              FUNC_10(VAR_17));

 VAR_22 = FUNC_4 (VAR_21, VAR_16->hFont);
 if ((VAR_26 & VAR_2) && (VAR_20 & VAR_7 )) {
     VAR_23 = FUNC_7 (VAR_21, VAR_19->clrTextHighlight);
 }
 else if (VAR_26 & VAR_1) {
     VAR_23 = FUNC_7 (VAR_21, VAR_19->clrBtnHighlight);
     FUNC_3 (VAR_17, 1, 1);
     FUNC_0 (VAR_21, VAR_18, -1, VAR_17, VAR_16->dwDTFlags);
     FUNC_7 (VAR_21, VAR_15.clr3dShadow);
     FUNC_3 (VAR_17, -1, -1);
 }
 else if (VAR_26 & VAR_3) {
     VAR_23 = FUNC_7 (VAR_21, VAR_15.clr3dShadow);
 }
 else if ((VAR_26 & VAR_4) && !(VAR_20 & VAR_8)) {
     VAR_23 = FUNC_7 (VAR_21, VAR_19->clrTextHighlight);
     VAR_24 = FUNC_5 (VAR_21, VAR_19->clrMark);
     VAR_25 = FUNC_6 (VAR_21, VAR_19->nHLStringBkMode);
 }
 else {
     VAR_23 = FUNC_7 (VAR_21, VAR_19->clrText);
 }

 FUNC_0 (VAR_21, VAR_18, -1, VAR_17, VAR_16->dwDTFlags);
 FUNC_7 (VAR_21, VAR_23);
 if ((VAR_26 & VAR_4) && !(VAR_20 & VAR_8))
 {
     FUNC_5 (VAR_21, VAR_24);
     FUNC_6 (VAR_21, VAR_25);
 }
 FUNC_4 (VAR_21, VAR_22);
    }
}
