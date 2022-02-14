
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int framebase; int IHTMLIFrameElement3_iface; int IHTMLIFrameElement2_iface; int IHTMLIFrameElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ HTMLIFrame ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,TYPE_1__*,void**) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_4, REFIID VAR_5, void **VAR_6)
{
    HTMLIFrame *VAR_7 = FUNC_4(VAR_4);

    if(FUNC_2(&VAR_0, VAR_5)) {
        FUNC_3("(%p)->(IID_IHTMLIFrameElement %p)\n", VAR_7, VAR_6);
        *VAR_6 = &VAR_7->IHTMLIFrameElement_iface;
    }else if(FUNC_2(&VAR_1, VAR_5)) {
        FUNC_3("(%p)->(IID_IHTMLIFrameElement2 %p)\n", VAR_7, VAR_6);
        *VAR_6 = &VAR_7->IHTMLIFrameElement2_iface;
    }else if(FUNC_2(&VAR_2, VAR_5)) {
        FUNC_3("(%p)->(IID_IHTMLIFrameElement3 %p)\n", VAR_7, VAR_6);
        *VAR_6 = &VAR_7->IHTMLIFrameElement3_iface;
    }else {
        return FUNC_0(&VAR_7->framebase, VAR_5, VAR_6);
    }

    FUNC_1((IUnknown*)*VAR_6);
    return VAR_3;
}
