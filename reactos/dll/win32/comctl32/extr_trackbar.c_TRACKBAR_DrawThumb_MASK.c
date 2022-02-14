
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ clr3dHilight; scalar_t__ clrWindow; int clr3dFace; } ;
struct TYPE_9__ {int bottom; int top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_8__ {int dwStyle; int flags; TYPE_2__ rcThumb; int hwndSelf; } ;
typedef TYPE_1__ TRACKBAR_INFO ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ HTHEME ;
typedef int HDC ;
typedef int HBRUSH ;


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
 int VAR_12 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int,int,TYPE_2__*,int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
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
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 TYPE_3__ VAR_32 ;

__attribute__((used)) static void
FUNC_7 (TRACKBAR_INFO *VAR_33, HDC VAR_34)
{
    HTHEME VAR_35 = FUNC_3 (VAR_33->hwndSelf);
    int VAR_36;
    HBRUSH VAR_37;

    if (VAR_35)
    {
        int VAR_38;
        int VAR_39;
        if (VAR_33->dwStyle & VAR_15)
            VAR_38 = (VAR_33->dwStyle & VAR_18) ? VAR_26 : VAR_21;
        else if (VAR_33->dwStyle & VAR_16)
            VAR_38 = (VAR_33->dwStyle & VAR_18) ? VAR_23 : VAR_25;
        else
            VAR_38 = (VAR_33->dwStyle & VAR_18) ? VAR_24 : VAR_22;

        if (VAR_33->dwStyle & VAR_31)
            VAR_39 = VAR_27;
        else if (VAR_33->flags & VAR_19)
            VAR_39 = VAR_30;
        else if (VAR_33->flags & VAR_20)
            VAR_39 = VAR_28;
        else
            VAR_39 = VAR_29;

        FUNC_1 (VAR_35, VAR_34, VAR_38, VAR_39, &VAR_33->rcThumb, ((void*)0));

        return;
    }

    if (VAR_33->dwStyle & VAR_31 || VAR_33->flags & VAR_19)
    {
        if (VAR_32.clr3dHilight == VAR_32.clrWindow)
            VAR_37 = VAR_12;
        else
            VAR_37 = FUNC_2(VAR_11);

        FUNC_5(VAR_34, VAR_32.clr3dFace);
        FUNC_4(VAR_34, VAR_32.clr3dHilight);
    }
    else
        VAR_37 = FUNC_2(VAR_10);

    VAR_36 = FUNC_6(VAR_33, VAR_34, VAR_37);

    if (VAR_33->dwStyle & VAR_15)
    {
       FUNC_0(VAR_34, &VAR_33->rcThumb, VAR_13, VAR_6 | VAR_8);
       return;
    }
    else
    {
        RECT VAR_40 = VAR_33->rcThumb;

        if (VAR_33->dwStyle & VAR_18)
        {
          if (VAR_33->dwStyle & VAR_16)
          {

            VAR_40.left += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_9 | VAR_7 | VAR_0 | VAR_8);


            VAR_40.left -= VAR_36;
            VAR_40.right = VAR_40.left + VAR_36;
            VAR_40.bottom = VAR_33->rcThumb.top + VAR_36 + 1;
            VAR_40.top = VAR_33->rcThumb.top;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_4 | VAR_8);


            VAR_40.top += VAR_36;
            VAR_40.bottom += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_14, VAR_3 | VAR_8);
            return;
          }
          else
          {

            VAR_40.right -= VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_9 | VAR_5 | VAR_0 | VAR_8);


            VAR_40.left = VAR_40.right;
            VAR_40.right += VAR_36 + 1;
            VAR_40.bottom = VAR_33->rcThumb.top + VAR_36 + 1;
            VAR_40.top = VAR_33->rcThumb.top;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_3 | VAR_8);


            VAR_40.top += VAR_36;
            VAR_40.bottom += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_1 | VAR_8);
          }
        }
        else
        {
          if (VAR_33->dwStyle & VAR_17)
          {

            VAR_40.top += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_5 | VAR_0 | VAR_7 | VAR_8);


            VAR_40.left = VAR_33->rcThumb.left;
            VAR_40.right = VAR_40.left + VAR_36;
            VAR_40.bottom = VAR_33->rcThumb.top + VAR_36 + 1;
            VAR_40.top -= VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_4 | VAR_8);


            VAR_40.left += VAR_36;
            VAR_40.right += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_2 | VAR_8);
          }
          else
          {

            VAR_40.bottom -= VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_5 | VAR_9 | VAR_7 | VAR_8);


            VAR_40.left = VAR_33->rcThumb.left;
            VAR_40.right = VAR_40.left + VAR_36;
            VAR_40.top = VAR_33->rcThumb.bottom - VAR_36 - 1;
            VAR_40.bottom += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_3 | VAR_8);


            VAR_40.left += VAR_36;
            VAR_40.right += VAR_36;
            FUNC_0(VAR_34, &VAR_40, VAR_13, VAR_1 | VAR_8);
          }
        }
    }
}
