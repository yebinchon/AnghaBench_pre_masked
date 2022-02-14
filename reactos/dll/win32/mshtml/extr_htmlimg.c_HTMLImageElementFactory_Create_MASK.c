
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLImageElementFactory_iface; int dispex; int * window; } ;
typedef int IUnknown ;
typedef int HTMLInnerWindow ;
typedef TYPE_2__ HTMLImageElementFactory ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

HRESULT FUNC_2(HTMLInnerWindow *VAR_4, HTMLImageElementFactory **VAR_5)
{
    HTMLImageElementFactory *VAR_6;

    VAR_6 = FUNC_0(sizeof(HTMLImageElementFactory));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IHTMLImageElementFactory_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;
    VAR_6->window = VAR_4;

    FUNC_1(&VAR_6->dispex, (IUnknown*)&VAR_6->IHTMLImageElementFactory_iface,
            &VAR_2);

    *VAR_5 = VAR_6;
    return VAR_3;
}
