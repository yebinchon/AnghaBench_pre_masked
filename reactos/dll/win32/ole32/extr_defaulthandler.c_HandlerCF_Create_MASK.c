
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_2__ IClassFactory_iface; int clsid; scalar_t__ refs; } ;
typedef int REFIID ;
typedef int * REFCLSID ;
typedef int LPVOID ;
typedef TYPE_1__ HandlerCF ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,int ,int *) ;

HRESULT FUNC_5(REFCLSID VAR_2, REFIID VAR_3, LPVOID *VAR_4)
{
    HRESULT VAR_5;
    HandlerCF *VAR_6 = FUNC_2(FUNC_1(), 0, sizeof(*VAR_6));
    if (!VAR_6) return VAR_0;
    VAR_6->IClassFactory_iface.lpVtbl = &VAR_1;
    VAR_6->refs = 0;
    VAR_6->clsid = *VAR_2;

    VAR_5 = FUNC_4(&VAR_6->IClassFactory_iface, VAR_3, VAR_4);
    if (FUNC_0(VAR_5))
        FUNC_3(FUNC_1(), 0, VAR_6);

    return VAR_5;
}
