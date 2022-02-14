
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int node; int IInternetHostSecurityManager_iface; int basedoc; } ;
typedef int REFIID ;
typedef int IUnknown ;
typedef TYPE_1__ HTMLDocumentNode ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,void**) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,TYPE_1__*,int ,void**) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ,void**) ;
 TYPE_1__* FUNC_6 (int *) ;

__attribute__((used)) static HRESULT FUNC_7(HTMLDOMNode *VAR_3, REFIID VAR_4, void **VAR_5)
{
    HTMLDocumentNode *VAR_6 = FUNC_6(VAR_3);

    FUNC_3("(%p)->(%s %p)\n", VAR_6, FUNC_4(VAR_4), VAR_5);

    if(FUNC_5(&VAR_6->basedoc, VAR_4, VAR_5))
        return *VAR_5 ? VAR_2 : VAR_0;

    if(FUNC_2(&VAR_1, VAR_4))
        *VAR_5 = &VAR_6->IInternetHostSecurityManager_iface;
    else
        return FUNC_0(&VAR_6->node, VAR_4, VAR_5);

    FUNC_1((IUnknown*)*VAR_5);
    return VAR_2;
}
