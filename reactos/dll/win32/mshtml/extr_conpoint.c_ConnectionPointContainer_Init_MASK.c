
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cpc_entry_t ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int * forward_container; int * outer; int * cps; int const* cp_entries; TYPE_1__ IConnectionPointContainer_iface; } ;
typedef int IUnknown ;
typedef TYPE_2__ ConnectionPointContainer ;


 int VAR_0 ;

void FUNC_0(ConnectionPointContainer *VAR_1, IUnknown *VAR_2, const cpc_entry_t *VAR_3)
{
    VAR_1->IConnectionPointContainer_iface.lpVtbl = &VAR_0;
    VAR_1->cp_entries = VAR_3;
    VAR_1->cps = ((void*)0);
    VAR_1->outer = VAR_2;
    VAR_1->forward_container = ((void*)0);
}
