
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int nsIDOMRange ;
struct TYPE_11__ {int range_list; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; TYPE_2__ IHTMLTxtRange_iface; int entry; TYPE_4__* doc; int * nsrange; TYPE_1__ IOleCommandTarget_iface; int dispex; } ;
typedef int IUnknown ;
typedef TYPE_2__ IHTMLTxtRange ;
typedef TYPE_3__ HTMLTxtRange ;
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
 int FUNC_3 (int *) ;

HRESULT FUNC_4(HTMLDocumentNode *VAR_5, nsIDOMRange *VAR_6, IHTMLTxtRange **VAR_7)
{
    HTMLTxtRange *VAR_8;

    VAR_8 = FUNC_0(sizeof(HTMLTxtRange));
    if(!VAR_8)
        return VAR_0;

    FUNC_1(&VAR_8->dispex, (IUnknown*)&VAR_8->IHTMLTxtRange_iface, &VAR_2);

    VAR_8->IHTMLTxtRange_iface.lpVtbl = &VAR_1;
    VAR_8->IOleCommandTarget_iface.lpVtbl = &VAR_3;
    VAR_8->ref = 1;

    if(VAR_6)
        FUNC_3(VAR_6);
    VAR_8->nsrange = VAR_6;

    VAR_8->doc = VAR_5;
    FUNC_2(&VAR_5->range_list, &VAR_8->entry);

    *VAR_7 = &VAR_8->IHTMLTxtRange_iface;
    return VAR_4;
}
