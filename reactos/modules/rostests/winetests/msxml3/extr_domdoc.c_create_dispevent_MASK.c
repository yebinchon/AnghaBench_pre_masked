
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IDispatch_iface; } ;
typedef TYPE_2__ dispevent ;
typedef int IDispatch ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static IDispatch* FUNC_1(void)
{
    dispevent *VAR_1 = FUNC_0(sizeof(*VAR_1));

    VAR_1->IDispatch_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;

    return (IDispatch*)&VAR_1->IDispatch_iface;
}
