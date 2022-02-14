
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_8__ {int ViewOrigin; } ;
struct TYPE_6__ {int dwFlags; } ;
struct TYPE_7__ {int dwSelectionCursor; TYPE_1__ Selection; TYPE_3__* ActiveBuffer; } ;
typedef TYPE_2__* PGUI_CONSOLE_DATA ;
typedef TYPE_3__* PCONSOLE_SCREEN_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static VOID
FUNC_1(PGUI_CONSOLE_DATA VAR_1)
{
    PCONSOLE_SCREEN_BUFFER VAR_2 = VAR_1->ActiveBuffer;


    VAR_1->Selection.dwFlags = VAR_0;


    VAR_1->dwSelectionCursor = VAR_2->ViewOrigin;
    FUNC_0(VAR_1,
                    &VAR_1->dwSelectionCursor,
                    &VAR_1->dwSelectionCursor);
}
