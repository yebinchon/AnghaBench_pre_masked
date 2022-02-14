
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int lpCreateParams; } ;
struct TYPE_11__ {TYPE_2__* ActiveBuffer; } ;
struct TYPE_8__ {int FontWeight; int FontSize; int FontFamily; int FaceName; } ;
struct TYPE_10__ {scalar_t__ hIcon; int * hWindow; int hGuiInitEvent; scalar_t__ IsWindowVisible; scalar_t__ hIconSm; int * hSysPalette; int * hBitmap; int hMemDC; TYPE_1__ GuiInfo; int hSysMenu; TYPE_4__* Console; } ;
struct TYPE_9__ {int ForceCursorOff; int CursorBlinkOn; } ;
typedef TYPE_3__* PGUI_CONSOLE_DATA ;
typedef TYPE_4__* PCONSRV_CONSOLE ;
typedef TYPE_5__* LPCREATESTRUCTW ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ,int ,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static BOOL
FUNC_10(HWND VAR_10, LPCREATESTRUCTW VAR_11)
{
    PGUI_CONSOLE_DATA VAR_12 = (PGUI_CONSOLE_DATA)VAR_11->lpCreateParams;
    PCONSRV_CONSOLE VAR_13;

    if (VAR_12 == ((void*)0))
    {
        FUNC_2("GuiConsoleNcCreate: No GUI data\n");
        return VAR_2;
    }

    VAR_13 = VAR_12->Console;

    VAR_12->hWindow = VAR_10;
    VAR_12->hSysMenu = FUNC_5(VAR_10, VAR_2);


    if (!FUNC_6(VAR_12,
                   VAR_12->GuiInfo.FaceName,
                   VAR_12->GuiInfo.FontFamily,
                   VAR_12->GuiInfo.FontSize,
                   VAR_12->GuiInfo.FontWeight))
    {
        FUNC_2("GuiConsoleNcCreate: InitFonts failed\n");
        VAR_12->hWindow = ((void*)0);
        FUNC_7(VAR_12->hGuiInitEvent, ((void*)0));
        return VAR_2;
    }


    VAR_12->hMemDC = FUNC_0(((void*)0));
    VAR_12->hBitmap = ((void*)0);
    VAR_12->hSysPalette = ((void*)0);


    if (VAR_12->hIcon != VAR_9)
    {
        FUNC_3(VAR_12->hWindow, VAR_8, VAR_4 , (LPARAM)VAR_12->hIcon );
        FUNC_3(VAR_12->hWindow, VAR_8, VAR_5, (LPARAM)VAR_12->hIconSm);
    }


    VAR_13->ActiveBuffer->CursorBlinkOn = VAR_6;
    VAR_13->ActiveBuffer->ForceCursorOff = VAR_2;


    FUNC_9(VAR_12->hWindow, VAR_3, (DWORD_PTR)VAR_12);

    if (VAR_12->IsWindowVisible)
    {
        FUNC_8(VAR_12->hWindow, VAR_1, VAR_0, ((void*)0));
    }




    FUNC_1("OnNcCreate - setting start event\n");
    FUNC_7(VAR_12->hGuiInitEvent, ((void*)0));


    FUNC_4(VAR_12->hWindow, VAR_6);

    return (BOOL)FUNC_3(VAR_12->hWindow, VAR_7, 0, (LPARAM)VAR_11);
}
