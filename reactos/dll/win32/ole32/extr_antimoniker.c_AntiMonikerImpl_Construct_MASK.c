
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int * pMarshal; scalar_t__ ref; TYPE_2__ IROTData_iface; TYPE_1__ IMoniker_iface; } ;
typedef int HRESULT ;
typedef TYPE_3__ AntiMonikerImpl ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_1(AntiMonikerImpl* VAR_3)
{

    FUNC_0("(%p)\n",VAR_3);


    VAR_3->IMoniker_iface.lpVtbl = &VAR_1;
    VAR_3->IROTData_iface.lpVtbl = &VAR_2;
    VAR_3->ref = 0;
    VAR_3->pMarshal = ((void*)0);

    return VAR_0;
}
