
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int lpCreateParams; } ;
struct TYPE_16__ {TYPE_2__* ActiveBuffer; } ;
struct TYPE_11__ {int FontFamily; int FaceName; int FontWeight; int FontSize; } ;
struct TYPE_15__ {int * hWindow; int hGuiInitEvent; int CharWidth; scalar_t__ CharHeight; int * Font; TYPE_1__ GuiInfo; TYPE_6__* Console; } ;
struct TYPE_14__ {int cx; } ;
struct TYPE_13__ {scalar_t__ tmExternalLeading; scalar_t__ tmHeight; int tmMaxCharWidth; } ;
struct TYPE_12__ {int ForceCursorOff; int CursorBlinkOn; } ;
typedef TYPE_3__ TEXTMETRICW ;
typedef TYPE_4__ SIZE ;
typedef TYPE_5__* PGUI_CONSOLE_DATA ;
typedef TYPE_6__* PCONSOLE ;
typedef TYPE_7__* LPCREATESTRUCTW ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int * HFONT ;
typedef int * HDC ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,int,TYPE_4__*) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,int ,int *) ;
 int FUNC_14 (int *,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static BOOL
FUNC_15(HWND VAR_12, LPCREATESTRUCTW VAR_13)
{
    PGUI_CONSOLE_DATA VAR_14 = (PGUI_CONSOLE_DATA)VAR_13->lpCreateParams;
    PCONSOLE VAR_15;
    HDC VAR_16;
    HFONT VAR_17;
    TEXTMETRICW VAR_18;
    SIZE VAR_19;

    FUNC_1("GuiConsoleHandleNcCreate\n");

    if (((void*)0) == VAR_14)
    {
        FUNC_2("GuiConsoleNcCreate: No GUI data\n");
        return VAR_3;
    }

    VAR_15 = VAR_14->Console;

    VAR_14->hWindow = VAR_12;

    VAR_14->Font = FUNC_0(FUNC_9(VAR_14->GuiInfo.FontSize),
                                0,
                                0,
                                VAR_9,
                                VAR_14->GuiInfo.FontWeight,
                                VAR_3,
                                VAR_3,
                                VAR_3,
                                VAR_7,
                                VAR_8,
                                VAR_0,
                                VAR_6,
                                VAR_4 | VAR_14->GuiInfo.FontFamily ,
                                VAR_14->GuiInfo.FaceName);

    if (((void*)0) == VAR_14->Font)
    {
        FUNC_2("GuiConsoleNcCreate: CreateFont failed\n");
        VAR_14->hWindow = ((void*)0);
        FUNC_12(VAR_14->hGuiInitEvent);
        return VAR_3;
    }
    VAR_16 = FUNC_5(VAR_14->hWindow);
    if (((void*)0) == VAR_16)
    {
        FUNC_2("GuiConsoleNcCreate: GetDC failed\n");
        FUNC_4(VAR_14->Font);
        VAR_14->hWindow = ((void*)0);
        FUNC_12(VAR_14->hGuiInitEvent);
        return VAR_3;
    }
    VAR_17 = FUNC_11(VAR_16, VAR_14->Font);
    if (((void*)0) == VAR_17)
    {
        FUNC_2("GuiConsoleNcCreate: SelectObject failed\n");
        FUNC_10(VAR_14->hWindow, VAR_16);
        FUNC_4(VAR_14->Font);
        VAR_14->hWindow = ((void*)0);
        FUNC_12(VAR_14->hGuiInitEvent);
        return VAR_3;
    }
    if (!FUNC_7(VAR_16, &VAR_18))
    {
        FUNC_2("GuiConsoleNcCreate: GetTextMetrics failed\n");
        FUNC_11(VAR_16, VAR_17);
        FUNC_10(VAR_14->hWindow, VAR_16);
        FUNC_4(VAR_14->Font);
        VAR_14->hWindow = ((void*)0);
        FUNC_12(VAR_14->hGuiInitEvent);
        return VAR_3;
    }
    VAR_14->CharWidth = VAR_18.tmMaxCharWidth;
    VAR_14->CharHeight = VAR_18.tmHeight + VAR_18.tmExternalLeading;


    if (FUNC_6(VAR_16, L"R", 1, &VAR_19))
        VAR_14->CharWidth = VAR_19.cx;

    FUNC_11(VAR_16, VAR_17);

    FUNC_10(VAR_14->hWindow, VAR_16);


    VAR_15->ActiveBuffer->CursorBlinkOn = VAR_10;
    VAR_15->ActiveBuffer->ForceCursorOff = VAR_3;


    FUNC_14(VAR_14->hWindow, VAR_5, (DWORD_PTR)VAR_14);

    FUNC_13(VAR_14->hWindow, VAR_2, VAR_1, ((void*)0));
    FUNC_8(VAR_14->hWindow);

    FUNC_1("GuiConsoleHandleNcCreate - setting start event\n");
    FUNC_12(VAR_14->hGuiInitEvent);

    return (BOOL)FUNC_3(VAR_14->hWindow, VAR_11, 0, (LPARAM)VAR_13);
}
