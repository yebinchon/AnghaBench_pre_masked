
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IHTMLElementCollection_iface; int dispex; int len; int ** elems; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLElementCollection ;
typedef TYPE_2__ HTMLElementCollection ;
typedef int HTMLElement ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *) ;

__attribute__((used)) static IHTMLElementCollection *FUNC_3(HTMLElement **VAR_2, DWORD VAR_3)
{
    HTMLElementCollection *VAR_4 = FUNC_1(sizeof(HTMLElementCollection));

    if (!VAR_4)
        return ((void*)0);

    VAR_4->IHTMLElementCollection_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->elems = VAR_2;
    VAR_4->len = VAR_3;

    FUNC_2(&VAR_4->dispex, (IUnknown*)&VAR_4->IHTMLElementCollection_iface,
            &VAR_1);

    FUNC_0("ret=%p len=%d\n", VAR_4, VAR_3);

    return &VAR_4->IHTMLElementCollection_iface;
}
