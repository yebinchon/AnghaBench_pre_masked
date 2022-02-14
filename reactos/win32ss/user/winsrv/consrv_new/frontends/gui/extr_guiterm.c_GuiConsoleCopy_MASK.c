
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int Buffer; } ;
struct TYPE_9__ {TYPE_1__ Title; } ;
struct TYPE_8__ {int hWindow; TYPE_3__* Console; } ;
typedef int PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_2__* PGUI_CONSOLE_DATA ;
typedef int PGRAPHICS_SCREEN_BUFFER ;
typedef scalar_t__ PCONSOLE_SCREEN_BUFFER ;
typedef TYPE_3__* PCONSOLE ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static VOID
FUNC_8(PGUI_CONSOLE_DATA VAR_1)
{
    if (FUNC_6(VAR_1->hWindow))
    {
        PCONSOLE VAR_2 = VAR_1->Console;
        PCONSOLE_SCREEN_BUFFER VAR_3 = FUNC_1(VAR_2);

        if (FUNC_2(VAR_3) == VAR_0)
        {
            FUNC_5((PTEXTMODE_SCREEN_BUFFER)VAR_3);
        }
        else
        {
            FUNC_4((PGRAPHICS_SCREEN_BUFFER)VAR_3);
        }

        FUNC_0();


        FUNC_3(VAR_2, ((void*)0));
        FUNC_7(VAR_1->hWindow, VAR_2->Title.Buffer);
    }
}
