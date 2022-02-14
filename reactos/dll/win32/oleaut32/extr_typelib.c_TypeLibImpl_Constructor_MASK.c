
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_8__ {int * lpVtbl; } ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_10__ {int ref; int dispatch_href; int ref_list; int guid_list; int string_list; int name_list; int custdata_list; int implib_list; TYPE_3__ ICreateTypeLib2_iface; TYPE_2__ ITypeComp_iface; TYPE_1__ ITypeLib2_iface; } ;
typedef TYPE_4__ ITypeLibImpl ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ITypeLibImpl* FUNC_2(void)
{
    ITypeLibImpl* VAR_3;

    VAR_3 = FUNC_0(sizeof(ITypeLibImpl));
    if (!VAR_3) return ((void*)0);

    VAR_3->ITypeLib2_iface.lpVtbl = &VAR_2;
    VAR_3->ITypeComp_iface.lpVtbl = &VAR_1;
    VAR_3->ICreateTypeLib2_iface.lpVtbl = &VAR_0;
    VAR_3->ref = 1;

    FUNC_1(&VAR_3->implib_list);
    FUNC_1(&VAR_3->custdata_list);
    FUNC_1(&VAR_3->name_list);
    FUNC_1(&VAR_3->string_list);
    FUNC_1(&VAR_3->guid_list);
    FUNC_1(&VAR_3->ref_list);
    VAR_3->dispatch_href = -1;

    return VAR_3;
}
