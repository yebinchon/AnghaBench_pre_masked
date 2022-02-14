
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int clrBtnText; int clr3dShadow; int clrBtnHighlight; } ;
struct TYPE_10__ {int uItemState; int hdc; } ;
struct TYPE_13__ {TYPE_1__ nmcd; } ;
struct TYPE_12__ {int top; int bottom; scalar_t__ left; } ;
struct TYPE_11__ {int dwStyle; } ;
typedef TYPE_2__ TOOLBAR_INFO ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ NMTBCUSTOMDRAW ;
typedef int HDC ;
typedef int DWORD ;
typedef int BOOL ;


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
 int FUNC_0 (int ,TYPE_3__*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;
 TYPE_5__ VAR_15 ;

__attribute__((used)) static void
FUNC_2(const TOOLBAR_INFO *VAR_16, const NMTBCUSTOMDRAW *VAR_17, RECT *VAR_18, BOOL VAR_19, DWORD VAR_20)
{
    HDC VAR_21 = VAR_17->nmcd.hdc;
    int VAR_22 = 0;
    BOOL VAR_23 = VAR_19 ||
        (VAR_17->nmcd.uItemState & (VAR_10 | VAR_6));

    if (VAR_16->dwStyle & VAR_14)
    {
        if (VAR_23)
            FUNC_0 (VAR_21, VAR_18, VAR_2, VAR_4);
        else if ( (VAR_17->nmcd.uItemState & VAR_8) &&
                 !(VAR_17->nmcd.uItemState & VAR_7) &&
                 !(VAR_17->nmcd.uItemState & VAR_9))
            FUNC_0 (VAR_21, VAR_18, VAR_1, VAR_4);
    }
    else
    {
        if (VAR_23)
            FUNC_0 (VAR_21, VAR_18, VAR_12, VAR_4 | VAR_3);
        else
            FUNC_0 (VAR_21, VAR_18, VAR_11,
              VAR_5 | VAR_4 | VAR_3);
    }

    if (VAR_23)
        VAR_22 = (VAR_20 & VAR_13) ? 0 : 1;

    if (VAR_17->nmcd.uItemState & (VAR_7 | VAR_9))
    {
        FUNC_1(VAR_21, VAR_18->left+1, VAR_18->top+1 + (VAR_18->bottom - VAR_18->top - VAR_0) / 2, VAR_15.clrBtnHighlight);
        FUNC_1(VAR_21, VAR_18->left, VAR_18->top + (VAR_18->bottom - VAR_18->top - VAR_0) / 2, VAR_15.clr3dShadow);
    }
    else
        FUNC_1(VAR_21, VAR_18->left + VAR_22, VAR_18->top + VAR_22 + (VAR_18->bottom - VAR_18->top - VAR_0) / 2, VAR_15.clrBtnText);
}
