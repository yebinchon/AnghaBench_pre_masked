
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_12__ {int ref; TYPE_2__ IRichEditOle_iface; TYPE_3__ IUnknown_inner; TYPE_3__* outer_unk; int clientsites; int rangelist; int * txtSel; int * editor; TYPE_1__ ITextDocument2Old_iface; } ;
typedef int ME_TextEditor ;
typedef int LRESULT ;
typedef TYPE_2__* LPVOID ;
typedef TYPE_3__ IUnknown ;
typedef TYPE_4__ IRichEditOleImpl ;


 int FUNC_0 (char*,TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

LRESULT FUNC_3(IUnknown *VAR_3, ME_TextEditor *VAR_4, LPVOID *VAR_5)
{
    IRichEditOleImpl *VAR_6;

    VAR_6 = FUNC_1(sizeof(IRichEditOleImpl));
    if (!VAR_6)
        return 0;

    VAR_6->IUnknown_inner.lpVtbl = &VAR_0;
    VAR_6->IRichEditOle_iface.lpVtbl = &VAR_1;
    VAR_6->ITextDocument2Old_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->editor = VAR_4;
    VAR_6->txtSel = ((void*)0);

    FUNC_0("Created %p\n",VAR_6);
    FUNC_2(&VAR_6->rangelist);
    FUNC_2(&VAR_6->clientsites);
    if (VAR_3)
        VAR_6->outer_unk = VAR_3;
    else
        VAR_6->outer_unk = &VAR_6->IUnknown_inner;
    *VAR_5 = &VAR_6->IRichEditOle_iface;

    return 1;
}
