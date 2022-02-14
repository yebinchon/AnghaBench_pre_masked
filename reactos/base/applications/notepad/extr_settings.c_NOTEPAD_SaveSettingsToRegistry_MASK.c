
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int left; int top; int right; int bottom; } ;
struct TYPE_6__ {int left; int top; int right; int bottom; } ;
struct TYPE_5__ {int lfCharSet; int lfClipPrecision; int lfEscapement; int lfItalic; int lfOrientation; int lfOutPrecision; int lfPitchAndFamily; int lfQuality; int lfStrikeOut; int lfUnderline; int lfWeight; int lfHeight; int lfFaceName; } ;
struct TYPE_7__ {TYPE_4__ main_rect; TYPE_2__ lMargins; int szFooter; int szHeader; scalar_t__ bShowStatusBar; scalar_t__ bWrapLongLines; TYPE_1__ lfFont; int hMainWnd; } ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int VAR_4 ;

void FUNC_7(void)
{
    HKEY VAR_5;
    DWORD VAR_6;

    FUNC_0(VAR_1.hMainWnd, &VAR_1.main_rect);

    if (FUNC_3(VAR_2, VAR_4,
                       0, ((void*)0), 0, VAR_3, ((void*)0),
                       &VAR_5, &VAR_6) == VAR_0)
    {
        FUNC_4(VAR_5, FUNC_6("lfCharSet"), VAR_1.lfFont.lfCharSet);
        FUNC_4(VAR_5, FUNC_6("lfClipPrecision"), VAR_1.lfFont.lfClipPrecision);
        FUNC_4(VAR_5, FUNC_6("lfEscapement"), VAR_1.lfFont.lfEscapement);
        FUNC_5(VAR_5, FUNC_6("lfFaceName"), VAR_1.lfFont.lfFaceName);
        FUNC_4(VAR_5, FUNC_6("lfItalic"), VAR_1.lfFont.lfItalic);
        FUNC_4(VAR_5, FUNC_6("lfOrientation"), VAR_1.lfFont.lfOrientation);
        FUNC_4(VAR_5, FUNC_6("lfOutPrecision"), VAR_1.lfFont.lfOutPrecision);
        FUNC_4(VAR_5, FUNC_6("lfPitchAndFamily"), VAR_1.lfFont.lfPitchAndFamily);
        FUNC_4(VAR_5, FUNC_6("lfQuality"), VAR_1.lfFont.lfQuality);
        FUNC_4(VAR_5, FUNC_6("lfStrikeOut"), VAR_1.lfFont.lfStrikeOut);
        FUNC_4(VAR_5, FUNC_6("lfUnderline"), VAR_1.lfFont.lfUnderline);
        FUNC_4(VAR_5, FUNC_6("lfWeight"), VAR_1.lfFont.lfWeight);
        FUNC_4(VAR_5, FUNC_6("iPointSize"), FUNC_1(VAR_1.lfFont.lfHeight));
        FUNC_4(VAR_5, FUNC_6("fWrap"), VAR_1.bWrapLongLines ? 1 : 0);
        FUNC_4(VAR_5, FUNC_6("fStatusBar"), VAR_1.bShowStatusBar ? 1 : 0);
        FUNC_5(VAR_5, FUNC_6("szHeader"), VAR_1.szHeader);
        FUNC_5(VAR_5, FUNC_6("szTrailer"), VAR_1.szFooter);
        FUNC_4(VAR_5, FUNC_6("iMarginLeft"), VAR_1.lMargins.left);
        FUNC_4(VAR_5, FUNC_6("iMarginTop"), VAR_1.lMargins.top);
        FUNC_4(VAR_5, FUNC_6("iMarginRight"), VAR_1.lMargins.right);
        FUNC_4(VAR_5, FUNC_6("iMarginBottom"), VAR_1.lMargins.bottom);
        FUNC_4(VAR_5, FUNC_6("iWindowPosX"), VAR_1.main_rect.left);
        FUNC_4(VAR_5, FUNC_6("iWindowPosY"), VAR_1.main_rect.top);
        FUNC_4(VAR_5, FUNC_6("iWindowPosDX"), VAR_1.main_rect.right - VAR_1.main_rect.left);
        FUNC_4(VAR_5, FUNC_6("iWindowPosDY"), VAR_1.main_rect.bottom - VAR_1.main_rect.top);

        FUNC_2(VAR_5);
    }
}
