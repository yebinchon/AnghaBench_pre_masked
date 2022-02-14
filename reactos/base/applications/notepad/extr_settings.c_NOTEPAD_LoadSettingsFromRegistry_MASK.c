
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_5__ {int lfCharSet; int lfClipPrecision; int lfItalic; int lfOutPrecision; int lfPitchAndFamily; int lfQuality; int lfStrikeOut; int lfUnderline; void* lfHeight; scalar_t__ lfWeight; scalar_t__ lfOrientation; int lfFaceName; scalar_t__ lfEscapement; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_7__ {int bWrapLongLines; int bShowStatusBar; scalar_t__ hFont; int hEdit; TYPE_1__ lfFont; int szFooter; int hInstance; int szHeader; TYPE_2__ lMargins; TYPE_2__ main_rect; } ;
typedef int LPARAM ;
typedef double INT ;
typedef int * HKEY ;
typedef scalar_t__ HFONT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int *,int ,scalar_t__*) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int ,int **) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (TYPE_2__*,int,int,int,int) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int ,int ) ;
 int VAR_17 ;

void FUNC_17(void)
{
    HKEY VAR_18 = ((void*)0);
    HFONT VAR_19;
    DWORD VAR_20 = 0;
    INT VAR_21, VAR_22, VAR_23;

    VAR_21 = (FUNC_3(VAR_11) > FUNC_3(VAR_12)) ?
                  FUNC_3(VAR_12) : FUNC_3(VAR_11);

    VAR_22 = (INT)(VAR_21 * .95);
    VAR_23 = VAR_22 * 3 / 4;
    FUNC_13(&VAR_7.main_rect, 0, 0, VAR_22, VAR_23);

    if (FUNC_11(VAR_8, VAR_17, &VAR_18) == VAR_2)
    {
        FUNC_7(VAR_18, FUNC_15("lfCharSet"), &VAR_7.lfFont.lfCharSet);
        FUNC_7(VAR_18, FUNC_15("lfClipPrecision"), &VAR_7.lfFont.lfClipPrecision);
        FUNC_8(VAR_18, FUNC_15("lfEscapement"), (DWORD*)&VAR_7.lfFont.lfEscapement);
        FUNC_9(VAR_18, FUNC_15("lfFaceName"), VAR_7.lfFont.lfFaceName, FUNC_0(VAR_7.lfFont.lfFaceName));
        FUNC_7(VAR_18, FUNC_15("lfItalic"), &VAR_7.lfFont.lfItalic);
        FUNC_8(VAR_18, FUNC_15("lfOrientation"), (DWORD*)&VAR_7.lfFont.lfOrientation);
        FUNC_7(VAR_18, FUNC_15("lfOutPrecision"), &VAR_7.lfFont.lfOutPrecision);
        FUNC_7(VAR_18, FUNC_15("lfPitchAndFamily"), &VAR_7.lfFont.lfPitchAndFamily);
        FUNC_7(VAR_18, FUNC_15("lfQuality"), &VAR_7.lfFont.lfQuality);
        FUNC_7(VAR_18, FUNC_15("lfStrikeOut"), &VAR_7.lfFont.lfStrikeOut);
        FUNC_7(VAR_18, FUNC_15("lfUnderline"), &VAR_7.lfFont.lfUnderline);
        FUNC_8(VAR_18, FUNC_15("lfWeight"), (DWORD*)&VAR_7.lfFont.lfWeight);
        FUNC_8(VAR_18, FUNC_15("iPointSize"), &VAR_20);
        FUNC_6(VAR_18, FUNC_15("fWrap"), &VAR_7.bWrapLongLines);
        FUNC_6(VAR_18, FUNC_15("fStatusBar"), &VAR_7.bShowStatusBar);
        FUNC_9(VAR_18, FUNC_15("szHeader"), VAR_7.szHeader, FUNC_0(VAR_7.szHeader));
        FUNC_9(VAR_18, FUNC_15("szTrailer"), VAR_7.szFooter, FUNC_0(VAR_7.szFooter));
        FUNC_8(VAR_18, FUNC_15("iMarginLeft"), (DWORD*)&VAR_7.lMargins.left);
        FUNC_8(VAR_18, FUNC_15("iMarginTop"), (DWORD*)&VAR_7.lMargins.top);
        FUNC_8(VAR_18, FUNC_15("iMarginRight"), (DWORD*)&VAR_7.lMargins.right);
        FUNC_8(VAR_18, FUNC_15("iMarginBottom"), (DWORD*)&VAR_7.lMargins.bottom);

        FUNC_8(VAR_18, FUNC_15("iWindowPosX"), (DWORD*)&VAR_7.main_rect.left);
        FUNC_8(VAR_18, FUNC_15("iWindowPosY"), (DWORD*)&VAR_7.main_rect.top);
        FUNC_8(VAR_18, FUNC_15("iWindowPosDX"), (DWORD*)&VAR_22);
        FUNC_8(VAR_18, FUNC_15("iWindowPosDY"), (DWORD*)&VAR_23);

        VAR_7.main_rect.right = VAR_7.main_rect.left + VAR_22;
        VAR_7.main_rect.bottom = VAR_7.main_rect.top + VAR_23;


        VAR_7.bShowStatusBar = !VAR_7.bShowStatusBar;

        if (VAR_20 != 0)
            VAR_7.lfFont.lfHeight = FUNC_4(VAR_20);
        else
            VAR_7.lfFont.lfHeight = FUNC_4(100);

        FUNC_10(VAR_18);
    }
    else
    {

        VAR_7.bShowStatusBar = VAR_3;
        VAR_7.bWrapLongLines = VAR_3;
        FUNC_13(&VAR_7.lMargins, 750, 1000, 750, 1000);




        FUNC_5(VAR_7.hInstance, VAR_14, VAR_7.szHeader,
                   FUNC_0(VAR_7.szHeader));
        FUNC_5(VAR_7.hInstance, VAR_13, VAR_7.szFooter,
                   FUNC_0(VAR_7.szFooter));

        FUNC_14(&VAR_7.lfFont, sizeof(VAR_7.lfFont));
        VAR_7.lfFont.lfCharSet = VAR_0;
        VAR_7.lfFont.lfClipPrecision = VAR_1;
        VAR_7.lfFont.lfEscapement = 0;
        FUNC_16(VAR_7.lfFont.lfFaceName, FUNC_15("Lucida Console"));
        VAR_7.lfFont.lfItalic = VAR_3;
        VAR_7.lfFont.lfOrientation = 0;
        VAR_7.lfFont.lfOutPrecision = VAR_9;
        VAR_7.lfFont.lfPitchAndFamily = VAR_5 | VAR_4;
        VAR_7.lfFont.lfQuality = VAR_10;
        VAR_7.lfFont.lfStrikeOut = VAR_3;
        VAR_7.lfFont.lfUnderline = VAR_3;
        VAR_7.lfFont.lfWeight = VAR_6;
        VAR_7.lfFont.lfHeight = FUNC_4(100);
    }

    VAR_19 = FUNC_1(&VAR_7.lfFont);
    FUNC_12(VAR_7.hEdit, VAR_16, (WPARAM)VAR_19, (LPARAM)VAR_15);
    if (VAR_19)
    {
        if (VAR_7.hFont)
            FUNC_2(VAR_7.hFont);
        VAR_7.hFont = VAR_19;
    }
}
