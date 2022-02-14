
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int X; int Y; } ;
struct TYPE_15__ {int X; int Y; } ;
struct TYPE_20__ {TYPE_2__ ViewSize; TYPE_1__ ViewOrigin; } ;
struct TYPE_19__ {TYPE_6__* ActiveBuffer; } ;
struct TYPE_18__ {scalar_t__ NumEntries; } ;
struct TYPE_17__ {int * PopupInputRoutine; } ;
typedef int SHORT ;
typedef int PUNICODE_STRING ;
typedef TYPE_3__* PPOPUP_WINDOW ;
typedef TYPE_4__* PHISTORY_BUFFER ;
typedef TYPE_5__* PCONSRV_CONSOLE ;
typedef TYPE_6__* PCONSOLE_SCREEN_BUFFER ;


 TYPE_3__* FUNC_0 (TYPE_5__*,TYPE_6__*,int,int,int,int) ;
 scalar_t__ FUNC_1 (TYPE_6__*) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ VAR_0 ;

PPOPUP_WINDOW
FUNC_3(PCONSRV_CONSOLE VAR_1,
                             PUNICODE_STRING VAR_2)
{
    PCONSOLE_SCREEN_BUFFER VAR_3;
    PPOPUP_WINDOW VAR_4;

    SHORT VAR_5, VAR_6;
    SHORT VAR_7, VAR_8;

    PHISTORY_BUFFER VAR_9 = FUNC_2(VAR_1, VAR_2);

    if (!VAR_9) return ((void*)0);
    if (VAR_9->NumEntries == 0) return ((void*)0);

    if (FUNC_1(VAR_1->ActiveBuffer) != VAR_0) return ((void*)0);
    VAR_3 = VAR_1->ActiveBuffer;

    VAR_7 = 40;
    VAR_8 = 10;


    VAR_5 = VAR_3->ViewOrigin.X + (VAR_3->ViewSize.X - VAR_7 ) / 2;
    VAR_6 = VAR_3->ViewOrigin.Y + (VAR_3->ViewSize.Y - VAR_8) / 2;


    VAR_4 = FUNC_0(VAR_1, VAR_3,
                              VAR_5, VAR_6, VAR_7, VAR_8);
    if (VAR_4 == ((void*)0)) return ((void*)0);

    VAR_4->PopupInputRoutine = ((void*)0);

    return VAR_4;
}
