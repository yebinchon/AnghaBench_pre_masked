
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_14__ {int X; int Y; } ;
struct TYPE_13__ {int X; int Y; } ;
struct TYPE_12__ {int Y; int X; } ;
struct TYPE_17__ {TYPE_3__ ViewOrigin; TYPE_2__ ViewSize; TYPE_1__ ScreenBufferSize; } ;
struct TYPE_16__ {int hWindow; int Console; } ;
struct TYPE_15__ {int cbSize; int fMask; int nMax; int nPage; int nPos; scalar_t__ nMin; } ;
typedef TYPE_4__ SCROLLINFO ;
typedef TYPE_5__* PGUI_CONSOLE_DATA ;
typedef TYPE_6__* PCONSOLE_SCREEN_BUFFER ;
typedef int PCONSOLE ;
typedef int DWORD ;


 TYPE_6__* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int*,int*) ;
 int FUNC_2 (int ) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ,int ,TYPE_4__*,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int,int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_17 ;

__attribute__((used)) static VOID
FUNC_6(PGUI_CONSOLE_DATA VAR_18)
{
    PCONSOLE VAR_19 = VAR_18->Console;
    PCONSOLE_SCREEN_BUFFER VAR_20 = FUNC_0(VAR_19);
    SCROLLINFO VAR_21;

    DWORD VAR_22, VAR_23;
    UINT VAR_24, VAR_25;

    FUNC_1(VAR_20, VAR_18, &VAR_24, &VAR_25);

    VAR_22 = VAR_20->ViewSize.X * VAR_24 +
             2 * (FUNC_2(VAR_7) + FUNC_2(VAR_6));
    VAR_23 = VAR_20->ViewSize.Y * VAR_25 +
             2 * (FUNC_2(VAR_11) + FUNC_2(VAR_10)) + FUNC_2(VAR_9);


    VAR_21.cbSize = sizeof(SCROLLINFO);
    VAR_21.fMask = VAR_5 | VAR_3 | VAR_4;
    VAR_21.nMin = 0;
    if (VAR_20->ScreenBufferSize.Y > VAR_20->ViewSize.Y)
    {
        VAR_21.nMax = VAR_20->ScreenBufferSize.Y - 1;
        VAR_21.nPage = VAR_20->ViewSize.Y;
        VAR_21.nPos = VAR_20->ViewOrigin.Y;
        FUNC_3(VAR_18->hWindow, VAR_2, &VAR_21, VAR_17);
        VAR_22 += FUNC_2(VAR_8);
        FUNC_5(VAR_18->hWindow, VAR_2, VAR_17);
    }
    else
    {
        FUNC_5(VAR_18->hWindow, VAR_2, VAR_0);
    }

    if (VAR_20->ScreenBufferSize.X > VAR_20->ViewSize.X)
    {
        VAR_21.nMax = VAR_20->ScreenBufferSize.X - 1;
        VAR_21.nPage = VAR_20->ViewSize.X;
        VAR_21.nPos = VAR_20->ViewOrigin.X;
        FUNC_3(VAR_18->hWindow, VAR_1, &VAR_21, VAR_17);
        VAR_23 += FUNC_2(VAR_12);
        FUNC_5(VAR_18->hWindow, VAR_1, VAR_17);
    }
    else
    {
        FUNC_5(VAR_18->hWindow, VAR_1, VAR_0);
    }


    FUNC_4(VAR_18->hWindow, ((void*)0), 0, 0, VAR_22, VAR_23,
                 VAR_16 | VAR_15 | VAR_13 | VAR_14);


}
