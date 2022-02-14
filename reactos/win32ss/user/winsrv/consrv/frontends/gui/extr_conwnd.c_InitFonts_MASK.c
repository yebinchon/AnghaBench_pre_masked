
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_11__ {scalar_t__ X; scalar_t__ Y; } ;
struct TYPE_9__ {scalar_t__ FaceName; scalar_t__ FontWeight; TYPE_4__ FontSize; scalar_t__ FontFamily; } ;
struct TYPE_10__ {TYPE_2__ GuiInfo; int ** Font; int hWindow; int CharWidth; int CharHeight; TYPE_1__* Console; } ;
struct TYPE_8__ {int OutputCodePage; } ;
typedef TYPE_3__* PGUI_CONSOLE_DATA ;
typedef scalar_t__ LPWSTR ;
typedef int LONG ;
typedef int * HFONT ;
typedef int HDC ;
typedef TYPE_4__ COORD ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int ,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 void* FUNC_2 (int *,scalar_t__,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int *,int *) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__,int ,scalar_t__,int ) ;
 int VAR_6 ;

BOOL
FUNC_10(PGUI_CONSOLE_DATA VAR_7,
          LPWSTR VAR_8,
          ULONG VAR_9,
          COORD VAR_10,
          ULONG VAR_11)
{
    HDC VAR_12;
    HFONT VAR_13;





    VAR_13 = FUNC_1((LONG)(ULONG)VAR_10.Y,
                                (LONG)(ULONG)VAR_10.X,
                                VAR_8,
                                VAR_9,
                                VAR_11,
                                VAR_7->Console->OutputCodePage);
    if (VAR_13 == ((void*)0))
    {
        FUNC_3("InitFonts: CreateConsoleFontEx failed\n");
        return VAR_0;
    }

    VAR_12 = FUNC_6(VAR_7->hWindow);
    if (!FUNC_7(VAR_12, VAR_13, &VAR_7->CharHeight, &VAR_7->CharWidth))
    {
        FUNC_3("InitFonts: GetFontCellSize failed\n");
        FUNC_8(VAR_7->hWindow, VAR_12);
        FUNC_5(VAR_13);
        return VAR_0;
    }
    FUNC_8(VAR_7->hWindow, VAR_12);





    FUNC_4(VAR_7);
    VAR_7->Font[VAR_2] = VAR_13;




    VAR_7->Font[VAR_1] =
        FUNC_2(VAR_7->Font[VAR_2],
                          VAR_11 < VAR_4 ? VAR_4 : VAR_11,
                          VAR_0,
                          VAR_0);
    VAR_7->Font[VAR_3] =
        FUNC_2(VAR_7->Font[VAR_2],
                          VAR_11,
                          VAR_6,
                          VAR_0);
    VAR_7->Font[VAR_1 | VAR_3] =
        FUNC_2(VAR_7->Font[VAR_2],
                          VAR_11 < VAR_4 ? VAR_4 : VAR_11,
                          VAR_6,
                          VAR_0);




    if (VAR_8 != VAR_7->GuiInfo.FaceName)
    {
        FUNC_9(VAR_7->GuiInfo.FaceName, FUNC_0(VAR_7->GuiInfo.FaceName),
                        VAR_8, VAR_5);
    }
    VAR_7->GuiInfo.FontFamily = VAR_9;
    VAR_7->GuiInfo.FontSize = VAR_10;
    VAR_7->GuiInfo.FontWeight = VAR_11;

    return VAR_6;
}
