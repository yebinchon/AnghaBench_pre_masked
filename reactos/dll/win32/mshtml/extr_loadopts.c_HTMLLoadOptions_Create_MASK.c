
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_3__ IHtmlLoadOptions_iface; int * opts; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ HTMLLoadOptions ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,void**) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int *,int ,void**) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int) ;

HRESULT FUNC_5(IUnknown *VAR_2, REFIID VAR_3, void** VAR_4)
{
    HTMLLoadOptions *VAR_5;
    HRESULT VAR_6;

    FUNC_2("(%p %s %p)\n", VAR_2, FUNC_3(VAR_3), VAR_4);

    VAR_5 = FUNC_4(sizeof(HTMLLoadOptions));
    if(!VAR_5)
        return VAR_0;

    VAR_5->IHtmlLoadOptions_iface.lpVtbl = &VAR_1;
    VAR_5->ref = 1;
    VAR_5->opts = ((void*)0);

    VAR_6 = FUNC_0(&VAR_5->IHtmlLoadOptions_iface, VAR_3, VAR_4);
    FUNC_1(&VAR_5->IHtmlLoadOptions_iface);
    return VAR_6;
}
