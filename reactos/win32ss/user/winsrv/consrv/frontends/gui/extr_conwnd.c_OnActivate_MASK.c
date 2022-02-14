
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPARAM ;
typedef scalar_t__ WORD ;
typedef int VOID ;
struct TYPE_6__ {scalar_t__ FullScreen; } ;
struct TYPE_7__ {int IgnoreNextMouseSignal; int hWindow; TYPE_1__ GuiInfo; } ;
typedef TYPE_2__* PGUI_CONSOLE_DATA ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static VOID
FUNC_5(PGUI_CONSOLE_DATA VAR_5, WPARAM VAR_6)
{
    WORD VAR_7 = FUNC_2(VAR_6);

    FUNC_0("WM_ACTIVATE - ActivationState = %d\n", VAR_7);

    if ( VAR_7 == VAR_2 ||
         VAR_7 == VAR_3 )
    {
        if (VAR_5->GuiInfo.FullScreen)
        {
            FUNC_1(VAR_5);


        }
    }
    else
    {
        if (VAR_5->GuiInfo.FullScreen)
        {
            FUNC_4(VAR_5->hWindow, VAR_4, VAR_0, 0);
            FUNC_3(VAR_5);


        }
    }






    if (VAR_7 == VAR_3)
        VAR_5->IgnoreNextMouseSignal = VAR_1;
}
