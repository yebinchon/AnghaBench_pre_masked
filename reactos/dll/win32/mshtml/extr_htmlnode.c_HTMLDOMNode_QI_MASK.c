
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dispex; } ;
struct TYPE_7__ {TYPE_1__ event_target; int IHTMLDOMNode_iface; int IHTMLDOMNode2_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLDOMNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*,TYPE_2__*,int ,void**) ;
 int FUNC_3 (char*,TYPE_2__*,int ,void**) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,void**) ;
 int VAR_9 ;

HRESULT FUNC_6(HTMLDOMNode *VAR_10, REFIID VAR_11, void **VAR_12)
{
    FUNC_2("(%p)->(%s %p)\n", VAR_10, FUNC_4(VAR_11), VAR_12);

    if(FUNC_1(&VAR_4, VAR_11)) {
        *VAR_12 = &VAR_10->IHTMLDOMNode_iface;
    }else if(FUNC_1(&VAR_1, VAR_11)) {
        *VAR_12 = &VAR_10->IHTMLDOMNode_iface;
    }else if(FUNC_1(&VAR_2, VAR_11)) {
        *VAR_12 = &VAR_10->IHTMLDOMNode_iface;
    }else if(FUNC_1(&VAR_3, VAR_11)) {
        *VAR_12 = &VAR_10->IHTMLDOMNode2_iface;
    }else if(FUNC_1(&VAR_6, VAR_11)) {
        *VAR_12 = &VAR_9;
        return VAR_7;
    }else if(FUNC_1(&VAR_5, VAR_11)) {
        *VAR_12 = &VAR_10->IHTMLDOMNode_iface;
        return VAR_7;
    }else if(FUNC_5(&VAR_10->event_target.dispex, VAR_11, VAR_12)) {
        return *VAR_12 ? VAR_8 : VAR_0;
    }else {
        *VAR_12 = ((void*)0);
        FUNC_3("(%p)->(%s %p)\n", VAR_10, FUNC_4(VAR_11), VAR_12);
        return VAR_0;
    }

    FUNC_0((IUnknown*)*VAR_12);
    return VAR_8;
}
