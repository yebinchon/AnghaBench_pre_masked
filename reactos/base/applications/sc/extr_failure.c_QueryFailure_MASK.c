
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t cActions; TYPE_1__* lpsaActions; scalar_t__ lpCommand; scalar_t__ lpRebootMsg; int dwResetPeriod; } ;
struct TYPE_5__ {int Type; int Delay; } ;
typedef int * SC_HANDLE ;
typedef TYPE_2__* LPSERVICE_FAILURE_ACTIONS ;
typedef int LPCTSTR ;
typedef int * LPBYTE ;
typedef size_t INT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int *,scalar_t__,scalar_t__*) ;
 int FUNC_7 () ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (char*) ;
 int FUNC_10 (scalar_t__,...) ;

BOOL FUNC_11(LPCTSTR VAR_6)
{
    SC_HANDLE VAR_7 = ((void*)0);
    SC_HANDLE VAR_8 = ((void*)0);
    BOOL VAR_9 = VAR_5;
    DWORD VAR_10 = 0;
    LPSERVICE_FAILURE_ACTIONS VAR_11 = ((void*)0);
    INT VAR_12;





    VAR_7 = FUNC_4(((void*)0),
                             ((void*)0),
                             VAR_2);
    if (VAR_7 == ((void*)0))
    {
        VAR_9 = VAR_1;
        goto done;
    }

    VAR_8 = FUNC_5(VAR_7, VAR_6, VAR_4);
    if (VAR_8 == ((void*)0))
    {
        VAR_9 = VAR_1;
        goto done;
    }

    if (!FUNC_6(VAR_8,
                             VAR_3,
                             ((void*)0),
                             0,
                             &VAR_10))
    {
        if (VAR_10 == 0)
        {
            VAR_9 = VAR_1;
            goto done;
        }
    }

    VAR_11 = FUNC_2(FUNC_1(), 0, VAR_10);
    if (VAR_11 == ((void*)0))
    {
        FUNC_8(VAR_0);
        VAR_9 = VAR_1;
        goto done;
    }

    if (!FUNC_6(VAR_8,
                             VAR_3,
                             (LPBYTE)VAR_11,
                             VAR_10,
                             &VAR_10))
    {
        VAR_9 = VAR_1;
        goto done;
    }

    FUNC_10(FUNC_9("SERVICE_NAME: %s\n"), VAR_6);
    FUNC_10(FUNC_9("        RESET_PERIOD       : %lu seconds\n"), VAR_11->dwResetPeriod);
    FUNC_10(FUNC_9("        REBOOT_MESSAGE     : %s\n"), (VAR_11->lpRebootMsg) ? VAR_11->lpRebootMsg : FUNC_9(""));
    FUNC_10(FUNC_9("        COMMAND_LINE       : %s\n"), (VAR_11->lpCommand) ? VAR_11->lpCommand : FUNC_9(""));
    FUNC_10(FUNC_9("        FAILURE_ACTIONS    : "));
    for (VAR_12 = 0; VAR_12 < VAR_11->cActions; VAR_12++)
    {
        if (VAR_12 != 0)
            FUNC_10(FUNC_9("                             "));
        switch (VAR_11->lpsaActions[VAR_12].Type)
        {
            case 131:
                continue;

            case 129:
                FUNC_10(FUNC_9("RESTART -- Delay = %lu milliseconds.\n"), VAR_11->lpsaActions[VAR_12].Delay);
                break;

            case 130:
                FUNC_10(FUNC_9("REBOOT -- Delay = %lu milliseconds.\n"), VAR_11->lpsaActions[VAR_12].Delay);
                break;

            case 128:
                FUNC_10(FUNC_9("RUN_COMMAND -- Delay = %lu milliseconds.\n"), VAR_11->lpsaActions[VAR_12].Delay);
                break;

            default:
                FUNC_10(FUNC_9("\n"));
                break;
        }
    }

done:
    if (VAR_9 == VAR_1)
        FUNC_7();

    if (VAR_11 != ((void*)0))
        FUNC_3(FUNC_1(), 0, VAR_11);

    if (VAR_8)
        FUNC_0(VAR_8);

    if (VAR_7)
        FUNC_0(VAR_7);

    return VAR_9;
}
