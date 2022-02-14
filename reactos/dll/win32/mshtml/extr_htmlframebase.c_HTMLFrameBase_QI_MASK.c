
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLFrameBase2_iface; int IHTMLFrameBase_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLFrameBase ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;

HRESULT FUNC_4(HTMLFrameBase *VAR_3, REFIID VAR_4, void **VAR_5)
{
    if(FUNC_2(&VAR_0, VAR_4)) {
        FUNC_3("(%p)->(IID_IHTMLFrameBase %p)\n", VAR_3, VAR_5);
        *VAR_5 = &VAR_3->IHTMLFrameBase_iface;
    }else if(FUNC_2(&VAR_1, VAR_4)) {
        FUNC_3("(%p)->(IID_IHTMLFrameBase2 %p)\n", VAR_3, VAR_5);
        *VAR_5 = &VAR_3->IHTMLFrameBase2_iface;
    }else {
        return FUNC_0(&VAR_3->element.node, VAR_4, VAR_5);
    }

    FUNC_1((IUnknown*)*VAR_5);
    return VAR_2;
}
