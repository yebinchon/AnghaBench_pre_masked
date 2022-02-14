
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLInputTextElement_iface; int IHTMLInputElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLInputElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_5, REFIID VAR_6, void **VAR_7)
{
    HTMLInputElement *VAR_8 = FUNC_4(VAR_5);

    *VAR_7 = ((void*)0);

    if(FUNC_2(&VAR_3, VAR_6)) {
        FUNC_3("(%p)->(IID_IUnknown %p)\n", VAR_8, VAR_7);
        *VAR_7 = &VAR_8->IHTMLInputElement_iface;
    }else if(FUNC_2(&VAR_0, VAR_6)) {
        FUNC_3("(%p)->(IID_IDispatch %p)\n", VAR_8, VAR_7);
        *VAR_7 = &VAR_8->IHTMLInputElement_iface;
    }else if(FUNC_2(&VAR_1, VAR_6)) {
        FUNC_3("(%p)->(IID_IHTMLInputElement %p)\n", VAR_8, VAR_7);
        *VAR_7 = &VAR_8->IHTMLInputElement_iface;
    }else if(FUNC_2(&VAR_2, VAR_6)) {
        FUNC_3("(%p)->(IID_IHTMLInputTextElement %p)\n", VAR_8, VAR_7);
        *VAR_7 = &VAR_8->IHTMLInputTextElement_iface;
    }

    if(*VAR_7) {
        FUNC_1((IUnknown*)*VAR_7);
        return VAR_4;
    }

    return FUNC_0(&VAR_8->element.node, VAR_6, VAR_7);
}
