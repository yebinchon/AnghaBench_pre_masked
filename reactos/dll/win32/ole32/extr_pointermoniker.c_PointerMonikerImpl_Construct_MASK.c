
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int * pObject; TYPE_1__ IMoniker_iface; } ;
typedef TYPE_2__ PointerMonikerImpl ;
typedef int IUnknown ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(PointerMonikerImpl* VAR_1, IUnknown *VAR_2)
{
    FUNC_1("(%p)\n",VAR_1);


    VAR_1->IMoniker_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    if (VAR_2)
        FUNC_0(VAR_2);
    VAR_1->pObject = VAR_2;
}
