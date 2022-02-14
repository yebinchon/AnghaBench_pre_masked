
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int * window; TYPE_1__ IOmHistory_iface; int dispex; } ;
typedef TYPE_2__ OmHistory ;
typedef int IUnknown ;
typedef int HTMLInnerWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;

HRESULT FUNC_2(HTMLInnerWindow *VAR_4, OmHistory **VAR_5)
{
    OmHistory *VAR_6;

    VAR_6 = FUNC_0(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    FUNC_1(&VAR_6->dispex, (IUnknown*)&VAR_6->IOmHistory_iface, &VAR_2);
    VAR_6->IOmHistory_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;

    VAR_6->window = VAR_4;

    *VAR_5 = VAR_6;
    return VAR_3;
}
