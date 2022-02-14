
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; int maxRunTime; TYPE_3__ ITask_iface; int * accountName; int * comment; int * parameters; int * applicationName; void* taskName; TYPE_1__ IPersistFile_iface; } ;
typedef TYPE_2__ TaskImpl ;
typedef TYPE_3__* LPVOID ;
typedef int LPCWSTR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,TYPE_3__**) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (int ) ;

HRESULT FUNC_8(LPCWSTR VAR_5, LPVOID *VAR_6)
{
    TaskImpl *VAR_7;
    int VAR_8;

    FUNC_4("(%s, %p)\n", FUNC_5(VAR_5), VAR_6);

    VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_7));
    if (!VAR_7)
        return VAR_0;

    VAR_7->ITask_iface.lpVtbl = &VAR_2;
    VAR_7->IPersistFile_iface.lpVtbl = &VAR_1;
    VAR_7->ref = 1;
    VAR_8 = (FUNC_7(VAR_5) + 1) * sizeof(WCHAR);
    VAR_7->taskName = FUNC_1(FUNC_0(), 0, VAR_8);
    if (!VAR_7->taskName)
    {
        FUNC_2(FUNC_0(), 0, VAR_7);
        return VAR_0;
    }
    FUNC_6(VAR_7->taskName, VAR_5);
    VAR_7->applicationName = ((void*)0);
    VAR_7->parameters = ((void*)0);
    VAR_7->comment = ((void*)0);
    VAR_7->accountName = ((void*)0);


    VAR_7->maxRunTime = 259200000;

    *VAR_6 = &VAR_7->ITask_iface;
    FUNC_3(&VAR_4);
    return VAR_3;
}
