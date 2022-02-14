
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int * pMarshal; int clsid; scalar_t__ ref; TYPE_2__ IROTData_iface; TYPE_1__ IMoniker_iface; } ;
typedef int * REFCLSID ;
typedef int HRESULT ;
typedef TYPE_3__ ClassMoniker ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static HRESULT FUNC_2(ClassMoniker* VAR_3, REFCLSID VAR_4)
{
    FUNC_0("(%p,%s)\n",VAR_3,FUNC_1(VAR_4));


    VAR_3->IMoniker_iface.lpVtbl = &VAR_0;
    VAR_3->IROTData_iface.lpVtbl = &VAR_1;
    VAR_3->ref = 0;
    VAR_3->clsid = *VAR_4;
    VAR_3->pMarshal = ((void*)0);

    return VAR_2;
}
