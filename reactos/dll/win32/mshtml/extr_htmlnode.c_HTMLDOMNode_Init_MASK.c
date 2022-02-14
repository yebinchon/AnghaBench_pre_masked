
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ nsresult ;
typedef int nsISupports ;
typedef int nsIDOMNode ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {TYPE_1__ IHTMLDOMNode_iface; int * nsnode; TYPE_3__* doc; int ccref; TYPE_2__ IHTMLDOMNode2_iface; } ;
struct TYPE_9__ {int basedoc; TYPE_4__ node; } ;
typedef TYPE_3__ HTMLDocumentNode ;
typedef TYPE_4__ HTMLDOMNode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

void FUNC_5(HTMLDocumentNode *VAR_3, HTMLDOMNode *VAR_4, nsIDOMNode *VAR_5)
{
    nsresult VAR_6;

    VAR_4->IHTMLDOMNode_iface.lpVtbl = &VAR_1;
    VAR_4->IHTMLDOMNode2_iface.lpVtbl = &VAR_0;

    FUNC_1(&VAR_4->ccref, 1);

    if(&VAR_3->node != VAR_4)
        FUNC_2(&VAR_3->basedoc);
    VAR_4->doc = VAR_3;

    FUNC_3(VAR_5);
    VAR_4->nsnode = VAR_5;

    VAR_6 = FUNC_4(VAR_5, (nsISupports*)&VAR_4->IHTMLDOMNode_iface);
    FUNC_0(VAR_6 == VAR_2);
}
