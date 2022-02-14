
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_16__ {int uDrawFlags; } ;
struct TYPE_15__ {scalar_t__ bottom; int right; scalar_t__ top; int left; scalar_t__ member_3; int member_2; scalar_t__ member_1; int member_0; } ;
struct TYPE_13__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_14__ {int nMaxTipWidth; scalar_t__ szTipText; TYPE_1__ rcMargin; scalar_t__ pszTitle; int hTitleFont; int hTitleIcon; scalar_t__ bToolBelow; int hwndSelf; int hFont; int clrText; int clrBk; } ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ NMTTCUSTOMDRAW ;
typedef scalar_t__ INT ;
typedef int * HRGN ;
typedef int HFONT ;
typedef int HDC ;
typedef int * HBRUSH ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int * FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int ,scalar_t__,scalar_t__,int ,int *,int ) ;
 int FUNC_4 (int ,scalar_t__,int,TYPE_3__*,int) ;
 int FUNC_5 (int ,TYPE_3__*,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,int *,int *,scalar_t__,scalar_t__) ;
 int VAR_14 ;
 int FUNC_8 (int ,TYPE_3__*) ;
 int * FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (TYPE_2__ const*,TYPE_4__*,int ,TYPE_3__*,int) ;
 int FUNC_17 (int ,TYPE_4__*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_18 (const TOOLTIPS_INFO *VAR_25, HDC VAR_26)
{
    RECT VAR_27;
    INT VAR_28;
    HFONT VAR_29;
    HBRUSH VAR_30;
    UINT VAR_31 = VAR_10;
    HRGN VAR_32 = ((void*)0);
    DWORD VAR_33 = FUNC_11(VAR_25->hwndSelf, VAR_14);
    NMTTCUSTOMDRAW VAR_34;
    DWORD VAR_35;

    if (VAR_25->nMaxTipWidth > -1)
 VAR_31 |= VAR_13;
    if (FUNC_11 (VAR_25->hwndSelf, VAR_14) & VAR_24)
 VAR_31 |= VAR_11;
    FUNC_8 (VAR_25->hwndSelf, &VAR_27);

    VAR_30 = FUNC_1(VAR_25->clrBk);

    VAR_28 = FUNC_14 (VAR_26, VAR_22);
    FUNC_15 (VAR_26, VAR_25->clrText);
    VAR_29 = FUNC_13 (VAR_26, VAR_25->hFont);



    FUNC_16(VAR_25, &VAR_34, VAR_26, &VAR_27, VAR_31);
    VAR_35 = FUNC_17(VAR_5, &VAR_34);
    VAR_31 = VAR_34.uDrawFlags;

    if (VAR_33 & VAR_23)
    {

        VAR_32 = FUNC_0(0, 0, 0, 0);

        FUNC_12(VAR_25->hwndSelf, VAR_32);


        FUNC_6(VAR_26, VAR_32, VAR_30);
        FUNC_2(VAR_30);
        VAR_30 = ((void*)0);
    }
    else
    {

        FUNC_5(VAR_26, &VAR_27, VAR_30);
        FUNC_2(VAR_30);
        VAR_30 = ((void*)0);
    }

    if ((VAR_33 & VAR_23) || VAR_25->pszTitle)
    {

        VAR_27.left += (VAR_2 + VAR_25->rcMargin.left);
        VAR_27.top += (VAR_2 + VAR_25->rcMargin.top);
        VAR_27.right -= (VAR_2 + VAR_25->rcMargin.right);
        VAR_27.bottom -= (VAR_2 + VAR_25->rcMargin.bottom);
        if(VAR_25->bToolBelow) VAR_27.top += VAR_1;

        if (VAR_25->pszTitle)
        {
            RECT VAR_36 = {VAR_27.left, VAR_27.top, VAR_27.right, VAR_27.bottom};
            int VAR_37;
            BOOL VAR_38;
            HFONT VAR_39;


            VAR_38 = VAR_25->hTitleIcon &&
                FUNC_3(VAR_26, VAR_27.left, VAR_27.top, VAR_25->hTitleIcon,
                           VAR_16, VAR_15, 0, ((void*)0), VAR_8);
            if (VAR_38)
                VAR_36.left += VAR_16 + VAR_0;

            VAR_36.bottom = VAR_27.top + VAR_15;


            VAR_39 = FUNC_13 (VAR_26, VAR_25->hTitleFont);
            VAR_37 = FUNC_4(VAR_26, VAR_25->pszTitle, -1, &VAR_36, VAR_9 | VAR_12 | VAR_11);
            FUNC_13 (VAR_26, VAR_39);
            VAR_27.top += VAR_37 + VAR_3;
        }
    }
    else
    {

        VAR_27.left += (VAR_17 + VAR_25->rcMargin.left);
        VAR_27.top += (VAR_17 + VAR_25->rcMargin.top);
        VAR_27.right -= (VAR_17 + VAR_25->rcMargin.right);
        VAR_27.bottom -= (VAR_17 + VAR_25->rcMargin.bottom);
    }


    FUNC_4 (VAR_26, VAR_25->szTipText, -1, &VAR_27, VAR_31);


    if (VAR_35 & VAR_6) {
        FUNC_17(VAR_4, &VAR_34);
    }


    FUNC_13 (VAR_26, VAR_29);
    FUNC_14 (VAR_26, VAR_28);

    if (VAR_33 & VAR_23)
    {

        INT VAR_40 = FUNC_10(VAR_18) - FUNC_10(VAR_19);
        INT VAR_41 = FUNC_10(VAR_20) - FUNC_10(VAR_21);

        VAR_30 = FUNC_9(VAR_7);
        FUNC_7(VAR_26, VAR_32, VAR_30, VAR_40, VAR_41);
    }

    if (VAR_32)
        FUNC_2(VAR_32);
}
