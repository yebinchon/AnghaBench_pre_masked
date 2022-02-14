
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_2__ IClassFactory_iface; int clsid; } ;
typedef int IID ;
typedef TYPE_1__ IClassFactoryImpl ;
typedef int HRESULT ;
typedef int CLSID ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int const*,void**) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static HRESULT FUNC_4(const CLSID *VAR_2, const IID *VAR_3, void **VAR_4)
{
    IClassFactoryImpl *VAR_5;
    HRESULT VAR_6;

    *VAR_4 = ((void*)0);

    VAR_5 = FUNC_1(FUNC_0(), 0, sizeof(*VAR_5));
    if (!VAR_5)
        return VAR_0;

    VAR_5->IClassFactory_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;
    VAR_5->clsid = *VAR_2;

    VAR_6 = FUNC_2(&VAR_5->IClassFactory_iface, VAR_3, VAR_4);
    FUNC_3(&VAR_5->IClassFactory_iface);

    return VAR_6;
}
