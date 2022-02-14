
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int nsIDOMNodeList ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_9__ {int ref; TYPE_1__ IHTMLDOMChildrenCollection_iface; int dispex; TYPE_2__* doc; int * nslist; } ;
struct TYPE_8__ {int basedoc; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLDOMChildrenCollection ;
typedef TYPE_2__ HTMLDocumentNode ;
typedef TYPE_3__ HTMLDOMChildrenCollection ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static IHTMLDOMChildrenCollection *FUNC_4(HTMLDocumentNode *VAR_2, nsIDOMNodeList *VAR_3)
{
    HTMLDOMChildrenCollection *VAR_4;

    VAR_4 = FUNC_0(sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);

    VAR_4->IHTMLDOMChildrenCollection_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;

    FUNC_3(VAR_3);
    VAR_4->nslist = VAR_3;

    FUNC_1(&VAR_2->basedoc);
    VAR_4->doc = VAR_2;

    FUNC_2(&VAR_4->dispex, (IUnknown*)&VAR_4->IHTMLDOMChildrenCollection_iface,
            &VAR_1);

    return &VAR_4->IHTMLDOMChildrenCollection_iface;
}
