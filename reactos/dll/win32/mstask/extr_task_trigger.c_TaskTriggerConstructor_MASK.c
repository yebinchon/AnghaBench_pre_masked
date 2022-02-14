
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_11__ {int DaysInterval; } ;
struct TYPE_12__ {TYPE_1__ Daily; } ;
struct TYPE_16__ {int cbTriggerSize; TYPE_2__ Type; int TriggerType; int rgFlags; int wStartMinute; int wStartHour; int wBeginDay; int wBeginMonth; int wBeginYear; } ;
struct TYPE_13__ {int ref; TYPE_5__ ITaskTrigger_iface; TYPE_6__ triggerCond; } ;
typedef TYPE_3__ TaskTriggerImpl ;
struct TYPE_14__ {int wMinute; int wHour; int wDay; int wMonth; int wYear; } ;
typedef int TASK_TRIGGER ;
typedef TYPE_4__ SYSTEMTIME ;
typedef TYPE_5__* LPVOID ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,TYPE_5__**) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_6__*,int ,int) ;

HRESULT FUNC_6(LPVOID *VAR_6)
{
    TaskTriggerImpl *VAR_7;
    SYSTEMTIME VAR_8;
    FUNC_4("(%p)\n", VAR_6);

    VAR_7 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_7));
    if (!VAR_7)
        return VAR_0;

    VAR_7->ITaskTrigger_iface.lpVtbl = &VAR_1;
    VAR_7->ref = 1;



    FUNC_5(&VAR_7->triggerCond, 0, sizeof(TASK_TRIGGER));
    FUNC_0(&VAR_8);
    VAR_7->triggerCond.cbTriggerSize = sizeof(VAR_7->triggerCond);
    VAR_7->triggerCond.wBeginYear = VAR_8.wYear;
    VAR_7->triggerCond.wBeginMonth = VAR_8.wMonth;
    VAR_7->triggerCond.wBeginDay = VAR_8.wDay;
    VAR_7->triggerCond.wStartHour = VAR_8.wHour;
    VAR_7->triggerCond.wStartMinute = VAR_8.wMinute;
    VAR_7->triggerCond.rgFlags = VAR_4;
    VAR_7->triggerCond.TriggerType = VAR_3,
    VAR_7->triggerCond.Type.Daily.DaysInterval = 1;

    *VAR_6 = &VAR_7->ITaskTrigger_iface;
    FUNC_3(&VAR_5);
    return VAR_2;
}
