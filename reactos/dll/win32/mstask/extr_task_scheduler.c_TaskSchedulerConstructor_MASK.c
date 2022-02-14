
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_2__ ITaskScheduler_iface; } ;
typedef TYPE_1__ TaskSchedulerImpl ;
typedef TYPE_2__* LPVOID ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__**) ;
 int VAR_3 ;

HRESULT FUNC_4(LPVOID *VAR_4)
{
    TaskSchedulerImpl *VAR_5;
    FUNC_3("(%p)\n", VAR_4);

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_5));
    if (!VAR_5)
        return VAR_0;

    VAR_5->ITaskScheduler_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;

    *VAR_4 = &VAR_5->ITaskScheduler_iface;
    FUNC_2(&VAR_3);
    return VAR_2;
}
