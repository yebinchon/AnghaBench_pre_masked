
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsISelection ;
struct TYPE_11__ {int selection_list; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; TYPE_2__ IHTMLSelectionObject_iface; int entry; TYPE_4__* doc; int * nsselection; TYPE_1__ IHTMLSelectionObject2_iface; int dispex; } ;
typedef int IUnknown ;
typedef TYPE_2__ IHTMLSelectionObject ;
typedef TYPE_3__ HTMLSelectionObject ;
typedef TYPE_4__ HTMLDocumentNode ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;

HRESULT FUNC_3(HTMLDocumentNode *VAR_5, nsISelection *VAR_6, IHTMLSelectionObject **VAR_7)
{
    HTMLSelectionObject *VAR_8;

    VAR_8 = FUNC_0(sizeof(HTMLSelectionObject));
    if(!VAR_8)
        return VAR_0;

    FUNC_1(&VAR_8->dispex, (IUnknown*)&VAR_8->IHTMLSelectionObject_iface, &VAR_3);

    VAR_8->IHTMLSelectionObject_iface.lpVtbl = &VAR_2;
    VAR_8->IHTMLSelectionObject2_iface.lpVtbl = &VAR_1;
    VAR_8->ref = 1;
    VAR_8->nsselection = VAR_6;

    VAR_8->doc = VAR_5;
    FUNC_2(&VAR_5->selection_list, &VAR_8->entry);

    *VAR_7 = &VAR_8->IHTMLSelectionObject_iface;
    return VAR_4;
}
