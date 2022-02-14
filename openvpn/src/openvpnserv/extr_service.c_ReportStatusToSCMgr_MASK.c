
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dwCurrentState; scalar_t__ dwCheckPoint; scalar_t__ dwControlsAccepted; } ;
typedef int SERVICE_STATUS_HANDLE ;
typedef TYPE_1__ SERVICE_STATUS ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;

BOOL
FUNC_3(SERVICE_STATUS_HANDLE VAR_6, SERVICE_STATUS *VAR_7)
{
    static DWORD VAR_8 = 1;
    BOOL VAR_9 = VAR_5;

    if (VAR_7->dwCurrentState == VAR_3)
    {
        VAR_7->dwControlsAccepted = 0;
    }
    else
    {
        VAR_7->dwControlsAccepted = VAR_1;
    }

    if (VAR_7->dwCurrentState == VAR_2
        || VAR_7->dwCurrentState == VAR_4)
    {
        VAR_7->dwCheckPoint = 0;
    }
    else
    {
        VAR_7->dwCheckPoint = VAR_8++;
    }


    VAR_9 = FUNC_1(VAR_6, VAR_7);
    if (!VAR_9)
    {
        FUNC_0(VAR_0, FUNC_2("SetServiceStatus"));
    }

    return VAR_9;
}
