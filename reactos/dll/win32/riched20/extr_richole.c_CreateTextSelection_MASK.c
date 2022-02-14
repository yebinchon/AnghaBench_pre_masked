
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int * reOle; TYPE_1__ ITextSelection_iface; } ;
typedef TYPE_2__ ITextSelectionImpl ;
typedef int IRichEditOleImpl ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static ITextSelectionImpl *
FUNC_1(IRichEditOleImpl *VAR_1)
{
    ITextSelectionImpl *VAR_2 = FUNC_0(sizeof *VAR_2);
    if (!VAR_2)
        return ((void*)0);

    VAR_2->ITextSelection_iface.lpVtbl = &VAR_0;
    VAR_2->ref = 1;
    VAR_2->reOle = VAR_1;
    return VAR_2;
}
