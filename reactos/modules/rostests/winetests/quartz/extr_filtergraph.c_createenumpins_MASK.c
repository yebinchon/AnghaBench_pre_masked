
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int IBaseFilter_iface; } ;
typedef TYPE_1__ TestFilterImpl ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int refCount; int synctime; TYPE_3__ IEnumPins_iface; TYPE_1__* base; int (* receive_pin ) (TYPE_1__*,int ,int *,int *) ;scalar_t__ uIndex; } ;
typedef TYPE_2__ IEnumPinsImpl ;
typedef TYPE_3__ IEnumPins ;
typedef int HRESULT ;
typedef int (* FNOBTAINPIN ) (TYPE_1__*,int ,int *,int *) ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(IEnumPins ** VAR_4, FNOBTAINPIN VAR_5, TestFilterImpl *VAR_6)
{
    IEnumPinsImpl * VAR_7;

    if (!VAR_4)
        return VAR_1;

    VAR_7 = FUNC_0(sizeof(IEnumPinsImpl));
    if (!VAR_7)
    {
        *VAR_4 = ((void*)0);
        return VAR_0;
    }
    VAR_7->IEnumPins_iface.lpVtbl = &VAR_2;
    VAR_7->refCount = 1;
    VAR_7->uIndex = 0;
    VAR_7->receive_pin = VAR_5;
    VAR_7->base = VAR_6;
    FUNC_1(&VAR_6->IBaseFilter_iface);
    *VAR_4 = &VAR_7->IEnumPins_iface;

    VAR_5(VAR_6, ~0, ((void*)0), &VAR_7->synctime);

    return VAR_3;
}
