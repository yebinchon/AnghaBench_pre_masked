
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int IConnectionPointContainer_iface; } ;
struct TYPE_5__ {int node; TYPE_1__ cp_container; int IHTMLElement4_iface; int IHTMLElement3_iface; int IHTMLElement2_iface; int IHTMLElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_7 ;
 TYPE_2__* FUNC_3 (int *) ;

HRESULT FUNC_4(HTMLDOMNode *VAR_8, REFIID VAR_9, void **VAR_10)
{
    HTMLElement *VAR_11 = FUNC_3(VAR_8);

    if(FUNC_2(&VAR_6, VAR_9)) {
        *VAR_10 = &VAR_11->IHTMLElement_iface;
    }else if(FUNC_2(&VAR_1, VAR_9)) {
        *VAR_10 = &VAR_11->IHTMLElement_iface;
    }else if(FUNC_2(&VAR_2, VAR_9)) {
        *VAR_10 = &VAR_11->IHTMLElement_iface;
    }else if(FUNC_2(&VAR_3, VAR_9)) {
        *VAR_10 = &VAR_11->IHTMLElement2_iface;
    }else if(FUNC_2(&VAR_4, VAR_9)) {
        *VAR_10 = &VAR_11->IHTMLElement3_iface;
    }else if(FUNC_2(&VAR_5, VAR_9)) {
        *VAR_10 = &VAR_11->IHTMLElement4_iface;
    }else if(FUNC_2(&VAR_0, VAR_9)) {
        *VAR_10 = &VAR_11->cp_container.IConnectionPointContainer_iface;
    }else {
        return FUNC_0(&VAR_11->node, VAR_9, VAR_10);
    }

    FUNC_1((IUnknown*)*VAR_10);
    return VAR_7;
}
