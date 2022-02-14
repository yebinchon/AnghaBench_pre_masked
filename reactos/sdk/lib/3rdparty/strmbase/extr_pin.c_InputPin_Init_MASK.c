
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int const* lpVtbl; } ;
struct TYPE_9__ {int refCount; double dRate; TYPE_1__ IPin_iface; int * pFuncsTable; int mtCurrent; int pinInfo; scalar_t__ tStop; scalar_t__ tStart; int pCritSec; int * pConnectedTo; } ;
struct TYPE_12__ {int end_of_stream; int flushing; TYPE_3__ IMemInputPin_iface; TYPE_2__ pin; int * preferred_allocator; int * pAllocator; TYPE_4__ const* pFuncsTable; } ;
struct TYPE_11__ {int base; } ;
typedef int PIN_INFO ;
typedef int LPCRITICAL_SECTION ;
typedef int IPinVtbl ;
typedef int IMemAllocator ;
typedef int HRESULT ;
typedef TYPE_4__ BaseInputPinFuncTable ;
typedef TYPE_5__ BaseInputPin ;
typedef int AM_MEDIA_TYPE ;


 int FUNC_0 (int *,int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_4(const IPinVtbl *VAR_3, const PIN_INFO * VAR_4,
                             const BaseInputPinFuncTable* VAR_5,
                             LPCRITICAL_SECTION VAR_6, IMemAllocator *VAR_7, BaseInputPin * VAR_8)
{
    FUNC_2("\n");


    VAR_8->pin.refCount = 1;
    VAR_8->pin.pConnectedTo = ((void*)0);
    VAR_8->pin.pCritSec = VAR_6;
    VAR_8->pin.tStart = 0;
    VAR_8->pin.tStop = 0;
    VAR_8->pin.dRate = 1.0;
    FUNC_0(&VAR_8->pin.pinInfo, VAR_4);
    FUNC_3(&VAR_8->pin.mtCurrent, sizeof(AM_MEDIA_TYPE));
    VAR_8->pin.pFuncsTable = &VAR_5->base;


    VAR_8->pFuncsTable = VAR_5;
    VAR_8->pAllocator = VAR_8->preferred_allocator = VAR_7;
    if (VAR_8->preferred_allocator)
        FUNC_1(VAR_8->preferred_allocator);
    VAR_8->pin.IPin_iface.lpVtbl = VAR_3;
    VAR_8->IMemInputPin_iface.lpVtbl = &VAR_1;
    VAR_8->flushing = VAR_8->end_of_stream = VAR_0;

    return VAR_2;
}
