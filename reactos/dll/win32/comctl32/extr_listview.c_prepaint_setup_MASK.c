
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ clrHighlight; scalar_t__ clrHighlightText; scalar_t__ clr3dFace; scalar_t__ clrBtnText; scalar_t__ clrWindow; scalar_t__ clrWindowText; } ;
struct TYPE_9__ {int dwLvExStyle; int dwStyle; scalar_t__ bFocus; } ;
struct TYPE_7__ {int uItemState; } ;
struct TYPE_8__ {scalar_t__ clrTextBk; scalar_t__ clrText; TYPE_1__ nmcd; } ;
typedef TYPE_2__ NMLVCUSTOMDRAW ;
typedef TYPE_3__ LISTVIEW_INFO ;
typedef int HDC ;
typedef scalar_t__ COLORREF ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_6 ;
 TYPE_6__ VAR_7 ;

__attribute__((used)) static void FUNC_3 (const LISTVIEW_INFO *VAR_8, HDC VAR_9, NMLVCUSTOMDRAW *VAR_10, BOOL VAR_11)
{
    COLORREF VAR_12, VAR_13;


    if (!VAR_11 || (VAR_8->dwLvExStyle & VAR_3))
    {
        if (VAR_10->nmcd.uItemState & VAR_0)
        {
            if (VAR_8->bFocus)
            {
                VAR_10->clrTextBk = VAR_7.clrHighlight;
                VAR_10->clrText = VAR_7.clrHighlightText;
            }
            else if (VAR_8->dwStyle & VAR_4)
            {
                VAR_10->clrTextBk = VAR_7.clr3dFace;
                VAR_10->clrText = VAR_7.clrBtnText;
            }
        }
    }

    VAR_12 = VAR_10->clrTextBk;
    VAR_13 = VAR_10->clrText;

    if (VAR_12 == VAR_1)
        VAR_12 = VAR_7.clrWindow;
    if (VAR_13 == VAR_1)
        VAR_13 = VAR_7.clrWindowText;


    if (VAR_12 != VAR_2)
    {
 FUNC_1(VAR_9, VAR_5);
 FUNC_0(VAR_9, VAR_12);
    }
    else
 FUNC_1(VAR_9, VAR_6);
    FUNC_2(VAR_9, VAR_13);
}
