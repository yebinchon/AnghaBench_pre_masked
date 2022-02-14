
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLButtonElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef int HTMLDOMNode ;
typedef TYPE_2__ HTMLButtonElement ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_3, REFIID VAR_4, void **VAR_5)
{
    HTMLButtonElement *VAR_6 = FUNC_4(VAR_3);

    *VAR_5 = ((void*)0);

    if(FUNC_2(&VAR_1, VAR_4)) {
        FUNC_3("(%p)->(IID_IUnknown %p)\n", VAR_6, VAR_5);
        *VAR_5 = &VAR_6->IHTMLButtonElement_iface;
    }else if(FUNC_2(&VAR_0, VAR_4)) {
        FUNC_3("(%p)->(IID_IHTMLButtonElement %p)\n", VAR_6, VAR_5);
        *VAR_5 = &VAR_6->IHTMLButtonElement_iface;
    }else {
        return FUNC_0(&VAR_6->element.node, VAR_4, VAR_5);
    }

    FUNC_1((IUnknown*)*VAR_5);
    return VAR_2;
}
