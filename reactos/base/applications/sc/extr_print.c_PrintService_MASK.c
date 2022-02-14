
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwServiceFlags; int dwProcessId; } ;
typedef TYPE_1__* LPSERVICE_STATUS_PROCESS ;
typedef int LPSERVICE_STATUS ;
typedef scalar_t__ LPCTSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,...) ;

VOID
FUNC_3(LPCTSTR VAR_0,
             LPCTSTR VAR_1,
             LPSERVICE_STATUS_PROCESS VAR_2,
             BOOL VAR_3)
{
    FUNC_2(FUNC_1("SERVICE_NAME: %s\n"), VAR_0);

    if (VAR_1)
        FUNC_2(FUNC_1("DISPLAY_NAME: %s\n"), VAR_1);


    FUNC_0((LPSERVICE_STATUS)VAR_2);

    if (VAR_3)
    {
        FUNC_2(FUNC_1("\tPID                : %lu\n"),
            VAR_2->dwProcessId);
        FUNC_2(FUNC_1("\tFLAGS              : %lu\n"),
            VAR_2->dwServiceFlags);
    }

    FUNC_2(FUNC_1("\n"));
}
