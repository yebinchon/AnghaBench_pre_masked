
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ WPARAM ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ CmdIdLow; scalar_t__ CmdIdHigh; int hWindow; int Console; } ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;
typedef int PCONSRV_CONSOLE ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static LRESULT
FUNC_8(PGUI_CONSOLE_DATA VAR_3, WPARAM VAR_4, LPARAM VAR_5)
{
    LRESULT VAR_6 = VAR_1;
    PCONSRV_CONSOLE VAR_7 = VAR_3->Console;






    if (VAR_3->CmdIdLow <= (UINT)VAR_4 && (UINT)VAR_4 <= VAR_3->CmdIdHigh)
    {
        FUNC_7(VAR_7, (UINT)VAR_4);
        goto Quit;
    }


    switch (VAR_4)
    {
        case 132:
            FUNC_4(VAR_3);
            break;

        case 134:
            FUNC_0(VAR_3);
            break;

        case 131:
            FUNC_5(VAR_3);
            break;

        case 129:
            FUNC_6(VAR_3);
            break;

        case 130:
            FUNC_1("Scrolling is not handled yet\n");
            break;

        case 133:
            FUNC_1("Finding is not handled yet\n");
            break;

        case 135:
            FUNC_3(VAR_3, VAR_1);
            break;

        case 128:
            FUNC_3(VAR_3, VAR_0);
            break;

        default:
            VAR_6 = VAR_0;
            break;
    }

Quit:
    if (!VAR_6)
        VAR_6 = FUNC_2(VAR_3->hWindow, VAR_2, VAR_4, VAR_5);

    return VAR_6;
}
