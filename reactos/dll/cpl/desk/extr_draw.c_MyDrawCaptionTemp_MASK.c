
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_14__ {int* crColor; } ;
struct TYPE_13__ {int member_1; int member_0; } ;
struct TYPE_12__ {int bottom; scalar_t__ right; int top; scalar_t__ left; } ;
struct TYPE_11__ {int Red; int Green; int Blue; scalar_t__ Alpha; int y; scalar_t__ x; } ;
typedef TYPE_1__ TRIVERTEX ;
typedef TYPE_2__ RECT ;
typedef int LPCWSTR ;
typedef int HWND ;
typedef int HICON ;
typedef int HGDIOBJ ;
typedef int HFONT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef TYPE_3__ GRADIENT_RECT ;
typedef TYPE_4__ COLOR_SCHEME ;
typedef int COLORREF ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,TYPE_2__*,int) ;
 int FUNC_3 (int ,TYPE_2__ const*,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,TYPE_1__*,int,TYPE_3__*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;

BOOL
FUNC_8(HWND VAR_13, HDC VAR_14, const RECT *VAR_15, HFONT VAR_16, HICON VAR_17, LPCWSTR VAR_18, UINT VAR_19, COLOR_SCHEME *VAR_20)
{



    HBRUSH VAR_21;
    HGDIOBJ VAR_22;
    RECT VAR_23;







    if (VAR_19 & VAR_7)
    {
        GRADIENT_RECT VAR_24 = {0, 1};
        TRIVERTEX VAR_25[2];
        COLORREF VAR_26[2];

        VAR_26[0] = VAR_20->crColor[((VAR_19 & VAR_6) ?
            VAR_0 : VAR_4)];
        VAR_26[1] = VAR_20->crColor[((VAR_19 & VAR_6) ?
            VAR_2 : VAR_3)];

        VAR_25[0].x = VAR_15->left;
        VAR_25[0].y = VAR_15->top;
        VAR_25[0].Red = (WORD)VAR_26[0]<<8;
        VAR_25[0].Green = (WORD)VAR_26[0] & 0xFF00;
        VAR_25[0].Blue = (WORD)(VAR_26[0]>>8) & 0xFF00;
        VAR_25[0].Alpha = 0;

        VAR_25[1].x = VAR_15->right;
        VAR_25[1].y = VAR_15->bottom;
        VAR_25[1].Red = (WORD)VAR_26[1]<<8;
        VAR_25[1].Green = (WORD)VAR_26[1] & 0xFF00;
        VAR_25[1].Blue = (WORD)(VAR_26[1]>>8) & 0xFF00;
        VAR_25[1].Alpha = 0;

        FUNC_4(VAR_14, VAR_25, 2, &VAR_24, 1, VAR_10);
    }
    else
    {
        if (VAR_19 & VAR_6)
            VAR_21 = FUNC_0(VAR_20->crColor[VAR_0]);
        else
            VAR_21 = FUNC_0(VAR_20->crColor[VAR_4]);
        FUNC_3(VAR_14, VAR_15, VAR_21);
        FUNC_1(VAR_21);
    }

    VAR_22 = FUNC_5(VAR_14, VAR_16);
    FUNC_6(VAR_14, VAR_11);
    if (VAR_19 & VAR_6)
        FUNC_7(VAR_14, VAR_20->crColor[VAR_1]);
    else
        FUNC_7(VAR_14, VAR_20->crColor[VAR_5]);
    VAR_23.left = VAR_15->left + 2;
    VAR_23.top = VAR_15->top;
    VAR_23.right = VAR_15->right;
    VAR_23.bottom = VAR_15->bottom;
    FUNC_2(VAR_14, VAR_18, -1, &VAR_23, VAR_8 | VAR_9);
    FUNC_5(VAR_14, VAR_22);
    return VAR_12;
}
