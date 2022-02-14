
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLImgElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLImgElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_2__*,void**) ;
 TYPE_2__* FUNC_4 (int *) ;

__attribute__((used)) static HRESULT FUNC_5(HTMLDOMNode *VAR_2, REFIID VAR_3, void **VAR_4)
{
    HTMLImgElement *VAR_5 = FUNC_4(VAR_2);

    *VAR_4 = ((void*)0);

    if(FUNC_2(&VAR_0, VAR_3)) {
        FUNC_3("(%p)->(IID_IHTMLImgElement %p)\n", VAR_5, VAR_4);
        *VAR_4 = &VAR_5->IHTMLImgElement_iface;
    }else {
        return FUNC_0(&VAR_5->element.node, VAR_3, VAR_4);
    }

    FUNC_1((IUnknown*)*VAR_4);
    return VAR_1;
}
