
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_18__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_17__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_13__ {scalar_t__ Y; scalar_t__ X; } ;
struct TYPE_12__ {scalar_t__ Y; } ;
struct TYPE_16__ {TYPE_2__ ScreenBufferSize; TYPE_1__ CursorPosition; } ;
struct TYPE_14__ {int dwFlags; } ;
struct TYPE_15__ {TYPE_9__ dwSelectionCursor; TYPE_3__ Selection; TYPE_5__* ActiveBuffer; } ;
typedef TYPE_4__* PGUI_CONSOLE_DATA ;
typedef TYPE_5__* PCONSOLE_SCREEN_BUFFER ;
typedef TYPE_6__ COORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,TYPE_6__*,TYPE_9__*) ;

__attribute__((used)) static VOID
FUNC_2(PGUI_CONSOLE_DATA VAR_3)
{
    PCONSOLE_SCREEN_BUFFER VAR_4 = VAR_3->ActiveBuffer;
    COORD VAR_5;


    VAR_3->Selection.dwFlags = VAR_1;




    VAR_5.X = VAR_5.Y = 0;
    VAR_3->dwSelectionCursor.X = VAR_4->ScreenBufferSize.X - 1;






    if (FUNC_0(VAR_4) == VAR_2)
    {




        VAR_3->dwSelectionCursor.Y = VAR_4->CursorPosition.Y;
    }
    else
    {



        VAR_3->dwSelectionCursor.Y = VAR_4->ScreenBufferSize.Y - 1;
    }


    VAR_3->Selection.dwFlags |= VAR_0;
    FUNC_1(VAR_3, &VAR_5, &VAR_3->dwSelectionCursor);
}
