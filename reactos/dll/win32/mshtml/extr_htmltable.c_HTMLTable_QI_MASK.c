
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLTable3_iface; int IHTMLTable2_iface; int IHTMLTable_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLTable ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_6, REFIID VAR_7, void **VAR_8)
{
    HTMLTable *VAR_9 = FUNC_4(VAR_6);

    *VAR_8 = ((void*)0);

    if(FUNC_2(&VAR_4, VAR_7)) {
        FUNC_3("(%p)->(IID_IUnknown %p)\n", VAR_9, VAR_8);
        *VAR_8 = &VAR_9->IHTMLTable_iface;
    }else if(FUNC_2(&VAR_0, VAR_7)) {
        FUNC_3("(%p)->(IID_IDispatch %p)\n", VAR_9, VAR_8);
        *VAR_8 = &VAR_9->IHTMLTable_iface;
    }else if(FUNC_2(&VAR_1, VAR_7)) {
        FUNC_3("(%p)->(IID_IHTMLTable %p)\n", VAR_9, VAR_8);
        *VAR_8 = &VAR_9->IHTMLTable_iface;
    }else if(FUNC_2(&VAR_2, VAR_7)) {
        FUNC_3("(%p)->(IID_IHTMLTable2 %p)\n", VAR_9, VAR_8);
        *VAR_8 = &VAR_9->IHTMLTable2_iface;
    }else if(FUNC_2(&VAR_3, VAR_7)) {
        FUNC_3("(%p)->(IID_IHTMLTable3 %p)\n", VAR_9, VAR_8);
        *VAR_8 = &VAR_9->IHTMLTable3_iface;
    }

    if(*VAR_8) {
        FUNC_1((IUnknown*)*VAR_8);
        return VAR_5;
    }

    return FUNC_0(&VAR_9->element.node, VAR_7, VAR_8);
}
