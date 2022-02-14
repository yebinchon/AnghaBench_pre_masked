
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_6__ {int dwSize; } ;
struct TYPE_7__ {int ref; TYPE_3__ IReferenceClock_iface; TYPE_1__ pClockInfo; scalar_t__ rtTime; } ;
typedef int * LPVOID ;
typedef int LPUNKNOWN ;
typedef int LPCGUID ;
typedef TYPE_2__ IReferenceClockImpl ;
typedef int HRESULT ;
typedef int DMUS_CLOCKINFO ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,int ,int **) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_5 (char*,int ,int **,int ) ;
 int FUNC_6 (int ) ;

HRESULT FUNC_7(LPCGUID VAR_3, LPVOID* VAR_4, LPUNKNOWN VAR_5)
{
    IReferenceClockImpl* VAR_6;
    HRESULT VAR_7;

    FUNC_5("(%s, %p, %p)\n", FUNC_6(VAR_3), VAR_4, VAR_5);

    VAR_6 = FUNC_2(FUNC_1(), VAR_1, sizeof(IReferenceClockImpl));
    if (!VAR_6) {
        *VAR_4 = ((void*)0);
        return VAR_0;
    }

    VAR_6->IReferenceClock_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->rtTime = 0;
    VAR_6->pClockInfo.dwSize = sizeof (DMUS_CLOCKINFO);

    FUNC_0();
    VAR_7 = FUNC_3(&VAR_6->IReferenceClock_iface, VAR_3, VAR_4);
    FUNC_4(&VAR_6->IReferenceClock_iface);

    return VAR_7;
}
