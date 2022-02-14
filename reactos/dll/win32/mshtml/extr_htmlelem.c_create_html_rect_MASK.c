
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsIDOMClientRect ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLRect_iface; int * nsrect; int dispex; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLRect ;
typedef TYPE_2__ HTMLRect ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(nsIDOMClientRect *VAR_4, IHTMLRect **VAR_5)
{
    HTMLRect *VAR_6;

    VAR_6 = FUNC_0(sizeof(HTMLRect));
    if(!VAR_6)
        return VAR_0;

    VAR_6->IHTMLRect_iface.lpVtbl = &VAR_1;
    VAR_6->ref = 1;

    FUNC_1(&VAR_6->dispex, (IUnknown*)&VAR_6->IHTMLRect_iface, &VAR_2);

    FUNC_2(VAR_4);
    VAR_6->nsrect = VAR_4;

    *VAR_5 = &VAR_6->IHTMLRect_iface;
    return VAR_3;
}
