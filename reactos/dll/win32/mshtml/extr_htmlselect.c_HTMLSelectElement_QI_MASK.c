
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLSelectElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLSelectElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_4, REFIID VAR_5, void **VAR_6)
{
    HTMLSelectElement *VAR_7 = FUNC_4(VAR_4);

    *VAR_6 = ((void*)0);

    if(FUNC_2(&VAR_2, VAR_5)) {
        FUNC_3("(%p)->(IID_IUnknown %p)\n", VAR_7, VAR_6);
        *VAR_6 = &VAR_7->IHTMLSelectElement_iface;
    }else if(FUNC_2(&VAR_0, VAR_5)) {
        FUNC_3("(%p)->(IID_IDispatch %p)\n", VAR_7, VAR_6);
        *VAR_6 = &VAR_7->IHTMLSelectElement_iface;
    }else if(FUNC_2(&VAR_1, VAR_5)) {
        FUNC_3("(%p)->(IID_IHTMLSelectElement %p)\n", VAR_7, VAR_6);
        *VAR_6 = &VAR_7->IHTMLSelectElement_iface;
    }

    if(*VAR_6) {
        FUNC_1((IUnknown*)*VAR_6);
        return VAR_3;
    }

    return FUNC_0(&VAR_7->element.node, VAR_5, VAR_6);
}
