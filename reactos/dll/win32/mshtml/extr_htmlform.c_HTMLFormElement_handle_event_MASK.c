
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nsIDOMEvent ;
struct TYPE_4__ {int node; } ;
struct TYPE_5__ {TYPE_1__ element; int IHTMLFormElement_iface; } ;
typedef TYPE_2__ HTMLFormElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDOMNode *VAR_2, DWORD VAR_3, nsIDOMEvent *VAR_4, BOOL *VAR_5)
{
    HTMLFormElement *VAR_6 = FUNC_2(VAR_2);

    if(VAR_3 == VAR_0) {
        *VAR_5 = VAR_1;
        return FUNC_1(&VAR_6->IHTMLFormElement_iface);
    }

    return FUNC_0(&VAR_6->element.node, VAR_3, VAR_4, VAR_5);
}
