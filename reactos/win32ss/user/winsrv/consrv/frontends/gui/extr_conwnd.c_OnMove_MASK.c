
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int y; int x; } ;
struct TYPE_8__ {TYPE_1__ WindowOrigin; } ;
struct TYPE_10__ {TYPE_2__ GuiInfo; int hWindow; } ;
struct TYPE_9__ {int top; int left; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__* PGUI_CONSOLE_DATA ;


 int FUNC_0 (int ,TYPE_3__*) ;

__attribute__((used)) static VOID
FUNC_1(PGUI_CONSOLE_DATA VAR_0)
{
    RECT VAR_1;





    FUNC_0(VAR_0->hWindow, &VAR_1);
    VAR_0->GuiInfo.WindowOrigin.x = VAR_1.left;
    VAR_0->GuiInfo.WindowOrigin.y = VAR_1.top;
}
