
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int y; int x; } ;
struct TYPE_6__ {TYPE_1__ WindowOrigin; int AutoPosition; } ;
struct TYPE_7__ {TYPE_2__ GuiInfo; int hWindow; } ;
typedef TYPE_3__* PGUI_CONSOLE_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,int) ;

VOID
FUNC_1(PGUI_CONSOLE_DATA VAR_3)
{

    if (!VAR_3->GuiInfo.AutoPosition)
    {
        FUNC_0(VAR_3->hWindow,
                     ((void*)0),
                     VAR_3->GuiInfo.WindowOrigin.x,
                     VAR_3->GuiInfo.WindowOrigin.y,
                     0,
                     0,
                     VAR_2 | VAR_1 | VAR_0);
    }
}
