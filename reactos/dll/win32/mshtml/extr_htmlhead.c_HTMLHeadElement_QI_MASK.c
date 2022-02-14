
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_6__ {TYPE_1__ element; int IHTMLHeadElement_iface; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_2__ HTMLHeadElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int FUNC_0 (int *,int ,void**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,TYPE_2__*,int ,void**) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(HTMLDOMNode *VAR_2, REFIID VAR_3, void **VAR_4)
{
    HTMLHeadElement *VAR_5 = FUNC_5(VAR_2);

    FUNC_3("(%p)->(%s %p)\n", VAR_5, FUNC_4(VAR_3), VAR_4);

    if(FUNC_2(&VAR_0, VAR_3))
        *VAR_4 = &VAR_5->IHTMLHeadElement_iface;
    else
        return FUNC_0(&VAR_5->element.node, VAR_3, VAR_4);

    FUNC_1((IUnknown*)*VAR_4);
    return VAR_1;
}
