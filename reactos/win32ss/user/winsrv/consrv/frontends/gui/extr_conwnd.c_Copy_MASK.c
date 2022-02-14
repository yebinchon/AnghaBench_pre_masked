
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ ActiveBuffer; int hWindow; } ;
typedef int PTEXTMODE_SCREEN_BUFFER ;
typedef TYPE_1__* PGUI_CONSOLE_DATA ;
typedef int PGRAPHICS_SCREEN_BUFFER ;
typedef scalar_t__ PCONSOLE_SCREEN_BUFFER ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static VOID
FUNC_6(PGUI_CONSOLE_DATA VAR_1)
{
    if (FUNC_4(VAR_1->hWindow))
    {
        PCONSOLE_SCREEN_BUFFER VAR_2 = VAR_1->ActiveBuffer;

        if (FUNC_1(VAR_2) == VAR_0)
        {
            FUNC_3((PTEXTMODE_SCREEN_BUFFER)VAR_2, VAR_1);
        }
        else
        {
            FUNC_2((PGRAPHICS_SCREEN_BUFFER)VAR_2, VAR_1);
        }

        FUNC_0();
    }


    FUNC_5(VAR_1, ((void*)0), ((void*)0));
}
