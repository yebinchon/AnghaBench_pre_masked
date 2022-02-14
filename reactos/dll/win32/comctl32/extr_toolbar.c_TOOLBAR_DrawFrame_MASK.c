
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int uItemState; int hdc; } ;
struct TYPE_8__ {TYPE_1__ nmcd; } ;
struct TYPE_7__ {int dwStyle; } ;
typedef TYPE_2__ TOOLBAR_INFO ;
typedef int RECT ;
typedef TYPE_3__ NMTBCUSTOMDRAW ;
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
 int FUNC_0 (int ,int *,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_1(const TOOLBAR_INFO *VAR_14, const NMTBCUSTOMDRAW *VAR_15, const RECT *VAR_16, DWORD VAR_17)
{
    HDC VAR_18 = VAR_15->nmcd.hdc;
    RECT VAR_19 = *VAR_16;


    BOOL VAR_20 = (VAR_15->nmcd.uItemState & VAR_6) ||
                                 (VAR_15->nmcd.uItemState & VAR_8);
    BOOL VAR_21 = !VAR_20 &&
                        ((VAR_15->nmcd.uItemState & VAR_9) ||
                         (VAR_15->nmcd.uItemState & VAR_5));


    if (VAR_17 & VAR_12)
        return;

    if (VAR_14->dwStyle & VAR_13)
    {
        if (VAR_21)
            FUNC_0 (VAR_18, &VAR_19, VAR_1, VAR_3);
        else if ((VAR_15->nmcd.uItemState & VAR_7) && !VAR_20)
            FUNC_0 (VAR_18, &VAR_19, VAR_0, VAR_3);
    }
    else
    {
        if (VAR_21)
            FUNC_0 (VAR_18, &VAR_19, VAR_11, VAR_3 | VAR_2);
        else
            FUNC_0 (VAR_18, &VAR_19, VAR_10,
              VAR_4 | VAR_3 | VAR_2);
    }
}
