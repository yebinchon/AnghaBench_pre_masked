
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int Console; int hWindow; } ;
typedef int PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;
typedef int PGRAPHICS_SCREEN_BUFFER ;
typedef scalar_t__ PCONSOLE_SCREEN_BUFFER ;
typedef int PCONSOLE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static VOID
FUNC_6(PGUI_CONSOLE_DATA VAR_1)
{
    if (FUNC_5(VAR_1->hWindow))
    {
        PCONSOLE VAR_2 = VAR_1->Console;
        PCONSOLE_SCREEN_BUFFER VAR_3 = FUNC_1(VAR_2);

        if (FUNC_2(VAR_3) == VAR_0)
        {
            FUNC_4((PTEXTMODE_SCREEN_BUFFER)VAR_3);
        }
        else
        {
            FUNC_3((PGRAPHICS_SCREEN_BUFFER)VAR_3);
        }

        FUNC_0();
    }
}
