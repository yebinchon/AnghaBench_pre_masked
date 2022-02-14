
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int style; void* cy; void* y; void* cx; void* x; int hOwner; int szClass; int szTitle; } ;
struct TYPE_4__ {int nConsoleCount; } ;
typedef TYPE_1__* PCONSOLE_MAINFRAME_WND ;
typedef TYPE_2__ MDICREATESTRUCT ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 void* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

HWND
FUNC_3(PCONSOLE_MAINFRAME_WND VAR_4,
                  HWND VAR_5)
{
    MDICREATESTRUCT VAR_6;
    HWND VAR_7;

    VAR_6.szTitle = FUNC_0();
    VAR_6.szClass = VAR_3;
    VAR_6.hOwner = FUNC_1(((void*)0));
    VAR_6.x = VAR_6.cx = VAR_0;
    VAR_6.y = VAR_6.cy = VAR_0;
    VAR_6.style = VAR_1;

    VAR_7 = (HWND)FUNC_2(VAR_5, VAR_2, 0, (LPARAM)&VAR_6);
    if (VAR_7)
    {
        VAR_4->nConsoleCount++;
    }

    return VAR_7;
}
