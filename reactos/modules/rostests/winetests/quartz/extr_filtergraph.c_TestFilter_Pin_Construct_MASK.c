
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int const* lpVtbl; } ;
struct TYPE_5__ {int refCount; TYPE_2__ IPin_iface; int mtCurrent; int pinInfo; int pCritSec; int * pConnectedTo; } ;
typedef int PIN_INFO ;
typedef int LPCRITICAL_SECTION ;
typedef TYPE_1__ ITestPinImpl ;
typedef int IPinVtbl ;
typedef TYPE_2__ IPin ;
typedef int HRESULT ;
typedef int AM_MEDIA_TYPE ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_2(const IPinVtbl *VAR_2, const PIN_INFO * VAR_3, AM_MEDIA_TYPE *VAR_4,
                                        LPCRITICAL_SECTION VAR_5, IPin ** VAR_6)
{
    ITestPinImpl * VAR_7;

    *VAR_6 = ((void*)0);

    VAR_7 = FUNC_0(sizeof(ITestPinImpl));

    if (!VAR_7)
        return VAR_0;

    VAR_7->refCount = 1;
    VAR_7->pConnectedTo = ((void*)0);
    VAR_7->pCritSec = VAR_5;
    FUNC_1(&VAR_7->pinInfo, VAR_3);
    VAR_7->mtCurrent = *VAR_4;

    VAR_7->IPin_iface.lpVtbl = VAR_2;

    *VAR_6 = &VAR_7->IPin_iface;
    return VAR_1;
}
