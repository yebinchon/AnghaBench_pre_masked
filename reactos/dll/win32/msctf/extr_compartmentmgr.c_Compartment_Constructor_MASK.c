
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int refCount; TYPE_2__ ITfCompartment_iface; int CompartmentEventSink; int variant; int * valueData; TYPE_1__ ITfSource_iface; } ;
typedef TYPE_2__ ITfCompartment ;
typedef int HRESULT ;
typedef int CompartmentValue ;
typedef TYPE_3__ Compartment ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (char*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(CompartmentValue *VAR_5, ITfCompartment **VAR_6)
{
    Compartment *VAR_7;

    VAR_7 = FUNC_1(FUNC_0(),VAR_3,sizeof(Compartment));
    if (VAR_7 == ((void*)0))
        return VAR_2;

    VAR_7->ITfCompartment_iface.lpVtbl= &VAR_1;
    VAR_7->ITfSource_iface.lpVtbl = &VAR_0;
    VAR_7->refCount = 1;

    VAR_7->valueData = VAR_5;
    FUNC_3(&VAR_7->variant);

    FUNC_4(&VAR_7->CompartmentEventSink);

    *VAR_6 = &VAR_7->ITfCompartment_iface;
    FUNC_2("returning %p\n", *VAR_6);
    return VAR_4;
}
