
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLScreen_iface; int dispex; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLScreen ;
typedef TYPE_2__ HTMLScreen ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

HRESULT FUNC_2(IHTMLScreen **VAR_4)
{
    HTMLScreen *VAR_5;

    VAR_5 = FUNC_0(sizeof(HTMLScreen));
    if(!VAR_5)
        return VAR_0;

    VAR_5->IHTMLScreen_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;

    FUNC_1(&VAR_5->dispex, (IUnknown*)&VAR_5->IHTMLScreen_iface, &VAR_1);

    *VAR_4 = &VAR_5->IHTMLScreen_iface;
    return VAR_3;
}
