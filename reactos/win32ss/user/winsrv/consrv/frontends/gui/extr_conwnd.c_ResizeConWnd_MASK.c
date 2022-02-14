
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sInfo ;
typedef int VOID ;
struct TYPE_11__ {int X; int Y; } ;
struct TYPE_10__ {int X; int Y; } ;
struct TYPE_9__ {int Y; int X; } ;
struct TYPE_14__ {TYPE_3__ ViewOrigin; TYPE_2__ ViewSize; TYPE_1__ ScreenBufferSize; } ;
struct TYPE_13__ {int hWindow; TYPE_6__* ActiveBuffer; } ;
struct TYPE_12__ {int cbSize; int fMask; int nMax; int nPage; int nPos; scalar_t__ nMin; } ;
typedef TYPE_4__ SCROLLINFO ;
typedef TYPE_5__* PGUI_CONSOLE_DATA ;
typedef TYPE_6__* PCONSOLE_SCREEN_BUFFER ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
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
 int FUNC_1 (int ,int ,TYPE_4__*,int ) ;
 int FUNC_2 (int ,int *,int ,int ,int,int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_17 ;

__attribute__((used)) static VOID
FUNC_4(PGUI_CONSOLE_DATA VAR_18, DWORD VAR_19, DWORD VAR_20)
{
    PCONSOLE_SCREEN_BUFFER VAR_21 = VAR_18->ActiveBuffer;
    SCROLLINFO VAR_22;

    DWORD VAR_23, VAR_24;

    VAR_23 = VAR_21->ViewSize.X * VAR_19 +
             2 * (FUNC_0(VAR_7) + FUNC_0(VAR_6));
    VAR_24 = VAR_21->ViewSize.Y * VAR_20 +
             2 * (FUNC_0(VAR_11) + FUNC_0(VAR_10)) + FUNC_0(VAR_9);


    VAR_22.cbSize = sizeof(VAR_22);
    VAR_22.fMask = VAR_5 | VAR_3 | VAR_4;
    VAR_22.nMin = 0;
    if (VAR_21->ScreenBufferSize.Y > VAR_21->ViewSize.Y)
    {
        VAR_22.nMax = VAR_21->ScreenBufferSize.Y - 1;
        VAR_22.nPage = VAR_21->ViewSize.Y;
        VAR_22.nPos = VAR_21->ViewOrigin.Y;
        FUNC_1(VAR_18->hWindow, VAR_2, &VAR_22, VAR_17);
        VAR_23 += FUNC_0(VAR_8);
        FUNC_3(VAR_18->hWindow, VAR_2, VAR_17);
    }
    else
    {
        FUNC_3(VAR_18->hWindow, VAR_2, VAR_0);
    }

    if (VAR_21->ScreenBufferSize.X > VAR_21->ViewSize.X)
    {
        VAR_22.nMax = VAR_21->ScreenBufferSize.X - 1;
        VAR_22.nPage = VAR_21->ViewSize.X;
        VAR_22.nPos = VAR_21->ViewOrigin.X;
        FUNC_1(VAR_18->hWindow, VAR_1, &VAR_22, VAR_17);
        VAR_24 += FUNC_0(VAR_12);
        FUNC_3(VAR_18->hWindow, VAR_1, VAR_17);
    }
    else
    {
        FUNC_3(VAR_18->hWindow, VAR_1, VAR_0);
    }


    FUNC_2(VAR_18->hWindow, ((void*)0), 0, 0, VAR_23, VAR_24,
                 VAR_16 | VAR_15 | VAR_13 | VAR_14);


}
